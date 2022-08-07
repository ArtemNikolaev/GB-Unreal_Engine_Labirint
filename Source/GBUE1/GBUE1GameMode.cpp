// Copyright Epic Games, Inc. All Rights Reserved.

#include "GBUE1GameMode.h"
#include "GBUE1Character.h"
#include "UObject/ConstructorHelpers.h"

AGBUE1GameMode::AGBUE1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
