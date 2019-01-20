// Fill out your copyright notice in the Description page of Project Settings.

#include "TankTurret.h"

void UTankTurret::Rotate(float RelativeSpeed)
{
	// Move the Turret the right amount this frame
	// Given a max Rotation speed, and the frame time
	RelativeSpeed = FMath::Clamp<float>(RelativeSpeed, -2, +2);
	auto RotationChange = RelativeSpeed * MaxDegreesPersecond * GetWorld()->DeltaTimeSeconds;
	auto Rotation = RelativeRotation.Yaw + RotationChange;
	SetRelativeRotation(FRotator(0, Rotation, 0));

}