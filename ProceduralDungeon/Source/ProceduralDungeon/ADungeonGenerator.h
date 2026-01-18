#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ADungeonGenerator.generated.h"

class ARoomBase;

UCLASS()
class PROCEDURALDUNGEON_API ADungeonGenerator : public AActor
{
    GENERATED_BODY()

public:
    ADungeonGenerator();

protected:
    virtual void BeginPlay() override;

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Dungeon")
    TArray<TSubclassOf<ARoomBase>> RoomPrefabs;

    UFUNCTION(BlueprintCallable, Category="Dungeon")
    bool DoesRoomOverlap(ARoomBase* TestRoom);

    UFUNCTION(BlueprintCallable, Category="Dungeon")
    void SpawnRandomRoom();
};
