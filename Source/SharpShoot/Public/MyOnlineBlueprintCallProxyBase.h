// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "MyOnlineBlueprintCallProxyBase.generated.h"
#include "SteamUtilities.h"

/**
 * 
 */
UCLASS()
class SHARPSHOOT_API UMyOnlineBlueprintCallProxyBase : public UOnlineBlueprintCallProxyBase
{
	GENERATED_BODY()

		

		virtual void Activate() override;
	
};
