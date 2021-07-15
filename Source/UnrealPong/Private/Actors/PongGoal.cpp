// Copyright Epic Games, Inc. All Rights Reserved.


#include "Actors/PongGoal.h"

#include "Actors/PongBall.h"
#include "Components/BoxComponent.h"
#include "Core/PongGameMode.h"
#include "Core/PongGameState.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
APongGoal::APongGoal()
{
	PrimaryActorTick.bCanEverTick = false;

	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh"));
	StaticMeshComponent->SetupAttachment(RootComponent);

	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collision"));
	BoxComponent->SetupAttachment(StaticMeshComponent);
	BoxComponent->SetBoxExtent(FVector(100.f, 2500.f, 100.f));
	BoxComponent->SetCollisionProfileName("Trigger");
}

// Called when the game starts or when spawned
void APongGoal::BeginPlay()
{
	Super::BeginPlay();

	OnActorBeginOverlap.AddDynamic(this, &APongGoal::Score);
}

void APongGoal::Score(AActor* OverlappedActor, AActor* OtherActor)
{
	APongBall* Ball = Cast<APongBall>(OtherActor);
	if (Ball)
	{
		AGameStateBase* GameState = UGameplayStatics::GetGameState(this);
		if (GameState)
		{
			APongGameState* PongGameState = Cast<APongGameState>(GameState);
			if (PongGameState)
			{
				PongGameState->IncrementScore(PlayerNumber);
			}
		}
	}
}
