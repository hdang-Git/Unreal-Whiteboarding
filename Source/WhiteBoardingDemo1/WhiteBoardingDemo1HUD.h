// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "WhiteBoardingDemo1HUD.generated.h"

UCLASS()
class AWhiteBoardingDemo1HUD : public AHUD
{
	GENERATED_BODY()

public:
	AWhiteBoardingDemo1HUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

