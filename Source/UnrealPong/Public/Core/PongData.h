// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "PongData.generated.h"

USTRUCT(BlueprintType)
struct FPongServerData
{
	GENERATED_BODY()

	UPROPERTY()
	FString Name;

	UPROPERTY()
	int CurrentPlayers;

	UPROPERTY()
	FString HostUsername;
};
