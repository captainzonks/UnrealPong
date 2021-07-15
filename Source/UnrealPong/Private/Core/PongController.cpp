// Copyright Epic Games, Inc. All Rights Reserved.


#include "Core/PongController.h"

#include "Camera/CameraActor.h"
#include "Core/PongGameInstance.h"
#include "Core/PongPlayer.h"
#include "Kismet/GameplayStatics.h"

void APongController::BeginPlay()
{
	Super::BeginPlay();

	PongGameInstance = GetGameInstance<UPongGameInstance>();

	SetupGameUI();
}

void APongController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

}

void APongController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("InGameMenu", IE_Pressed, this, &APongController::ToggleInGameMenu);
}

void APongController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	// setup camera
	TArray<AActor*> CameraArray;
	UGameplayStatics::GetAllActorsOfClass(this, ACameraActor::StaticClass(), CameraArray);
	if (CameraArray.Num() > 0)
	{
		SetViewTargetWithBlend(CameraArray[0]);
	}
}

void APongController::ToggleInGameMenu()
{
	if (PongGameInstance)
	{
		PongGameInstance->InGameLoadMenuWidget();
	}
}

void APongController::SetupGameUI_Implementation()
{
	if (PongGameInstance)
	{
		PongGameInstance->LoadGameHUDWidget();
		// PongGameInstance->ToggleLoadingScreen(false);
	}
}
