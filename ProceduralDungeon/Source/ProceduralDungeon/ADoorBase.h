#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ADoorBase.generated.h"

UCLASS()
class PROCEDURALDUNGEON_API ADoorBase : public AActor
{
	GENERATED_BODY()

public:
	ADoorBase();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Door")
	USceneComponent* JoinPoint;
};
