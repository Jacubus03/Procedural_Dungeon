// DungeonGenerator.cpp
#include "ADungeonGenerator.h"
#include "Engine/World.h"
#include "Kismet/KismetMathLibrary.h"

ADungeonGenerator::ADungeonGenerator()
{
    PrimaryActorTick.bCanEverTick = false;
}

void ADungeonGenerator::BeginPlay()
{
    Super::BeginPlay();

    // Na start spawn losowego pokoju
    SpawnRandomRoom();
}

void ADungeonGenerator::SpawnRandomRoom()
{
    if (RoomPrefabs.Num() == 0) return;

    // Losowy indeks
    int32 RandomIndex = UKismetMathLibrary::RandomInteger(RoomPrefabs.Num());
    TSubclassOf<AActor> RoomToSpawn = RoomPrefabs[RandomIndex];

    if (RoomToSpawn)
    {
        // Spawn w miejscu generatora
        FActorSpawnParameters SpawnParams;
        SpawnParams.Owner = this;
        GetWorld()->SpawnActor<AActor>(RoomToSpawn, GetActorLocation(), FRotator::ZeroRotator, SpawnParams);
    }
}
