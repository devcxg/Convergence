// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TeamColor.h"

#include "UObject/Class.h"
#include "PlayerIdentity.generated.h"

USTRUCT(BlueprintType)
struct CONVERGENCE_API FPlayerIdentity 
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)

	TEnumAsByte<ETeamColor> TeamColor;


};