// Copyright Epic Games, Inc. All Rights Reserved.

#include "ChickenRun/Public/ChickenRunGameMode.h"
#include "ChickenRun/Public/C_Player.h"
#include "UObject/ConstructorHelpers.h"

AChickenRunGameMode::AChickenRunGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
