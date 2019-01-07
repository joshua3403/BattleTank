// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController.h"

// Called every frame
void ATankPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	AimTowardsCrosshair();

}

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();

	auto ControlledTank = GetControlledTank();

	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerTank was not possessed"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerTank was possessed : %s"), *ControlledTank->GetName());
	}
}

ATank* ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}

void ATankPlayerController::AimTowardsCrosshair()
{
	if (!GetControlledTank()) { return; }

	FVector HitLocation; // Out parameter
	if (GetSightRayHitLocation(HitLocation))
	{
		// UE_LOG(LogTemp, Warning, TEXT("LookDirecton : %s"), *HitLocation.ToString());
			// TODO Tell controlled tank to aim at this pointx
	}

}

// Get World location of linetrace through crosshair, true if hits landscape
bool ATankPlayerController::GetSightRayHitLocation(FVector & OutHitLocation) const
{
	// Find the crosshair position in pixel coordinates
	int32 ViewportSizeX, ViewportSizeY;
	GetViewportSize(ViewportSizeX, ViewportSizeY);

	auto ScreenLocation = FVector2D(ViewportSizeX * CrosshairXLocation, ViewportSizeY * CrosshairYLocation);
	// UE_LOG(LogTemp, Warning, TEXT("Screen Location : %s"), *ScreenLocation.ToString());

	// "De-project" the screen position of the crosshair to a world directon
	FVector LookDicrection;
	if (GetLookDirection(ScreenLocation, LookDicrection))
	{
		UE_LOG(LogTemp, Warning, TEXT("Look Direction : %s"), *LookDicrection.ToString());
	}
	

	// Line-trace along that look direction, and see what we hit (up to max range)
	return true;
}

bool ATankPlayerController::GetLookDirection(FVector2D ScreenLocation, FVector& LookDirection) const
{
	FVector CameraWorldLoaction;	// To be discarded

	return	DeprojectScreenPositionToWorld(
				ScreenLocation.X, 
				ScreenLocation.Y,
				CameraWorldLoaction,
				LookDirection);

}
