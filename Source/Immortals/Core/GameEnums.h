#pragma once

#include "Engine/EngineTypes.h"

UENUM(BlueprintType)
enum class EStance : uint8
{
	 Standing		UMETA(DisplayName = "Standing")
	,Crounching		UMETA(DisplayName = "Crouching")
};


UENUM(BlueprintType)
enum class EIdleEntryStance : uint8
{
	  N_Idle		UMETA(DisplayName = "N_Idle")
	, LF_Idle		UMETA(DisplayName = "LF_Idle")
	, RF_Idle		UMETA(DisplayName = "RF_Idle")
	, CLF_Idle		UMETA(DisplayName = "CLF_Idle")
	, CRF_Idle		UMETA(DisplayName = "CRF_Idle")
};

UENUM(BlueprintType)
enum class ELocomotionState : uint8
{
	  None			UMETA(DisplayName = "None")
	, NotMoving		UMETA(DisplayName = "NotMoving")
	, Moving		UMETA(DisplayName = "Moving")
	, Pivot			UMETA(DisplayName = "Pivot")
	, Stopping		UMETA(DisplayName = "Stopping")
};

UENUM(BlueprintType)
enum class EGait : uint8
{
	  Walking		UMETA(DisplayName = "Walking")
	, Running		UMETA(DisplayName = "Running")
	, Sprinting		UMETA(DisplayName = "Sprinting")
};

UENUM(BlueprintType)
enum class EMovement_Mode : uint8 //had to use underscore because the name is already taken :(
{
	  None			UMETA(DisplayName = "None")
	, Grounded		UMETA(DisplayName = "Grounded")
	, Falling		UMETA(DisplayName = "Falling")
	, RagDoll		UMETA(DisplayName = "RagDoll")
};

UENUM(BlueprintType)
enum class ERotationMode : uint8
{
	  VelocityDirection		UMETA(DisplayName = "VelocityDirection")
	, LookingDirection		UMETA(DisplayName = "LookingDirection")
};

UENUM(BlueprintType)
enum class EMovementDirection : uint8
{
	  Forwards		UMETA(DisplayName = "Forwards")
	, Backwards		UMETA(DisplayName = "Backwards")
};