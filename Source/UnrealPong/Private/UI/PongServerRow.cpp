// Copyright Epic Games, Inc. All Rights Reserved.


#include "UI/PongServerRow.h"
#include "UI/PongMainMenu.h"

#include "Components/Button.h"
#include "Components/TextBlock.h"

void UPongServerRow::Setup(UPongMainMenu* InParent, uint32 const InIndex)
{
	Parent = InParent;
	Index = InIndex;
	if (!ensure(RowButton)) return;
	RowButton->OnClicked.AddDynamic(this, &UPongServerRow::OnRowClicked);
}

void UPongServerRow::SetServerData(FPongServerData const& InServerData)
{
	ServerData = InServerData;
	ServerName->SetText(FText::FromString(ServerData.Name));
	HostUser->SetText(FText::FromString(ServerData.HostUsername));
	ConnectionFraction->SetText(
		FText::FromString(FString::Printf(TEXT("%d/%d"), ServerData.CurrentPlayers, 2)));
}

void UPongServerRow::SetRowIsSelected(bool const InSelected)
{
	bIsSelected = InSelected;
}

void UPongServerRow::OnRowClicked()
{
	Parent->SelectServerRowIndex(Index);
}
