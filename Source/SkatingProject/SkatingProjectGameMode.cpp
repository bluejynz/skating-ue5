// Copyright Epic Games, Inc. All Rights Reserved.

#include "SkatingProjectGameMode.h"
#include "SkatingProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASkatingProjectGameMode::ASkatingProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
