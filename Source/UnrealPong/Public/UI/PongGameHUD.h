// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "PongMenuWidget.h"
#include "PongGameHUD.generated.h"

class UButton;
class UTextBlock;

/**
 * UnrealPong GameHUD
 */
UCLASS()
class UNREALPONG_API UPongGameHUD : public UPongMenuWidget
{
	GENERATED_BODY()

protected:
	virtual bool Initialize() override;

	UFUNCTION()
	void RestartGame();

	UFUNCTION()
	void QuitGame();

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget, AllowPrivateAccess = true))
	UTextBlock* PlayerOneScore;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget, AllowPrivateAccess = true))
	UTextBlock* PlayerTwoScore;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget, AllowPrivateAccess = true))
	UButton* NoButton;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget, AllowPrivateAccess = true))
	UButton* YesButton;
};
