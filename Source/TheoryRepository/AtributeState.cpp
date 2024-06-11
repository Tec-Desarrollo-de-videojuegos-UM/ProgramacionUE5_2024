// Fill out your copyright notice in the Description page of Project Settings.


#include "AtributeState.h"

// Sets default values for this component's properties
UAtributeState::UAtributeState()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}
void UAtributeState::CheckHealth()
{
	if (health > 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Magenta, TEXT("El personaje sigue vivo"));
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Magenta, TEXT("El personaje ha muerto"));
	}
}
bool UAtributeState::UseStamina(float StaminaToUse)
{
	if (stamina <= 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Magenta, TEXT("No hay estamina suficiente"));
		return false;
	}
	else
	{
		stamina = stamina - StaminaToUse;
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Magenta, TEXT("Usar estamina"));
		return true;
	}
}


// Called when the game starts
void UAtributeState::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UAtributeState::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

