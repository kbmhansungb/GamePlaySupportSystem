// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/PrimitiveComponent.h"
#include "PhysicsFunctionLibrary.generated.h"

UCLASS()
class UPhysicsFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	//
	//	Rotation
	//	RelativeRotation이란게 마음에 안들긴 하지만..
	//
	UFUNCTION(BlueprintCallable)
	static FRotator ExpectRotator(FRotator Rotator, float Time, FVector NowAngularVelocity)
	{
		FVector Forward = Rotator.RotateVector(FVector::ForwardVector);
		FVector Right = Rotator.RotateVector(FVector::RightVector);
		FVector Up = Rotator.RotateVector(FVector::UpVector);
		
		FVector AngularVelocity = NowAngularVelocity / Time;
		FVector Axis = AngularVelocity;
		Axis.Normalize();

		Forward = Forward.RotateAngleAxis(AngularVelocity[0], Axis);
		Right = Right.RotateAngleAxis(AngularVelocity[1], Axis);
		Up = Up.RotateAngleAxis(AngularVelocity[2], Axis);
		
		Forward.Normalize();
		Right.Normalize();
		Up.Normalize();
		FMatrix RotMatrix(Forward, Right, Up, FVector::ZeroVector);

		return RotMatrix.Rotator();
	}
	UFUNCTION(BlueprintCallable)
	static float MinAngularMovement(float Desire, float Angular)
	{
		float Return = Desire;// + Angular;
		if (Return > 180)
			Return -= 360;
		if (Return < -180)
			Return += 360;

		return Return - Angular;
	}
	UFUNCTION(BlueprintCallable)
	static void MakeAngularVelocity(float Time, FRotator Now, FRotator Desire, FVector& DesireAngularVelocity)
	{
		FRotator Require = UKismetMathLibrary::ComposeRotators(Now.GetInverse(), Desire);
		DesireAngularVelocity.X = Require.Roll * -1 / Time;
		DesireAngularVelocity.Y = Require.Pitch * -1 / Time;
		DesireAngularVelocity.Z = Require.Yaw / Time;
	}
	UFUNCTION(BlueprintCallable)
	static void AdjustRotationToDesire(FRotator TargetWorldRotator, FVector NowAngularVelocity, FRotator Desire, float Time
		, FVector& AddAngularVelocity)
	{
		FVector DesirAngularVelocity;
		MakeAngularVelocity(Time, TargetWorldRotator, Desire, DesirAngularVelocity);
		AddAngularVelocity = DesirAngularVelocity - NowAngularVelocity;
	}


	UFUNCTION(BlueprintCallable)
	static FVector GetTargetMassCenter(UPrimitiveComponent* Target)
	{
		return Target->GetComponentLocation() + Target->GetCenterOfMass();
	}
	//Location
	UFUNCTION(BlueprintCallable)
	static void ExpectMassCenterLocation(FVector LinearVelocity, FVector MassCenter, float Time
		, FVector& ExpectMassCenterLocation)
	{
		ExpectMassCenterLocation = MassCenter + LinearVelocity * Time;
	}
	UFUNCTION(BlueprintCallable)
	static void MakeLinearVelocity(float Time, FVector Now, FVector Desire, FVector& DesireLinearVelocity)
	{
		DesireLinearVelocity = (Desire - Now) / Time;
	}
	UFUNCTION(BlueprintCallable)
	static void AdjustMassCenterLocationToDesire(
		FVector MassCenter, FVector NowLinearVelocity, FVector Desire, float Time, FVector& AddLinearVelocity)
	{
		FVector DesireLinearVelocity;
		MakeLinearVelocity(Time, MassCenter, Desire, DesireLinearVelocity);

		AddLinearVelocity = (DesireLinearVelocity - NowLinearVelocity);
	}
};