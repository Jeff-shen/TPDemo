// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "TPGameMode.h"
#include "UObject/ConstructorHelpers.h"

ATPGameMode::ATPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
	PlayerControllerClass = ATPPlayerController::StaticClass();
	
	GameSessionClass = ATPGameSession::StaticClass();
	GameStateClass = ATPGameState::StaticClass();
	PlayerStateClass = ATPPlayerState::StaticClass();
	HUDClass = ATPHUD::StaticClass();
	SpectatorClass = ATPSpectatorPawn::StaticClass();
}
