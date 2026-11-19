// Fill out your copyright notice in the Description page of Project Settings.


#include "LobbyControllerBase.h"

void ALobbyControllerBase::Server_GetMyTeamColor() {

	ALobbyModeBase* mode = Cast<ALobbyModeBase>(GetWorld()->GetAuthGameMode());
	if (nullptr == mode) return;

	m_Color = mode->

}