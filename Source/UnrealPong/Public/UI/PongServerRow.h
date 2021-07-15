// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "Blueprint/UserWidget.h"
#include "Core/PongData.h"

#include "PongServerRow.generated.h"

class UTextBlock;
class UButton;
class UPongMainMenu;

/**
 * UnrealPong Server Row widget
 */
UCLASS()
class UNREALPONG_API UPongServerRow : public UUserWidget
{
	GENERATED_BODY()

public:
	void Setup(UPongMainMenu* InParent, uint32 const InIndex);

	FPongServerData GetServerData() const { return ServerData; }
	UTextBlock* GetServerName() const { return ServerName; }
	UTextBlock* GetHostUser() const { return HostUser; }
	UTextBlock* GetConnectionFraction() const { return ConnectionFraction; }
	bool GetIsSelected() const { return bIsSelected; }

	void SetServerData(FPongServerData const& InServerData);
	void SetRowIsSelected(bool const InSelected);

protected:
	UFUNCTION()
	void OnRowClicked();

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget, AllowPrivateAccess = true))
	UTextBlock* ServerName;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget, AllowPrivateAccess = true))
	UTextBlock* HostUser;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget, AllowPrivateAccess = true))
	UTextBlock* ConnectionFraction;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget, AllowPrivateAccess = true))
	UButton* RowButton;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	UPongMainMenu* Parent;

	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool bIsSelected{false};

	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	FPongServerData ServerData;

	uint32 Index;
};
