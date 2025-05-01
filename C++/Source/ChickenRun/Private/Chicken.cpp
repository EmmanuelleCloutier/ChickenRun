#include "ChickenRun/Public/Chicken.h"
#include "Components/SphereComponent.h"
#include "Animation/AnimSequence.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "ChickenRun/Public/AIC_Chicken.h"


AChicken::AChicken()
{
	PrimaryActorTick.bCanEverTick = false;

	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	SphereComponent->SetupAttachment(RootComponent);

	GetMesh()->SetMobility(EComponentMobility::Movable);
	GetMesh()->SetupAttachment(RootComponent);

	AIControllerClass = AAIC_Chicken::StaticClass();
	AutoPossessAI =	EAutoPossessAI::PlacedInWorldOrSpawned;
	
}

void AChicken::BeginPlay()
{
	Super::BeginPlay();

	if (SpawnAnimation && GetMesh())
	{
		GetMesh()->PlayAnimation(SpawnAnimation, false);
	}
	
}


void AChicken::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

