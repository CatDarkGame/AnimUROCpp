// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "AnimationUROwithCppGameMode.h"
#include "AnimationUROwithCppCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAnimationUROwithCppGameMode::AAnimationUROwithCppGameMode()
{
	// set default pawn class to our Blueprinted character
	return;
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
