// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "Blueprint/UserWidget.h"
#include "PongMenuWidget.generated.h"

class IPongMenuInterface;

/**
 * UnrealPong parent widget class for menus
 */
UCLASS()
class UNREALPONG_API UPongMenuWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	void Setup();
	void Teardown();

	IPongMenuInterface* GetMenuInterface() const { return MenuInterface;}
	void SetMenuInterface(IPongMenuInterface* InMenuInterface);

	protected:
	IPongMenuInterface* MenuInterface;
};
