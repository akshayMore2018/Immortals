// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Core/GameEnums.h"
#include "ALS_Interface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UALS_Interface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class IMMORTALS_API IALS_Interface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintCallable,BlueprintImplementableEvent, Category = "ALS Values")
	void SetALS_GaitBPI(EGait ALS_Gait);

	UFUNCTION(BlueprintCallable,BlueprintImplementableEvent, Category = "ALS Movement Settings")
	void SetWalkingSpeed(float WalkingSpeed);

	UFUNCTION(BlueprintCallable,BlueprintImplementableEvent, Category = "ALS Movement Settings")
	void SetRunningSpeed(float RunningSpeed);

	UFUNCTION(BlueprintCallable,BlueprintImplementableEvent, Category = "ALS Movement Settings")
	void SetSprintingSpeed(float SprintingSpeed);
};
