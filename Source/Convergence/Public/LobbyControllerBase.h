// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LobbyModeBase.h"
#include "PlayerIdentity.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"
#include "LobbyControllerBase.generated.h"

/**
 * 
 */
UCLASS()
class CONVERGENCE_API ALobbyControllerBase : public APlayerController
{
	GENERATED_BODY()

protected:

	UPROPERTY(Replicated)

	FVector<FString>	m_OtherPlayerNames;
	FString				m_PlayerName;


	FString				m_DeclarationOfIntent;

public:

	//
	// Server_GetPlayerNames
	// 
	// Parses a formatted string into an array
	// 
	//
	UFUNCTION(Server, Reliable)
	void Server_GetPlayerNames();

	UFUNCTION(Server, Reliable)
	void Server_GetMyTeamColor();


};
