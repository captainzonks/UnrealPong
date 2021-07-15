// Copyright Epic Games, Inc. All Rights Reserved.


#include "Core/PongGameState.h"

#include "Core/PongGameInstance.h"
#include "Core/PongGameMode.h"
#include "Core/PongPlayerState.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"

void APongGameState::IncrementScore_Implementation(int PlayerNumber)
{
	if (PlayerNumber == 1)
	{
		PlayerOneScore++;
	}
	else if (PlayerNumber == 2)
	{
		PlayerTwoScore++;
	}
	else
	{
		UE_LOG(LogUnrealPong, Warning, TEXT("PlayerNumber not set on PongGoal"))
	}

	if (PlayerOneScore == ScoreToWin || PlayerTwoScore == ScoreToWin)
	{
		AGameModeBase* GameMode = UGameplayStatics::GetGameMode(this);
		if (GameMode)
		{
			APongGameMode* PongGameMode = Cast<APongGameMode>(GameMode);
			if (PongGameMode)
			{
				bGameover = true;
				PongGameMode->EndGame();
			}
		}
	}
}

void APongGameState::RestartGame_Implementation()
{
	int PlayersReady{};
	
	for (APlayerState* PlayerState : PlayerArray)
	{
		if (Cast<APongPlayerState>(PlayerState)->GetPlayAgain())
		{
			PlayersReady++;
		}
	}

	if (PlayersReady == 2)
	{
		bGameover = false;
		PlayerOneScore = 0;
		PlayerTwoScore = 0;

		for (APlayerState* PlayerState : PlayerArray)
		{
			Cast<APongPlayerState>(PlayerState)->SetPlayAgain(false);
		}

		AGameModeBase* GameMode = UGameplayStatics::GetGameMode(this);
		if (GameMode)
		{
			APongGameMode* PongGameMode = Cast<APongGameMode>(GameMode);
			if (PongGameMode)
			{
				PongGameMode->StartGame();
			}
		}
	}
}

void APongGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(APongGameState, PlayerOneScore)
	DOREPLIFETIME(APongGameState, PlayerTwoScore)
	DOREPLIFETIME(APongGameState, bGameover)
}
