// Fill out your copyright notice in the Description page of Project Settings.


#include "AttributeState.h"

// Sets default values for this component's properties
UAttributeState::UAttributeState()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UAttributeState::CheckHealth(float HealthToCheck)
{
	if (Health > 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Green, TEXT("El personaje sigue vivo"));
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("El personaje ha muerto"));
	}
	

}

void UAttributeState::UseStamina(float StaminaToUse)
{
	if (Stamina <= 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("No tienes stamina"));
	}
	else
	{
		Stamina = Stamina - StaminaToUse;

		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Green, TEXT("Usando stamina"));
	}
}