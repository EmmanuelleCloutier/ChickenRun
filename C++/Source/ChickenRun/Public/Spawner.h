#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Spawner.generated.h"

UCLASS()
class CHICKENRUN_API ASpawner : public AActor
{
	GENERATED_BODY()

public:
	ASpawner();

protected:
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditAnywhere, Category ="Spawn")
	TSubclassOf<AActor> ActorToSpawn;

	UFUNCTION(BlueprintCallable, Category = "Spawn")
	void SpawnChicken();
};
