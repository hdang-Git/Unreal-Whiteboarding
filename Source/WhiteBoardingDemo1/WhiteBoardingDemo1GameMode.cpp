// Copyright Epic Games, Inc. All Rights Reserved.

#include "WhiteBoardingDemo1GameMode.h"
#include "WhiteBoardingDemo1HUD.h"
#include "WhiteBoardingDemo1Character.h"
#include "UObject/ConstructorHelpers.h"

AWhiteBoardingDemo1GameMode::AWhiteBoardingDemo1GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AWhiteBoardingDemo1HUD::StaticClass();
}
