#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ADungeonGenerator.generated.h"

class ADoorBase;
class ARoomBase;

UCLASS()
class PROCEDURALDUNGEON_API ADungeonGenerator : public AActor
{
    GENERATED_BODY()

public:
    ADungeonGenerator();

protected:
    virtual void BeginPlay() override;

private:
    UPROPERTY(EditAnywhere, Category = "Dungeon")
    TArray<TSubclassOf<ARoomBase>> RoomPrefabs;
    UPROPERTY(EditAnywhere, Category = "Dungeon")
    bool bRandomSeed;
    UPROPERTY(EditAnywhere, Category = "Dungeon")
    FRandomStream InitialSeed;
	UPROPERTY(EditAnywhere, Category = "Dungeon")
    int32 RoomsToGenerate;

    void GenerateDungeon(FRandomStream& Seed);
	void SpawnNextRoom(TArray<ADoorBase*>& OpenDoors, FRandomStream& Seed);
	void PositionRoom(ARoomBase* RoomToPosition, ADoorBase* SourceDoor, ADoorBase* TargetDoor);
    bool DoesRoomOverlap(ARoomBase* TestRoom);
};
