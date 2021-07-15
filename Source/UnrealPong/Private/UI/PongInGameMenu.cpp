// Copyright Epic Games, Inc. All Rights Reserved.


#include "UI/PongInGameMenu.h"

#include "Components/Button.h"
#include "UI/PongMenuInterface.h"

bool UPongInGameMenu::Initialize()
{
	bool const bSuccess = Super::Initialize();
	if (!bSuccess) return false;

	/** InGame Menu Buttons */
	if (!ensure(ResumeButton)) return false;
	ResumeButton->OnClicked.AddDynamic(this, &UPongInGameMenu::ResumePressed);

	// if (!ensure(OptionsMenuButton)) return false;
	// OptionsMenuButton->OnClicked.AddDynamic(this, &UBGInGameMenu::OptionsPressed);

	if (!ensure(LeaveGameButton)) return false;
	LeaveGameButton->OnClicked.AddDynamic(this, &UPongInGameMenu::LeaveGamePressed);

	if (!ensure(QuitToDesktopButton)) return false;
	QuitToDesktopButton->OnClicked.AddDynamic(this, &UPongInGameMenu::QuitToDesktopPressed);

	return true;
}

void UPongInGameMenu::ResumePressed()
{
	Teardown();
}

void UPongInGameMenu::LeaveGamePressed()
{
	if (MenuInterface)
	{
		Teardown();
		MenuInterface->LoadMainMenu();
	}
}

void UPongInGameMenu::QuitToDesktopPressed()
{
	APlayerController* OwningPlayerController = GetOwningPlayer();
	if (OwningPlayerController)
	{
		OwningPlayerController->ConsoleCommand("quit");
	}
}
