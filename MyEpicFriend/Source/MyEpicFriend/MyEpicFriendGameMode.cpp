// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyEpicFriendGameMode.h"
#include "MyEpicFriendCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMyEpicFriendGameMode::AMyEpicFriendGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
