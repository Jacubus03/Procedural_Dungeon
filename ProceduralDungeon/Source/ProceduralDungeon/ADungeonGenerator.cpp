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

    FActorSpawnParameters SpawnParams;
    SpawnParams.Owner = this;

    // --- 1. Spawn pierwszego pokoju ---
    int32 FirstIndex = UKismetMathLibrary::RandomInteger(RoomPrefabs.Num());
    TSubclassOf<ARoomBase> FirstRoomClass = RoomPrefabs[FirstIndex];

    ARoomBase* FirstRoom = GetWorld()->SpawnActor<ARoomBase>(
        FirstRoomClass,
        GetActorLocation(),
        FRotator::ZeroRotator,
        SpawnParams
    );

    UE_LOG(LogTemp, Log, TEXT("Overlap: %s"), DoesRoomOverlap(FirstRoom) ? TEXT("True") : TEXT("False"));

    ARoomBase* SecondRoom = GetWorld()->SpawnActor<ARoomBase>(
        FirstRoomClass,
        FVector::RightVector * 1000,
        FRotator::ZeroRotator,
        SpawnParams
    );

    UE_LOG(LogTemp, Log, TEXT("Overlap 1: %s"), DoesRoomOverlap(FirstRoom) ? TEXT("True") : TEXT("False"));
    UE_LOG(LogTemp, Log, TEXT("Overlap 2: %s"), DoesRoomOverlap(FirstRoom) ? TEXT("True") : TEXT("False"));
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
            return true; // ❌ kolizja z innym pokojem
		}

        //if (!Box) continue;

        //TArray<FOverlapResult> Overlaps;

        //FCollisionQueryParams Params;
        //Params.AddIgnoredActor(TestRoom);

        //bool bOverlap = GetWorld()->OverlapMultiByObjectType(
        //    Overlaps,
        //    Box->GetComponentLocation(),
        //    Box->GetComponentQuat(),
        //    FCollisionObjectQueryParams(ECC_GameTraceChannel1), // Room
        //    FCollisionShape::MakeBox(Box->GetScaledBoxExtent()),
        //    Params
        //);

        //if (bOverlap)
        //{
        //    return true; // ❌ kolizja z innym pokojem
        //}
    }

    return false; // ✅ brak kolizji
}

void ADungeonGenerator::SpawnRandomRoom()
{
    if (RoomPrefabs.Num() == 0) return;

    FActorSpawnParameters SpawnParams;
    SpawnParams.Owner = this;

    // --- 1. Spawn pierwszego pokoju ---
    int32 FirstIndex = UKismetMathLibrary::RandomInteger(RoomPrefabs.Num());
    TSubclassOf<ARoomBase> FirstRoomClass = RoomPrefabs[FirstIndex];

    if (!FirstRoomClass) return;

    ARoomBase* FirstRoom = GetWorld()->SpawnActor<ARoomBase>(
        FirstRoomClass,
        GetActorLocation(),
        FRotator::ZeroRotator,
        SpawnParams
    );

    if (!FirstRoom || FirstRoom->Doors.Num() == 0) return;

    // --- 2. Wybierz losowe drzwi pierwszego pokoju ---
    ADoorBase* FirstDoor = nullptr;
    for (int i = 0; i < 10; i++) // retry 10 razy
    {
        int32 FirstDoorIndex = UKismetMathLibrary::RandomInteger(FirstRoom->Doors.Num());
        FirstDoor = FirstRoom->Doors[FirstDoorIndex];
        if (FirstDoor && FirstDoor->JoinPoint) break;
        FirstDoor = nullptr;
    }

    if (!FirstDoor || !FirstDoor->JoinPoint)
    {
        UE_LOG(LogTemp, Warning, TEXT("First room has no valid doors!"));
        return;
    }

    FVector TargetJoinPoint = FirstDoor->JoinPoint->GetComponentLocation();
    FVector FirstDoorForward = FirstDoor->JoinPoint->GetForwardVector();

    // --- 3. Wybierz losowy drugi pokój ---
    int32 SecondIndex = UKismetMathLibrary::RandomInteger(RoomPrefabs.Num());
    TSubclassOf<ARoomBase> SecondRoomClass = RoomPrefabs[SecondIndex];

    if (!SecondRoomClass) return;

    // --- 4. Spawn tymczasowy drugi pokój ---
    ARoomBase* TempSecondRoom = GetWorld()->SpawnActor<ARoomBase>(
        SecondRoomClass,
        FVector::ZeroVector,
        FRotator::ZeroRotator,
        SpawnParams
    );

    if (!TempSecondRoom || TempSecondRoom->Doors.Num() == 0)
    {
        if (TempSecondRoom) TempSecondRoom->Destroy();
        return;
    }

    TempSecondRoom->SetActorHiddenInGame(true);
    TempSecondRoom->SetActorEnableCollision(false);

    // --- 5. Wybierz losowe drzwi drugiego pokoju ---
    ADoorBase* SecondDoor = nullptr;
    for (int i = 0; i < 10; i++)
    {
        int32 SecondDoorIndex = UKismetMathLibrary::RandomInteger(TempSecondRoom->Doors.Num());
        SecondDoor = TempSecondRoom->Doors[SecondDoorIndex];
        if (SecondDoor && SecondDoor->JoinPoint) break;
        SecondDoor = nullptr;
    }

    if (!SecondDoor || !SecondDoor->JoinPoint)
    {
        UE_LOG(LogTemp, Warning, TEXT("Second room has no valid doors!"));
        TempSecondRoom->Destroy();
        return;
    }

    // --- 6. Oblicz lokalny offset drugich drzwi względem root ---
    FVector SecondDoorLocalOffset = SecondDoor->JoinPoint->GetRelativeLocation();

    // --- 7. Oblicz rotację drugiego pokoju (drzwi naprzeciw pierwszych) ---
    FVector TargetForward = -FirstDoorForward; // drzwi drugiego pokoju patrzą naprzeciw
    FVector SecondDoorForward = SecondDoor->JoinPoint->GetForwardVector();

    FRotator DeltaRot = FRotationMatrix::MakeFromX(TargetForward).Rotator()
        - FRotationMatrix::MakeFromX(SecondDoorForward).Rotator();
    FRotator FinalRotation = DeltaRot; // obrót całego pokoju

    // --- 8. Przekształć lokalny offset do world space ---
    FVector WorldOffset = FinalRotation.RotateVector(SecondDoorLocalOffset);

    // --- 9. Oblicz finalną pozycję root drugiego pokoju ---
    FVector SpawnLocation = TargetJoinPoint - WorldOffset;

    // --- 10. Ustaw pozycję i rotację, pokaż pokój ---
    TempSecondRoom->SetActorRotation(FinalRotation);
    TempSecondRoom->SetActorLocation(SpawnLocation);
    TempSecondRoom->SetActorHiddenInGame(false);
    TempSecondRoom->SetActorEnableCollision(true);

    UE_LOG(LogTemp, Log, TEXT("Spawned second room at %s with rotation %s"), *SpawnLocation.ToString(), *FinalRotation.ToString());
}
