// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "PongGameState.generated.h"

/**
 * UnrealPong Game State
 */
UCLASS()
class UNREALPONG_API APongGameState : public AGameStateBase
{
	GENERATED_BODY()

public:
	UFUNCTION(Server, Reliable, BlueprintCallable)
	void RestartGame();
	
	UFUNCTION(Server, Reliable, BlueprintCallable)
	void IncrementScore(int PlayerNumber);
	
	int GetPlayerOneScore() const { return PlayerOneScore; }
	int GetPlayerTwoScore() const { return PlayerTwoScore; }

protected:
	
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite, Category = "PongGameState|Config")
	int PlayerOneScore{};

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite, Category = "PongGameState|Config")
	int PlayerTwoScore{};

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PongGameState|Config")
	int ScoreToWin{3};

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite, Category = "PongGameState|Config")
	bool bGameover {false};
};
