// Fill out your copyright notice in the Description page of Project Settings.


#include "AtrubutteState.h"

// Sets default values for this component's properties
UAtrubutteState::UAtrubutteState()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UAtrubutteState::CheckHealth()
{
	if (health > 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Blue, TEXT("El personaje esta vivo"));
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("El personaje ha muerto"));
	}
}

void UAtrubutteState::UseStamina(float StaminaToUse)
{
	if (stamina <= 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Orange, TEXT("No hay suficiente energia"));
	}
	else
	{
		stamina = stamina - StaminaToUse;
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Green, TEXT("Se puede realizar la accion"));
	}
}


// Called when the game starts
void UAtrubutteState::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UAtrubutteState::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

