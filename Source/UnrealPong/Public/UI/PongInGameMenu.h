// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UI/PongMenuWidget.h"
#include "PongInGameMenu.generated.h"

class UButton;
/**
 * UnrealPong In-Game Menu widget
 */
UCLASS()
class UNREALPONG_API UPongInGameMenu : public UPongMenuWidget
{
	GENERATED_BODY()

protected:
	virtual bool Initialize() override;

private:
	/** InGame Menu Button Callbacks */

	UFUNCTION()
	void ResumePressed();

	// UFUNCTION()
	// void OptionsPressed();

	UFUNCTION()
	void LeaveGamePressed();

	UFUNCTION()
	void QuitToDesktopPressed();

	/** InGame Menu Buttons */

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget, AllowPrivateAccess = true))
	UButton* ResumeButton;

	// UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget, AllowPrivateAccess = true))
	// UButton* OptionsMenuButton;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget, AllowPrivateAccess = true))
	UButton* LeaveGameButton;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget, AllowPrivateAccess = true))
	UButton* QuitToDesktopButton;
};
