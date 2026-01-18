#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "ARoomBase.generated.h"

class ADoorBase;

UCLASS()
class PROCEDURALDUNGEON_API ARoomBase : public AActor
{
    GENERATED_BODY()

public:
    ARoomBase();

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Room")
    TArray<ADoorBase*> Doors;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Room")
    TArray<UBoxComponent*> Colliders;
};
