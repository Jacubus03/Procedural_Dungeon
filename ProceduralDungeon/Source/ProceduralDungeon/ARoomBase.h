#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ADoorBase.h"
#include "ARoomBase.generated.h"

UCLASS()
class PROCEDURALDUNGEON_API ARoomBase : public AActor
{
    GENERATED_BODY()

public:
    ARoomBase();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Room")
    TArray<ADoorBase*> Doors;
};
