// Copyright Epic Games, Inc. All Rights Reserved.


#include "Core/PongPlayerState.h"

#include "Core/PongGameState.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"

void APongPlayerState::SetPlayAgain_Implementation(bool bInPlayAgain)
{
	bPlayAgain = bInPlayAgain;
	
	AGameStateBase* GameState = UGameplayStatics::GetGameState(this);
	if (GameState)
	{
		APongGameState* PongGameState = Cast<APongGameState>(GameState);
		if (PongGameState)
		{
			PongGameState->RestartGame();
		}
	}
}

void APongPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(APongPlayerState, bPlayAgain)
}
