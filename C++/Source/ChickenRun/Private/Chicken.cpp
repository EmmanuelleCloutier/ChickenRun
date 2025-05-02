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

	GetCharacterMovement()->bOrientRotationToMovement = true;
	bUseControllerRotationYaw = false;
	
}

void AChicken::BeginPlay()
{
	Super::BeginPlay();
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Begin play chicken"));
}


void AChicken::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

