// Copyright Epic Games, Inc. All Rights Reserved.

#include "Core/PongGameInstance.h"

#include "OnlineSessionSettings.h"
#include "OnlineSubsystem.h"
#include "GameFramework/GameUserSettings.h"
#include "UI/PongGameHUD.h"
#include "UI/PongInGameMenu.h"
#include "UI/PongMainMenu.h"

DEFINE_LOG_CATEGORY(LogUnrealPong);

const static FName SESSION_NAME = TEXT("UnrealPong Session");
const static FName SERVER_NAME_SETTINGS_KEY = TEXT("UnrealPong Server");

void UPongGameInstance::Init()
{
	/** Setup the default screen settings */
	if (GEngine)
	{
		UGameUserSettings* UserSettings = GEngine->GetGameUserSettings();
		if (UserSettings)
		{
			UserSettings->SetScreenResolution(UserSettings->GetDesktopResolution());
			UserSettings->SetFullscreenMode(EWindowMode::WindowedFullscreen);

			UserSettings->LoadSettings(false);

			UserSettings->ApplySettings(false);
		}
	}
	
	/** Initialize the Online Subsystem */
	IOnlineSubsystem* Subsystem = IOnlineSubsystem::Get();
	if (Subsystem)
	{
		UE_LOG(LogUnrealPong, Log, TEXT("Found subsystem %s"), *IOnlineSubsystem::Get()->GetSubsystemName().ToString())
		SessionInterface = Subsystem->GetSessionInterface();
		if (SessionInterface.IsValid())
		{
			SessionInterface->OnCreateSessionCompleteDelegates.AddUObject(
				this, &UPongGameInstance::OnCreateSessionComplete);
			SessionInterface->OnDestroySessionCompleteDelegates.AddUObject(
				this, &UPongGameInstance::OnDestroySessionComplete);
			SessionInterface->OnFindSessionsCompleteDelegates.
			                  AddUObject(this, &UPongGameInstance::OnFindSessionsComplete);
			SessionInterface->OnJoinSessionCompleteDelegates.
			                  AddUObject(this, &UPongGameInstance::OnJoinSessionComplete);
		}
	}
	else
	{
		UE_LOG(LogUnrealPong, Warning, TEXT("Found no subsystem"))
	}

	if (GEngine)
	{
		GEngine->OnNetworkFailure().AddUObject(this, &UPongGameInstance::OnNetworkFailure);
	}
}

void UPongGameInstance::LoadMainMenuWidget()
{
	if (!ensure(MainMenuClass)) return;

	if (!Menu)
	{
		Menu = CreateWidget<UPongMainMenu>(this, MainMenuClass);
	}
	if (!ensure(Menu)) return;

	Menu->Setup();

	Menu->SetMenuInterface(this);
}

void UPongGameInstance::LoadGameHUDWidget()
{
	if (!ensure(GameHUDClass)) return;

	if (!GameHUD)
	{
		GameHUD = CreateWidget<UPongGameHUD>(this, GameHUDClass);
	}
	if (!ensure(GameHUD)) return;

	GameHUD->Setup();

	GameHUD->SetMenuInterface(this);
}

void UPongGameInstance::InGameLoadMenuWidget()
{
	if (!ensure(InGameMenuClass)) return;

	if (InGameMenu && InGameMenu->IsInViewport())
	{
		InGameMenu->Teardown();
		return;
	}

	if (!InGameMenu)
	{
		InGameMenu = CreateWidget<UPongInGameMenu>(this, InGameMenuClass);
	}
	if (!ensure(InGameMenu)) return;

	InGameMenu->Setup();

	InGameMenu->SetMenuInterface(this);
}

void UPongGameInstance::Host(FString const& ServerName)
{
	if (SessionInterface.IsValid())
	{
		ServerData.Name = ServerName;

		auto const ExistingSession = SessionInterface->GetNamedSession(SESSION_NAME);
		if (ExistingSession)
		{
			SessionInterface->DestroySession(SESSION_NAME);
		}
		else
		{
			CreateSession();
		}
	}
}

void UPongGameInstance::Join(int const& Index, FPongServerData const& InServerData)
{
	if (!SessionInterface.IsValid()) return;
	if (!SessionSearch.IsValid()) return;

	if (!ensure(Menu)) return;
	Menu->Teardown();

	ServerData = InServerData;

	SessionInterface->JoinSession(0, SESSION_NAME, SessionSearch->SearchResults[Index]);
}

void UPongGameInstance::StartGame()
{
	// if (bLoading)
	// {
	if (!ensure(Menu)) return;
	Menu->Teardown();
	// }

	UEngine* Engine = GetEngine();
	if (!ensure(Engine)) return;

	UE_LOG(LogUnrealPong, Log, TEXT("Starting Game"))

	UWorld* World = GetWorld();
	if (!ensure(World)) return;

	// ShowLoadingScreen();

	World->ServerTravel("/Game/Maps/Game?listen");
}

