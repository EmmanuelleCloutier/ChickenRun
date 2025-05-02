#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Chicken.generated.h"

class USphereComponent;

UCLASS()
class CHICKENRUN_API AChicken : public ACharacter
{
	GENERATED_BODY()

public:
	AChicken();

protected:
	virtual void BeginPlay() override;

public:
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Collision")
	USphereComponent* SphereComponent;
	
};
