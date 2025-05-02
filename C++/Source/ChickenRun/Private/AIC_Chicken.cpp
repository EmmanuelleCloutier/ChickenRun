#include "AIC_Chicken.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Perception/AISense_Sight.h"
#include "BehaviorTree/BehaviorTree.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Character.h"
#include "Engine/Engine.h"

AAIC_Chicken::AAIC_Chicken()
{
	PrimaryActorTick.bCanEverTick = true;

	AIPerceptionComp = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AIPerceptionComp"));
	SetPerceptionComponent(*AIPerceptionComp);

	SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("SightConfig"));
	if (SightConfig)
	{
		SightConfig->SightRadius = 1000.0f;
		SightConfig->LoseSightRadius = 1200.0f;
		SightConfig->PeripheralVisionAngleDegrees = 90.0f;
		SightConfig->DetectionByAffiliation.bDetectEnemies = true;
		SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
		SightConfig->DetectionByAffiliation.bDetectNeutrals = true;

		AIPerceptionComp->ConfigureSense(*SightConfig);
		AIPerceptionComp->SetDominantSense(SightConfig->GetSenseImplementation());
	}

	AIPerceptionComp->OnPerceptionUpdated.AddDynamic(this, &AAIC_Chicken::OnPerceptionUpdate);

	CurrentBT = nullptr;
	bIsFleeing = false;
}

void AAIC_Chicken::BeginPlay()
{
	Super::BeginPlay();

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Begin play aicchicken"));

	if (BT_Roam)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("into btroam"));
		RunBehaviorTree(BT_Roam);
		CurrentBT = BT_Roam;
		bIsFleeing = false;
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("BT_Roam is NULL!"));
	}
}

void AAIC_Chicken::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	ACharacter* ControlledCharacter = Cast<ACharacter>(GetPawn());
	if (ControlledCharacter && ControlledCharacter->GetVelocity().Size() > 0.0f)
	{
		FRotator NewRotation = FRotationMatrix::MakeFromX(ControlledCharacter->GetVelocity()).Rotator();
		ControlledCharacter->SetActorRotation(NewRotation);
	}
}

void AAIC_Chicken::OnPerceptionUpdate(const TArray<AActor*>& UpdatedActors)
{
	for (AActor* Actor : UpdatedActors)
	{
		if (Actor && Actor->ActorHasTag(FName("Fuite")))
		{
			if (!bIsFleeing && BT_Flee && CurrentBT != BT_Flee)
			{
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, TEXT("into btfuite"));
				RunBehaviorTree(BT_Flee);
				CurrentBT = BT_Flee;
				bIsFleeing = true;
			}
			return;
		}
	}

	// Si aucun acteur "Fuite" n'est vu et on est en mode fuite, revenir à Roam
	if (bIsFleeing && BT_Roam && CurrentBT != BT_Roam)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("back to roam"));
		RunBehaviorTree(BT_Roam);
		CurrentBT = BT_Roam;
		bIsFleeing = false;
	}
}
