// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"


#include "UObject/Interface.h"
#include "PongMenuInterface.generated.h"

struct FPongServerData;

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UPongMenuInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Interface used by the GameInstance to handle various menu functions
 */
class UNREALPONG_API IPongMenuInterface
{
	GENERATED_BODY()
	
    // Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
    virtual void Host(FString const& ServerName) = 0;
    virtual void Join(int const& Index, FPongServerData const& InServerData) = 0;
    virtual void StartGame() = 0;
    virtual void LoadMainMenu() = 0;
	virtual void RefreshServerList() = 0;

};
