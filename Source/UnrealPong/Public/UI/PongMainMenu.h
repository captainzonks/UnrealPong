// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UI/PongMenuWidget.h"
#include "PongMainMenu.generated.h"

class UButton;
class UWidgetSwitcher;

struct FPongServerData;

DECLARE_LOG_CATEGORY_EXTERN(LogUnrealPongUI, Log, All);

/**
 * UnrealPong Main Menu Widget
 */
UCLASS()
class UNREALPONG_API UPongMainMenu : public UPongMenuWidget
{
	GENERATED_BODY()

public:
	void SetActiveWidget(int const& Index);
	void SetServerList(TArray<FPongServerData> ServerNames);
	void SelectServerRowIndex(uint32 const Index);

protected:
	explicit UPongMainMenu(FObjectInitializer const& ObjectInitializer);
	virtual bool Initialize() override;
	
private:
	void UpdateServerRowChildren();

	/** Callback Functions */

	UFUNCTION()
	void HostServer();

	UFUNCTION()
	void JoinServer();

	UFUNCTION()
	void QuitPressed();

	UFUNCTION()
	void OpenMainMenu();

	UFUNCTION()
	void OpenJoinMenu();

	UFUNCTION()
	void RefreshServerList();


	/** Main Menu Widgets */

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget, AllowPrivateAccess = true))
	UWidgetSwitcher* MenuSwitcher;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget, AllowPrivateAccess = true))
	UWidget* MainMenu;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget, AllowPrivateAccess = true))
	UWidget* JoinMenu;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget, AllowPrivateAccess = true))
	UPanelWidget* ServerList;

	/** Main Menu Buttons */

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget, AllowPrivateAccess = true))
	UButton* HostButton;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget, AllowPrivateAccess = true))
	UButton* JoinButton;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget, AllowPrivateAccess = true))
	UButton* QuitButton;

	/** Join Menu Buttons */

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget, AllowPrivateAccess = true))
	UButton* CancelJoinMenuButton;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget, AllowPrivateAccess = true))
	UButton* RefreshListJoinMenuButton;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget, AllowPrivateAccess = true))
	UButton* ConfirmJoinMenuButton;

	/** Class References */

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = true),
		Category = "PongMainMenu|Config")
	TSubclassOf<UUserWidget> ServerRowWidgetClass;

	/** unexposed variables */

	TOptional<uint32> SelectedServerRowIndex;
	TOptional<uint32> SelectedLoadGameRowIndex;
};
