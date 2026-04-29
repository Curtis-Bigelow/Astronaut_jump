// Copyright Epic Games, Inc. All Rights Reserved.

#include "Astronaut_JumpGameMode.h"
#include "Astronaut_JumpCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAstronaut_JumpGameMode::AAstronaut_JumpGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