void UPongGameInstance::LoadMainMenu()
{
	APlayerController* PlayerController = GetFirstLocalPlayerController();
	if (!ensure(PlayerController)) return;

	// bLoading = false;

	PlayerController->ClientTravel("/Game/Maps/MainMenu", TRAVEL_Absolute);
}

void UPongGameInstance::RefreshServerList()
{
	// ToggleThinkingPopup(true);
	SessionSearch = MakeShareable(new FOnlineSessionSearch());
	if (SessionSearch.IsValid())
	{
		SessionSearch->MaxSearchResults = 100;
		SessionSearch->QuerySettings.Set(SEARCH_PRESENCE, true, EOnlineComparisonOp::Equals);
		UE_LOG(LogUnrealPong, Log, TEXT("Starting Find Session"))
		SessionInterface->FindSessions(0, SessionSearch.ToSharedRef());
	}
}

void UPongGameInstance::CreateSession() const
{
	if (SessionInterface.IsValid())
	{
		FOnlineSessionSettings SessionSettings;
		// if (IOnlineSubsystem::Get()->GetSubsystemName() == "NULL")
		// {
		// 	SessionSettings.bIsLANMatch = true;
		// }
		// else
		// {
		// 	SessionSettings.bIsLANMatch = false;
		// }
		
		SessionSettings.bIsLANMatch = true;

		SessionSettings.NumPublicConnections = 2;
		SessionSettings.bShouldAdvertise = true;
		SessionSettings.bUsesPresence = true;
		SessionSettings.Set(SERVER_NAME_SETTINGS_KEY, ServerData.Name,
		                    EOnlineDataAdvertisementType::ViaOnlineServiceAndPing);

		SessionInterface->CreateSession(0, SESSION_NAME, SessionSettings);
	}
}

void UPongGameInstance::OnCreateSessionComplete(FName const SessionName, bool bSuccess)
{
	if (!bSuccess)
	{
		UE_LOG(LogUnrealPong, Warning, TEXT("Could not create session"))
		return;
	}

	if (!ensure(Menu)) return;
	Menu->Teardown();

	UEngine* Engine = GetEngine();
	if (!ensure(Engine)) return;

	UE_LOG(LogUnrealPong, Log, TEXT("Hosting %s"), *ServerData.Name)

	UWorld* World = GetWorld();
	if (!ensure(World)) return;

	// ToggleLoadingScreen(true);

	World->ServerTravel("/Game/Maps/Game?listen");
}

void UPongGameInstance::OnDestroySessionComplete(FName const SessionName, bool bSuccess)
{
	if (bSuccess)
	{
		CreateSession();
		UE_LOG(LogUnrealPong, Log, TEXT("Destroyed existing session"))
	}
	else
	{
		UE_LOG(LogUnrealPong, Warning, TEXT("Could not destroy existing session"))
	}
}

void UPongGameInstance::OnFindSessionsComplete(bool bSuccess)
{
	if (bSuccess && SessionSearch.IsValid())
	{
		UE_LOG(LogUnrealPong, Log, TEXT("Finished Find Session"))

		TArray<FPongServerData> ServerNames;
		for (FOnlineSessionSearchResult const& Result : SessionSearch->SearchResults)
		{
			UE_LOG(LogUnrealPong, Log, TEXT("Found session names: %s"), *Result.GetSessionIdStr())
			FPongServerData Data;
			Data.CurrentPlayers = 2 - Result.Session.NumOpenPublicConnections - Result.Session.
				NumOpenPrivateConnections;
			UE_LOG(LogUnrealPong, Log, TEXT("Open public connections: %d"), Result.Session.NumOpenPublicConnections)
			Data.HostUsername = Result.Session.OwningUserName;
			FString ServerName;
			if (Result.Session.SessionSettings.Get(SERVER_NAME_SETTINGS_KEY, ServerName))
			{
				Data.Name = ServerName;
			}
			else
			{
				Data.Name = "Could not find name.";
			}
			ServerNames.Add(Data);
		}

		Menu->SetServerList(ServerNames);
		// ToggleThinkingPopup(false);
	}
}

void UPongGameInstance::OnJoinSessionComplete(FName SessionName, EOnJoinSessionCompleteResult::Type Result)
{
	if (!SessionInterface.IsValid()) return;

	FString Address;
	if (!SessionInterface->GetResolvedConnectString(SessionName, Address))
	{
		UE_LOG(LogUnrealPong, Warning, TEXT("Could not get connect string."))
		return;
	}

	UEngine* Engine = GetEngine();
	if (!ensure(Engine)) return;

	UE_LOG(LogUnrealPong, Log, TEXT("Joining %s"), *Address)

	APlayerController* PlayerController = GetFirstLocalPlayerController();
	if (!ensure(PlayerController)) return;

	PlayerController->ClientTravel(Address, TRAVEL_Absolute);
}

void UPongGameInstance::OnNetworkFailure(UWorld* World, UNetDriver* NetDriver, ENetworkFailure::Type FailureType,
                                         const FString& ErrorString)
{
	LoadMainMenu();
}
