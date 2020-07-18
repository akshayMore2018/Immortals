#pragma once

#include "GameEnums.h"
#include "Animation/AnimMontage.h"
#include "GameStructs.generated.h"

USTRUCT(BlueprintType)
struct FPivotParams
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pivot")
	float PivotDirection;

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Pivot")
	EMovementDirection CompletedMovementDirection;

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Pivot")
	float CompletedStartTime;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Pivot")
	EMovementDirection InterruptedMovementDirection;

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Pivot")
	float InterruptedStartTime;

	FPivotParams() 
	:PivotDirection(0.0f)
	,CompletedMovementDirection(EMovementDirection::Forwards)
	,CompletedStartTime(0.0f)
	,InterruptedMovementDirection(EMovementDirection::Forwards)
	,InterruptedStartTime(0.0f)
	{

	}
};

USTRUCT(BlueprintType)
struct FTurnAnims
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Montage")
	TSoftObjectPtr<UAnimMontage> Turn_L_Anim;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Montage")
	TSoftObjectPtr<UAnimMontage> Turn_R_Anim;

	FTurnAnims()
		: Turn_L_Anim(nullptr)
		, Turn_R_Anim(nullptr)
	{

	}
};