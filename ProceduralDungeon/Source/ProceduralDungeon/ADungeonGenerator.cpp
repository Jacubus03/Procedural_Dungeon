#include "ADungeonGenerator.h"
#include "ARoomBase.h"
#include "ADoorBase.h"
#include "Engine/World.h"
#include "Kismet/KismetMathLibrary.h"

ADungeonGenerator::ADungeonGenerator()
{
    PrimaryActorTick.bCanEverTick = false;
}

void ADungeonGenerator::BeginPlay()
{
    Super::BeginPlay();

    SpawnRandomRoom();
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

    // --- 6. Oblicz lokalny offset drugich drzwi wzglêdem root ---
    FVector SecondDoorLocalOffset = SecondDoor->JoinPoint->GetRelativeLocation();

    // --- 7. Oblicz rotacjê drugiego pokoju (drzwi naprzeciw pierwszych) ---
    FVector TargetForward = -FirstDoorForward; // drzwi drugiego pokoju patrz¹ naprzeciw
    FVector SecondDoorForward = SecondDoor->JoinPoint->GetForwardVector();

    FRotator DeltaRot = FRotationMatrix::MakeFromX(TargetForward).Rotator()
        - FRotationMatrix::MakeFromX(SecondDoorForward).Rotator();
    FRotator FinalRotation = DeltaRot; // obrót ca³ego pokoju

    // --- 8. Przekszta³æ lokalny offset do world space ---
    FVector WorldOffset = FinalRotation.RotateVector(SecondDoorLocalOffset);

    // --- 9. Oblicz finaln¹ pozycjê root drugiego pokoju ---
    FVector SpawnLocation = TargetJoinPoint - WorldOffset;

    // --- 10. Ustaw pozycjê i rotacjê, poka¿ pokój ---
    TempSecondRoom->SetActorRotation(FinalRotation);
    TempSecondRoom->SetActorLocation(SpawnLocation);
    TempSecondRoom->SetActorHiddenInGame(false);
    TempSecondRoom->SetActorEnableCollision(true);

    UE_LOG(LogTemp, Log, TEXT("Spawned second room at %s with rotation %s"), *SpawnLocation.ToString(), *FinalRotation.ToString());
}
