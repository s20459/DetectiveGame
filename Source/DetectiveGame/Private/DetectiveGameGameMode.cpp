// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#include "DetectiveGame.h"
#include "DetectiveGameGameMode.h"
#include "DetectiveGameHUD.h"
#include "DetectiveGameCharacter.h"

ADetectiveGameGameMode::ADetectiveGameGameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Blueprints/MyCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ADetectiveGameHUD::StaticClass();
}
