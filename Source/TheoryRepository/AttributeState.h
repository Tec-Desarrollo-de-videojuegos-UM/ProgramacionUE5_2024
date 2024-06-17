// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AttributeState.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class THEORYREPOSITORY_API UAttributeState : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAttributeState();
	void CheckHealth(float HealthToCheck);
	void UseStamina(float StaminaToUse);

private:
	UPROPERTY(EditAnywhere)
	float Health;

	UPROPERTY(EditAnywhere)
	float Stamina;

		
};
