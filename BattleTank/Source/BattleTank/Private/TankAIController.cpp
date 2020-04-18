// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"
#include "GameFramework/Actor.h"

ATank* ATankAIController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
}

ATank* ATankAIController::GetPlayerTank() const
{
	auto PlayerPawn= GetWorld()->GetFirstPlayerController()->GetPawn();
	if (PlayerPawn)
	{
		return Cast<ATank>(PlayerPawn);
	}

	return nullptr;
}

void ATankAIController::Tick(const float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (const ATank* const PlayerTank = GetPlayerTank())
	{
		GetControlledTank()->AImAt(PlayerTank->GetActorLocation());
	}
}
