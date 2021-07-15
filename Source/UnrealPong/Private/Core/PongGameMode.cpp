// Copyright Epic Games, Inc. All Rights Reserved.


#include "Core/PongGameMode.h"

#include "Actors/PongBall.h"
#include "Core/PongGameState.h"
#include "Core/PongPlayer.h"
#include "Kismet/GameplayStatics.h"

void APongGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

	// possess a pawn
	TArray<AActor*> PawnArray;
	UGameplayStatics::GetAllActorsOfClass(this, APongPlayer::StaticClass(), PawnArray);
	if (PawnArray.Num() > 0)
	{
		for (AActor* Actor : PawnArray)
		{
			APongPlayer* PongPlayer = Cast<APongPlayer>(Actor);
			if (PongPlayer && !PongPlayer->IsPawnControlled())
			{
				NewPlayer->Possess(PongPlayer);
				PongPlayer->SetOwner(NewPlayer);
			}
		}
	}

	if (GetNumPlayers() == 2)
	{
		StartGame();
	}
}

void APongGameMode::Logout(AController* Exiting)
{
	EndGame();
	
	UWorld* World = GetWorld();
	if (!ensure(World)) return;
	
	World->ServerTravel("/Game/Maps/Game?listen");
}

void APongGameMode::StartGame() const
{
	TArray<AActor*> BallArray;
	UGameplayStatics::GetAllActorsOfClass(this, APongBall::StaticClass(), BallArray);

	if (BallArray.Num() > 0 && IsValid(BallArray[0]))
	{
		Cast<APongBall>(BallArray[0])->Start();
	}
}

void APongGameMode::EndGame()
{
	TArray<AActor*> BallArray;
	UGameplayStatics::GetAllActorsOfClass(this, APongBall::StaticClass(), BallArray);

	if (BallArray.Num() > 0 && IsValid(BallArray[0]))
	{
		Cast<APongBall>(BallArray[0])->GameOver();
	}
}
