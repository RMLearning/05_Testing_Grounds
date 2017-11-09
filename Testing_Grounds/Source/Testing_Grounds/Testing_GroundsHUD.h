// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Testing_GroundsHUD.generated.h"

UCLASS()
class ATesting_GroundsHUD : public AHUD
{
	GENERATED_BODY()

public:
	ATesting_GroundsHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

