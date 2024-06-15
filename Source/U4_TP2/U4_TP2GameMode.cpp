// Copyright Epic Games, Inc. All Rights Reserved.

#include "U4_TP2GameMode.h"
#include "U4_TP2Character.h"
#include "UObject/ConstructorHelpers.h"

AU4_TP2GameMode::AU4_TP2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
