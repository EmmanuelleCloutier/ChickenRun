#include "Spawner.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "ChickenRun/Public/Chicken.h"

ASpawner::ASpawner()
{
	PrimaryActorTick.bCanEverTick = false;
}

// Called when the game starts or when spawned
void ASpawner::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASpawner::SpawnChicken()
{
	if (ActorToSpawn)
	{
		FActorSpawnParameters SpawnParams;
		AActor* SpawnedActor = GetWorld()->SpawnActor<AActor>(ActorToSpawn, GetActorLocation(), GetActorRotation(), SpawnParams);
		
	}
}



