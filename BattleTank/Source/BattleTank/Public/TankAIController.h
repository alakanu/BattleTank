// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"
#include "CoreMinimal.h"
#include "AIController.h"
#include "TankAIController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()

public:

private:

	ATank* GetControlledTank() const;

	void BeginPlay() override;
	
	ATank* GetPlayerTank() const;

	void Tick(const float DeltaTime) override;
};