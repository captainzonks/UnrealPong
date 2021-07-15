// Copyright Epic Games, Inc. All Rights Reserved.


#include "Core/PongPlayer.h"

#include "Camera/CameraComponent.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
APongPlayer::APongPlayer()
{
	PrimaryActorTick.bCanEverTick = true;
	bReplicates = true;

	GetCapsuleComponent()->SetCollisionProfileName("NoCollision");
	
	GetCharacterMovement()->SetMovementMode(MOVE_Flying);
	GetCharacterMovement()->MaxFlySpeed = 1200.f;
	GetCharacterMovement()->BrakingDecelerationFlying = 1000.f;
	GetCharacterMovement()->Mass = 10.f;
	GetCharacterMovement()->MaxAcceleration = 5000.f;

	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh"));
	StaticMeshComponent->SetupAttachment(GetCapsuleComponent());
	StaticMeshComponent->SetCollisionProfileName(FName("PhysicsActor"));

	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collision"));
	BoxComponent->SetupAttachment(RootComponent);
	BoxComponent->SetCollisionProfileName("PhysicsActor");
	BoxComponent->SetBoxExtent(FVector(175.f, 50.f, 50.f));
}

// Called when the game starts or when spawned
void APongPlayer::BeginPlay()
{
	Super::BeginPlay();

	SetReplicateMovement(true);
}

// Called every frame
void APongPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (GetActorLocation().X < -1499.f || GetActorLocation().X > 1499.f)
	{
		SetActorLocation(FVector(FMath::Clamp(GetActorLocation().X, -1500.f, 1500.f), GetActorLocation().Y,
				GetActorLocation().Z));
	}
}

// Called to bind functionality to input
void APongPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	InputComponent->BindAxis("MoveUp", this, &APongPlayer::MovePaddle);
}

void APongPlayer::MovePaddle(float Value)
{
	if (Value != 0.f)
	{
		AddMovementInput(FVector(1, 0, 0), Value, true);
	}
}
