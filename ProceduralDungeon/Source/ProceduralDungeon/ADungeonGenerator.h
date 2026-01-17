// ADungeonGenerator.h
#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ADungeonGenerator.generated.h"

UCLASS()
class PROCEDURALDUNGEON_API ADungeonGenerator : public AActor
{
    GENERATED_BODY()

public:
    ADungeonGenerator();

protected:
    virtual void BeginPlay() override;

public:
    // Lista prefabów pokojów
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Dungeon")
    TArray<TSubclassOf<AActor>> RoomPrefabs;

    // Spawn funkcja
    UFUNCTION(BlueprintCallable, Category="Dungeon")
    void SpawnRandomRoom();
};
