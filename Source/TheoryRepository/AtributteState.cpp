// Fill out your copyright notice in the Description page of Project Settings.


#include "AtributteState.h"

// Sets default values for this component's properties
UAtributteState::UAtributteState()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UAtributteState::CheckHealth()
{	
	if (health > 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Emerald, TEXT("El Personaje esta vivo"));
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("El Personaje Murio"));
	}
}

bool UAtributteState::UseStamina(float StaminaToUse)
{
	if (stamina <= 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Blue, TEXT("no hay suficiente estamina"));
		return false;
	}
	else
	{	
		stamina = stamina - StaminaToUse;
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Yellow, TEXT("Usar estamina"));
		return true;
	}
}


// Called when the game starts
void UAtributteState::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UAtributteState::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

