// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "TP.h"
#include "GameFramework/PlayerController.h"
#include "TPPlayerController.generated.h"

/**
 *
 */
UCLASS()
class  ATPPlayerController : public APlayerController
{
	GENERATED_BODY()


public:
	ATPPlayerController(const FObjectInitializer& ObjectInitializer);


	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;
};
