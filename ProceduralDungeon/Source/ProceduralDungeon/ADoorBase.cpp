#include "ADoorBase.h"
#include "Components/SceneComponent.h"

ADoorBase::ADoorBase()
{
	PrimaryActorTick.bCanEverTick = false;

	USceneComponent* RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = RootComp;

	JoinPoint = CreateDefaultSubobject<USceneComponent>(TEXT("JoinPoint"));
	JoinPoint->SetupAttachment(RootComponent); 
}
