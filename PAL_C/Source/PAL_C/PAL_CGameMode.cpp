// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "PAL_C.h"
#include "PAL_CGameMode.h"
#include "PAL_CCharacter.h"

APAL_CGameMode::APAL_CGameMode()
{
	// set default pawn class to our character
	DefaultPawnClass = APAL_CCharacter::StaticClass();	
}
