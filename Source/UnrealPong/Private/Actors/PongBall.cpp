// Copyright Epic Games, Inc. All Rights Reserved.


#include "Actors/PongBall.h"

#include "Actors/PongGoal.h"
#include "Actors/PongWall.h"
#include "Components/BoxComponent.h"
#include "Core/PongGameMode.h"
#include "Core/PongPlayer.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
APongBall::APongBall()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	bReplicates = true;

	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh"));
	RootComponent = StaticMeshComponent;
	StaticMeshComponent->SetSimulatePhysics(true);
	StaticMeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	StaticMeshComponent->SetEnableGravity(false);
	StaticMeshComponent->SetConstraintMode(EDOFMode::XYPlane);

	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
	BoxComponent->SetupAttachment(StaticMeshComponent);
	BoxComponent->SetCollisionProfileName("Trigger");
	BoxComponent->SetBoxExtent(FVector(50.f, 50.f, 50.f));

	bGameover = false;
}

// Called when the game starts or when spawned
void APongBall::BeginPlay()
{
	Super::BeginPlay();

	SetReplicateMovement(true);

	if (BallMesh)
	{
		StaticMeshComponent->SetStaticMesh(BallMesh);
	}

	OnActorBeginOverlap.AddDynamic(this, &APongBall::OnPaddleHit);
}

// Called every frame
void APongBall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APongBall::Start()
{
	bGameover = false;
	SetActorLocation(FVector::ZeroVector);
	StaticMeshComponent->
		SetPhysicsLinearVelocity(FVector(FMath::RandRange(-300.f, 300.f), (FMath::RandBool() ? 1.f : -1.f) * 2000.f,
		                                 0.f));
}

void APongBall::Restart()
{
	SetActorLocation(FVector::ZeroVector);
	StaticMeshComponent->
		SetPhysicsLinearVelocity(FVector(FMath::RandRange(-300.f, 300.f), (FMath::RandBool() ? 1.f : -1.f) * 2000.f,
		                                 0.f));
}

void APongBall::GameOver()
{
	bGameover = true;
	StaticMeshComponent->SetPhysicsLinearVelocity(FVector::ZeroVector);
}

void APongBall::OnPaddleHit(AActor* OverlappedActor, AActor* OtherActor)
{
	APongPlayer* PongPlayer = Cast<APongPlayer>(OtherActor);
	if (PongPlayer)
	{
		const FVector BallLinearVelocity = StaticMeshComponent->GetPhysicsLinearVelocity();
		const FVector PaddleLinearVelocity = PongPlayer->GetStaticMeshComponent()->GetPhysicsLinearVelocity();

		const FVector NewBallLinearVelocity = FVector(PaddleLinearVelocity.X + FMath::RandRange(-1000.f, 1000.f),
		                                              BallLinearVelocity.Y * -1.f,
		                                              BallLinearVelocity.Z);

		StaticMeshComponent->SetPhysicsLinearVelocity(NewBallLinearVelocity);
	}

	APongWall* PongWall = Cast<APongWall>(OtherActor);
	if (PongWall)
	{
		const FVector BallLinearVelocity = StaticMeshComponent->GetPhysicsLinearVelocity();
		const FVector NewBallLinearVelocity = FVector(BallLinearVelocity.X * -1.f, BallLinearVelocity.Y,
		                                              BallLinearVelocity.Z);

		StaticMeshComponent->SetPhysicsLinearVelocity(NewBallLinearVelocity);
	}

	APongGoal* PongGoal = Cast<APongGoal>(OtherActor);
	if (PongGoal)
	{
		Restart();
	}
}
