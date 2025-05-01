#pragma once

#include "CoreMinimal.h"
#include "Runtime/AIModule/Classes/AIController.h"
#include "AIC_Chicken.generated.h"

class UAIPerceptionComponent;
class UAISenseConfig_Sight;
class UBehaviorTree;

UCLASS()
class CHICKENRUN_API AAIC_Chicken : public AAIController
{
	GENERATED_BODY()

public:
	AAIC_Chicken();

protected:
	virtual void BeginPlay() override;

public:
	UFUNCTION()
	void OnPerceptionUpdate(const TArray<AActor*>& UpdatedActors);

	UFUNCTION()
	void OnTargetPerceptionUpated(AActor* Actor, FAIStimulus Stimulus);

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly, Category = "AI")
	UAIPerceptionComponent* AIPerceptionComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AI")
	UAISenseConfig_Sight* SightConfig;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	UBehaviorTree* BT_Roam;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	UBehaviorTree* BT_Flee;

private:
	bool bIsFleeing = false;
};
