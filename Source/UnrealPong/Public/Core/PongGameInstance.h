// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "UI/PongMenuInterface.h"
#include "Core/PongData.h"

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "PongGameInstance.generated.h"

class UPongInGameMenu;
class UPongMainMenu;
class UPongGameHUD;

DECLARE_LOG_CATEGORY_EXTERN(LogUnrealPong, Log, All);

/**
 * UnrealPong GameInstance
 */
UCLASS()
class UNREALPONG_API UPongGameInstance : public UGameInstance, public IPongMenuInterface
{
	GENERATED_BODY()

public:
	virtual void Init() override;

	/////////////////////
	/// Menu Interface Implementations

	virtual void Host(FString const& ServerName) override;
	virtual void Join(int const& Index, FPongServerData const& InServerData) override;
	virtual void StartGame() override;
	virtual void LoadMainMenu() override;
	virtual void RefreshServerList() override;

	/////////////////////
	/// UI Creation

	UFUNCTION(BlueprintCallable, Category = "PongGameInstance|UI")
	void LoadMainMenuWidget();

	UFUNCTION(BlueprintCallable, Category = "PongGameInstance|UI")
	void LoadGameHUDWidget();

	UFUNCTION(BlueprintCallable, Category = "PongGameInstance|UI")
	void InGameLoadMenuWidget();

	//////////////////////
	/// UI Getters
	
	UPongGameHUD* GetGameHUD() const { return GameHUD; }

protected:
	void CreateSession() const;

	////////////////////////
	/// Delegate Functions, called by the SessionInterface

	void OnCreateSessionComplete(FName const SessionName, bool bSuccess);
	void OnDestroySessionComplete(FName const SessionName, bool bSuccess);
	void OnFindSessionsComplete(bool bSuccess);
	void OnJoinSessionComplete(FName SessionName, EOnJoinSessionCompleteResult::Type Result);
	void OnNetworkFailure(UWorld* World, UNetDriver* NetDriver, ENetworkFailure::Type FailureType,
	                      const FString& ErrorString);

	///////////////////
	/// UI Pointers

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "PongGameInstance|Config")
	UPongMainMenu* Menu;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "PongGameInstance|Config")
	UPongGameHUD* GameHUD;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "PongGameInstance|Config")
	UPongInGameMenu* InGameMenu;

	///////////////////////
	/// Blueprint References, to be set in Editor on defaults

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "PongGameInstance|Config")
	TSubclassOf<UUserWidget> MainMenuClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "PongGameInstance|Config")
	TSubclassOf<UUserWidget> GameHUDClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "PongGameInstance|Config")
	TSubclassOf<UUserWidget> InGameMenuClass;

	////////////////////////
	/// Variables

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PongGameInstance|Config")
	uint8 bLoading : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PongGameInstance|Config")
	FPongServerData ServerData;

	IOnlineSessionPtr SessionInterface;
	TSharedPtr<FOnlineSessionSearch> SessionSearch;
};
