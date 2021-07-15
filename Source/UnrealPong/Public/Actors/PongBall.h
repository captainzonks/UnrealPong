// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PongBall.generated.h"

class UBoxComponent;
UCLASS()
class UNREALPONG_API APongBall : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	APongBall();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Start();

	void Restart();

	void GameOver();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnPaddleHit(AActor* OverlappedActor, AActor* OtherActor);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "PongBall|Components")
	UStaticMeshComponent* StaticMeshComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "PongBall|Components")
	UBoxComponent* BoxComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "PongBall|Config")
	UStaticMesh* BallMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PongBall|Config")
	uint8 bGameover : 1;
};
