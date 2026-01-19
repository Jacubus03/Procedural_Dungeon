#include "ADungeonGenerator.h"
#include "ARoomBase.h"
#include "ADoorBase.h"
#include "Engine/OverlapResult.h"
#include "Engine/World.h"
#include "Kismet/KismetMathLibrary.h"

ADungeonGenerator::ADungeonGenerator()
{
    PrimaryActorTick.bCanEverTick = false;
}

void ADungeonGenerator::BeginPlay()
{
    Super::BeginPlay();

    FRandomStream RandomStream;
    if (bRandomSeed) RandomStream.GenerateNewSeed();
    else RandomStream = InitialSeed;

	GenerateDungeon(RandomStream);

	UE_LOG(LogTemp, Warning, TEXT("Dungeon generated with seed: %d"), RandomStream.GetCurrentSeed());
}

void ADungeonGenerator::GenerateDungeon(FRandomStream& Seed)
{
	TArray<ADoorBase*> OpenDoors;

	// Spawn First Room
    int32 RandomIndex = Seed.RandRange(0, RoomPrefabs.Num() - 1);
    TSubclassOf<ARoomBase> CurrentRoomClass = RoomPrefabs[RandomIndex];
    ARoomBase* CurrentRoom = GetWorld()->SpawnActor<ARoomBase>(
        CurrentRoomClass,
        FVector::ZeroVector,
        FRotator::ZeroRotator
    );
    if (!IsValid(CurrentRoom)) return;

	// Add its doors to open doors list
    for (ADoorBase* Door : CurrentRoom->Doors)
    {
        OpenDoors.Add(Door);
	}

	// Spawn Next Rooms
	for (int32 i = 1; i < RoomsToGenerate; i++)
    {
        SpawnNextRoom(OpenDoors, Seed);
    }

    // Sprawdzić 2 otwarte drzwi czy się stykają
    // Zamknąć otwarte drzwi
}

void ADungeonGenerator::SpawnNextRoom(TArray<ADoorBase*>& OpenDoors, FRandomStream& Seed)
{
    TArray<TSubclassOf<ARoomBase>> PrefabsBag = RoomPrefabs;
    while (PrefabsBag.Num() > 0)
    {
        int32 RandomIndex = Seed.RandRange(0, PrefabsBag.Num() - 1);
        TSubclassOf<ARoomBase> CurrentRoomClass = PrefabsBag[RandomIndex];
        ARoomBase* CurrentRoom = GetWorld()->SpawnActor<ARoomBase>(
            CurrentRoomClass,
            FVector::ZeroVector,
            FRotator::ZeroRotator
        );
        PrefabsBag.RemoveAtSwap(RandomIndex);
        if (!IsValid(CurrentRoom)) continue;
        CurrentRoom->SetActorHiddenInGame(true);

        // Choose random open door
        TArray<ADoorBase*> OpensBag = OpenDoors;
        while (OpensBag.Num() > 0)
        {
            RandomIndex = Seed.RandRange(0, OpensBag.Num() - 1);
            ADoorBase* OpenDoor = OpensBag[RandomIndex];
            OpensBag.RemoveAtSwap(RandomIndex);

            // Choose random door from current room
            TArray<ADoorBase*> DoorsBag = CurrentRoom->Doors;
            while (DoorsBag.Num() > 0)
            {
                RandomIndex = Seed.RandRange(0, DoorsBag.Num() - 1);
                ADoorBase* CurrentDoor = DoorsBag[RandomIndex];
                DoorsBag.RemoveAtSwap(RandomIndex);

                PositionRoom(CurrentRoom, CurrentDoor, OpenDoor);
                if (!DoesRoomOverlap(CurrentRoom))
                {
                    CurrentRoom->SetActorHiddenInGame(false);

                    OpenDoors.Remove(OpenDoor);

                    for (ADoorBase* Door : CurrentRoom->Doors)
                    {
                        if (Door != CurrentDoor)
                        {
                            OpenDoors.Add(Door);
                        }
                    }

                    return;
                }
            }
        }

        CurrentRoom->Destroy();
    }
}

void ADungeonGenerator::PositionRoom(ARoomBase* RoomToPosition, ADoorBase* SourceDoor, ADoorBase* TargetDoor)
{
    if (!RoomToPosition || !SourceDoor || !TargetDoor) return;

	FTransform TargetTransform = TargetDoor->GetActorTransform();
    FTransform SourceTransform = SourceDoor->GetActorTransform();
    FRotator SourceRotation = SourceTransform.GetRotation().Rotator();
    FRotator TargetRotation = TargetTransform.GetRotation().Rotator();
    FRotator DesiredRotation = TargetRotation + FRotator(0.f, 180.f, 0.f);
    FRotator RotationDelta = DesiredRotation - SourceRotation;
    RoomToPosition->SetActorRotation(RoomToPosition->GetActorRotation() + RotationDelta);

    TargetTransform = TargetDoor->JoinPoint->GetComponentTransform();
    SourceTransform = SourceDoor->JoinPoint->GetComponentTransform();
    FVector SourceLocation = SourceTransform.GetLocation();
    FVector TargetLocation = TargetTransform.GetLocation();
    FVector LocationDelta = TargetLocation - SourceLocation;
    RoomToPosition->SetActorLocation(RoomToPosition->GetActorLocation() + LocationDelta);
}

bool ADungeonGenerator::DoesRoomOverlap(ARoomBase* TestRoom)
{
    if (!TestRoom) return true;

    for (UBoxComponent* Box : TestRoom->Colliders)
    {
        TSet<AActor*> OverlappingActors;
        Box->GetOverlappingActors(OverlappingActors);
        if (OverlappingActors.Num() > 0)
        {
            return true;
        }
    }

    return false;
}