// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PongGameMode.generated.h"

class APongPlayer;
/**
 * UnrealPong Game Mode
 */
UCLASS()
class UNREALPONG_API APongGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	void StartGame() const;
	void EndGame();

protected:
	virtual void PostLogin(APlayerController* NewPlayer) override;

	virtual void Logout(AController* Exiting) override;

	int ConnectedPlayers{};
};
