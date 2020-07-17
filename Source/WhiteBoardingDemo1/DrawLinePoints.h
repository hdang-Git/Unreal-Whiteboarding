// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DrawLinePoints.generated.h"

/**
 * 
 */
UCLASS()
class WHITEBOARDINGDEMO1_API UDrawLinePoints : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
		UFUNCTION(BlueprintCallable, Category = MyCategory)
		static TArray<FVector2D> DrawLineBetweenPoints(FVector2D startPt, FVector2D endPt);

		UFUNCTION(BlueprintCallable, Category = "MyCategory")
		static TArray<FVector2D> LerpBetweenPoints(FVector2D startPt, FVector2D endPt);
};
