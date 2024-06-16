// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HitPlatform.h"
#include "HealthComponent.generated.h"

/**
 * 
 */
UCLASS()
class THEORYREPOSITORY_API AHealthComponent : public AHitPlatform
{
	GENERATED_BODY()

public:
	AHealthComponent();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
	int32 Health;

public:

	UFUNCTION(BlueprintCallable, Category = "Gameplay")
	void TakeDamage(int32 DamageAmount);
};
