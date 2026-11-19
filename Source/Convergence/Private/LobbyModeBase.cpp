// Fill out your copyright notice in the Description page of Project Settings.


#include "LobbyModeBase.h"

void ALobbyModeBase::PreLogin(
	const FString& Options,
	const FString& Address,
	const FUniqueNetIdRepl& UniqueId,
	FString& ErrorMessage
)	{

	constexpr int32 MaxPlayers = 12;

	if (GetNumPlayers() >= MaxPlayers) {
		ErrorMessage = TEXT("Connection Denied; This Server is full.");
		return;
	}

}

void ALobbyModeBase::OnPostLogin(AController* NewPlayer) {

	Super::OnPostLogin(NewPlayer);

	

}