// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MMGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class MARSMAZE_API UMMGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	UMMGameInstance(const FObjectInitializer& ObjInit);

	bool bGameReplayed;
	
	TArray<uint8_t> RoomMap;
	
};
