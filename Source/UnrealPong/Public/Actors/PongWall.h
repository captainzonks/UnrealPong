// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PongWall.generated.h"

class UBoxComponent;
UCLASS()
class UNREALPONG_API APongWall : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	APongWall();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "PongWall|Components")
	UStaticMeshComponent* StaticMeshComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "PongWall|Components")
	UBoxComponent* BoxComponent;
};
