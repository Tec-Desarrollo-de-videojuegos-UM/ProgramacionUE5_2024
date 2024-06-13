// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "comprobarVida.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class THEORYREPOSITORY_API UcomprobarVida : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UFUNCTION(BlueprintCallable)
	void CheckVida();
	UFUNCTION(BlueprintCallable)
	bool UseStamina(float EstaminaUsar);

private:
	UPROPERTY(EditAnywhere)
	float  health;
	UPROPERTY(EditAnywhere)
	float stamina;
};
