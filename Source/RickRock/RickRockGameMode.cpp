// Copyright Epic Games, Inc. All Rights Reserved.

#include "RickRockGameMode.h"
#include "RickRockHUD.h"
#include "RickRockCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARickRockGameMode::ARickRockGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ARickRockHUD::StaticClass();
}
