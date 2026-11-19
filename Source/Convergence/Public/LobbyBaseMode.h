// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "LobbyBaseMode.generated.h"

/**
 * 
 */
UCLASS()
class CONVERGENCE_API ALobbyBaseMode : public AGameModeBase
{
	GENERATED_BODY()

private:

	AActor* m_pTeamSpectator;
	AActor* m_pTeamRed;
	AActor* m_pTeamBlue;

public:
	
	UFUNCTION(BlueprintCallable)
	virtual void GetSeamlessTravelActorList(bool bToTransition, TArray<AActor*> &ActorList) override;


};
