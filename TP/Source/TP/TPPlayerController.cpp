// Fill out your copyright notice in the Description page of Project Settings.

#include "TPPlayerController.h"
#include "TPCheatManager.h"




ATPPlayerController::ATPPlayerController(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	CheatClass = UTPCheatManager::StaticClass();
}

void ATPPlayerController::BeginPlay()
{
	Super::BeginPlay();
}

void ATPPlayerController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}

