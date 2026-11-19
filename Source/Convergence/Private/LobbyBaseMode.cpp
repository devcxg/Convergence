// Fill out your copyright notice in the Description page of Project Settings.


#include "LobbyBaseMode.h"

void ALobbyBaseMode::GetSeamlessTravelActorList(bool bToTransition, TArray<AActor*>& ActorList)
{

	AGameModeBase::GetSeamlessTravelActorList(bToTransition, ActorList);

	if (bToTransition) {
		ActorList.Add(m_pTeamRed);
		ActorList.Add(m_pTeamBlue);
		ActorList.Add(m_pTeamSpectator);
	}
	else {
		ActorList.Add(m_pTeamRed);
		ActorList.Add(m_pTeamBlue);
		ActorList.Add(m_pTeamSpectator);
	}

}