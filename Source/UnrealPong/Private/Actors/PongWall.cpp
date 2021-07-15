// Copyright Epic Games, Inc. All Rights Reserved.


#include "Actors/PongWall.h"

#include "Components/BoxComponent.h"

// Sets default values
APongWall::APongWall()
{
	PrimaryActorTick.bCanEverTick = false;

	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh"));
	StaticMeshComponent->SetupAttachment(RootComponent);

	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collision"));
	BoxComponent->SetupAttachment(StaticMeshComponent);
	BoxComponent->SetBoxExtent(FVector(100.f, 2500.f, 100.f));
	BoxComponent->SetCollisionProfileName("PhysicsActor");
}

// Called when the game starts or when spawned
void APongWall::BeginPlay()
{
	Super::BeginPlay();
	
}
