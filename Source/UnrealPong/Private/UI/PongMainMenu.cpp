// Copyright Epic Games, Inc. All Rights Reserved.


#include "UI/PongMainMenu.h"
#include "Core/PongData.h"

#include "Components/Button.h"
#include "Components/WidgetSwitcher.h"
#include "UI/PongMenuInterface.h"
#include "UI/PongServerRow.h"

DEFINE_LOG_CATEGORY(LogUnrealPongUI);

UPongMainMenu::UPongMainMenu(FObjectInitializer const& ObjectInitializer)
{

}

bool UPongMainMenu::Initialize()
{
	bool const bSuccess = Super::Initialize();
	if (!bSuccess) return false;

	/** Initialize Main Menu widgets and bind Callbacks */
	if (!ensure(HostButton)) return false;
	HostButton->OnClicked.AddDynamic(this, &UPongMainMenu::HostServer);

	if (!ensure(JoinButton)) return false;
	JoinButton->OnClicked.AddDynamic(this, &UPongMainMenu::OpenJoinMenu);

	if (!ensure(QuitButton)) return false;
	QuitButton->OnClicked.AddDynamic(this, &UPongMainMenu::QuitPressed);
	
	/** Initialize Join Menu widgets and bind Callbacks */
	if (!ensure(CancelJoinMenuButton)) return false;
	CancelJoinMenuButton->OnClicked.AddDynamic(this, &UPongMainMenu::OpenMainMenu);

	if (!ensure(RefreshListJoinMenuButton)) return false;
	RefreshListJoinMenuButton->OnClicked.AddDynamic(this, &UPongMainMenu::RefreshServerList);

	if (!ensure(ConfirmJoinMenuButton)) return false;
	ConfirmJoinMenuButton->OnClicked.AddDynamic(this, &UPongMainMenu::JoinServer);
	
	MenuSwitcher->SetActiveWidget(MainMenu);

	return true;
}

void UPongMainMenu::HostServer()
{
	if (MenuInterface)
	{
		MenuInterface->Host("Pong");
	}
}

void UPongMainMenu::JoinServer()
{
	if (SelectedServerRowIndex.IsSet() && MenuInterface)
	{
		if (auto const ServerRow = Cast<UPongServerRow>(ServerList->GetChildAt(SelectedServerRowIndex.GetValue())))
		{
			UE_LOG(LogUnrealPongUI, Log, TEXT("Selected Index %d"), SelectedServerRowIndex.GetValue())
			MenuSwitcher->SetActiveWidget(MainMenu);
			MenuInterface->Join(SelectedServerRowIndex.GetValue(), ServerRow->GetServerData());
		}
	}
	else
	{
		UE_LOG(LogUnrealPongUI, Warning, TEXT("Selected Index Not Set"))
	}
}

void UPongMainMenu::QuitPressed()
{
	auto const World = GetWorld();
	if (!ensure(World)) return;

	auto PlayerController = World->GetFirstPlayerController();
	if (!ensure(PlayerController)) return;

	PlayerController->ConsoleCommand("quit");
}

void UPongMainMenu::OpenMainMenu()
{
	if (!ensure(MenuSwitcher)) return;
	if (!ensure(MainMenu)) return;
	MenuSwitcher->SetActiveWidget(MainMenu);
}

void UPongMainMenu::OpenJoinMenu()
{
	if (!ensure(MenuSwitcher)) return;
	if (!ensure(JoinMenu)) return;
	MenuSwitcher->SetActiveWidget(JoinMenu);

	RefreshServerList();
}

void UPongMainMenu::RefreshServerList()
{
	if (MenuInterface)
	{
		ServerList->ClearChildren();
		MenuInterface->RefreshServerList();
	}
}

void UPongMainMenu::SetActiveWidget(int const& Index)
{
	MenuSwitcher->SetActiveWidgetIndex(Index);
}

void UPongMainMenu::SetServerList(TArray<FPongServerData> ServerNames)
{
	auto const World = GetWorld();
	if (!ensure(World)) return;

	ServerList->ClearChildren();

	uint32 i = 0;
	for (FPongServerData const& ServerData : ServerNames)
	{
		UPongServerRow* ServerRow = CreateWidget<UPongServerRow>(World, ServerRowWidgetClass);
		if (!ensure(ServerRow)) return;
		
		ServerRow->SetServerData(ServerData);
		ServerRow->Setup(this, i);
		++i;
		
		ServerList->AddChild(ServerRow);
	}
}

void UPongMainMenu::SelectServerRowIndex(uint32 const Index)
{
	SelectedServerRowIndex = Index;
	UpdateServerRowChildren();
}

void UPongMainMenu::UpdateServerRowChildren()
{
	for (int32 i{}; i < ServerList->GetChildrenCount(); ++i)
	{
		auto Row = Cast<UPongServerRow>(ServerList->GetChildAt(i));
		if (Row)
		{
			Row->SetRowIsSelected(SelectedServerRowIndex.IsSet() && SelectedServerRowIndex.GetValue() == i);
		}
	}
}
