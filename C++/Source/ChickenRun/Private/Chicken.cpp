#include "ChickenRun/Public/Chicken.h"

#include "Spawner.h"
#include "Components/SphereComponent.h"
#include "Animation/AnimSequence.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "ChickenRun/Public/AIC_Chicken.h"
#include "EngineUtils.h"


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
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Begin play chicken"));
}


void AChicken::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void AChicken::Pickup()
{
	for (TActorIterator<ASpawner> It(GetWorld()); It; ++It)
	{
		ASpawner* Spawner = *It;
		if (Spawner)
		{
			Spawner->SpawnChicken();  
			break;  
		}
	}
	
	Destroy();
}

