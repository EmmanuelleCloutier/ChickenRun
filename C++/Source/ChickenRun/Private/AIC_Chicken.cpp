#include "AIC_Chicken.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Perception/AISense_Sight.h"
#include "BehaviorTree/BehaviorTree.h"
#include "GameFramework/Actor.h"

AAIC_Chicken::AAIC_Chicken()
{
	PrimaryActorTick.bCanEverTick = false;

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
	AIPerceptionComp->OnTargetPerceptionUpdated.AddDynamic(this, &AAIC_Chicken::OnTargetPerceptionUpated);
}


void AAIC_Chicken::BeginPlay()
{
	Super::BeginPlay();

	if (BT_Roam)
	{
		RunBehaviorTree(BT_Roam);
		bIsFleeing = false;
	}
}


void AAIC_Chicken::OnPerceptionUpdate(const TArray<AActor*>& UpdatedActors)
{
	for (AActor* Actor : UpdatedActors)
	{
		if (Actor && Actor->ActorHasTag(FName("Fuite")))
		{
			// Lancer fuite si pas déjà en mode fuite
			if (!bIsFleeing && BT_Flee)
			{
				RunBehaviorTree(BT_Flee);
				bIsFleeing = true;
			}
			return;
		}
	}
}

void AAIC_Chicken::OnTargetPerceptionUpated(AActor* Actor, FAIStimulus Stimulus)
{
	if (Actor && Actor->ActorHasTag(FName("Fuite")))
	{
		if (!Stimulus.WasSuccessfullySensed())
		{
			// Si perte de vue et on était en fuite, relancer Roam
			if (bIsFleeing && BT_Roam)
			{
				RunBehaviorTree(BT_Roam);
				bIsFleeing = false;
			}
		}
	}
}

