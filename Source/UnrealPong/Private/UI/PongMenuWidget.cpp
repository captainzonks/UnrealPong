// Copyright Epic Games, Inc. All Rights Reserved.


#include "UI/PongMenuWidget.h"

#include "Blueprint/WidgetLayoutLibrary.h"

void UPongMenuWidget::Setup()
{
	this->AddToViewport();

	auto const World = GetWorld();
	if (!ensure(World)) return;
	auto PlayerController = World->GetFirstPlayerController();
	if (!ensure(PlayerController)) return;

	this->SetOwningPlayer(PlayerController);

	/** Set input mode to Game & UI, focus the new widget, and show mouse cursor */
	FInputModeGameAndUI InputModeData;
	InputModeData.SetWidgetToFocus(this->TakeWidget());
	InputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
	PlayerController->SetInputMode(InputModeData);

	/** Center the mouse cursor */
	PlayerController->SetMouseLocation(
		UWidgetLayoutLibrary::GetViewportSize(this).X / 2,
		UWidgetLayoutLibrary::GetViewportSize(this).Y / 2);
	
	PlayerController->bShowMouseCursor = true;
}

void UPongMenuWidget::Teardown()
{
	this->RemoveFromViewport();

	auto const World = GetWorld();
	if (!ensure(World)) return;
	auto PlayerController = World->GetFirstPlayerController();
	if (!ensure(PlayerController)) return;

	FInputModeGameAndUI const InputModeData;
	PlayerController->SetInputMode(InputModeData);
}

void UPongMenuWidget::SetMenuInterface(IPongMenuInterface* InMenuInterface)
{
	MenuInterface = InMenuInterface;
}
