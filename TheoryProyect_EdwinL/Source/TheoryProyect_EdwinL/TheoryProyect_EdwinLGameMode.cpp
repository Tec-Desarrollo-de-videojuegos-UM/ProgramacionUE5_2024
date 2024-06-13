// Copyright Epic Games, Inc. All Rights Reserved.

#include "TheoryProyect_EdwinLGameMode.h"
#include "TheoryProyect_EdwinLPlayerController.h"
#include "TheoryProyect_EdwinLCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATheoryProyect_EdwinLGameMode::ATheoryProyect_EdwinLGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ATheoryProyect_EdwinLPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}