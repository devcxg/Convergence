// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "LobbyModeBase.generated.h"

/**
 * 
 */
UCLASS()
class CONVERGENCE_API ALobbyModeBase : public AGameModeBase
{
	GENERATED_BODY()

protected:



public:

	/**					Michael:
	 * I hate how huge these unreal functions are
	 */
	virtual void PreLogin(
		const FString&, 
		const FString&, 
		const FUniqueNetIdRepl&, 
		FString&) 
	override;


	/**
	 *		GP FUNCTIONS
	 */
	virtual void	OnPostLogin	(AController* NewPlayer)	override;

	UFUNCTION(BlueprintCallable)
	void			GetTeamOf	(APlayerController* target);

	/**
	 *		CHAR SELECT FUNCTIONS
	 */


};
