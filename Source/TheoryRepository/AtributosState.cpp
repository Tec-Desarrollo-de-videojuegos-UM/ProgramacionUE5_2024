// Fill out your copyright notice in the Description page of Project Settings.


#include "AtributosState.h"

// Sets default values for this component's properties
UAtributosState::UAtributosState()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UAtributosState::CheckVida()
{
	if (vida > 0)
	{
		GEngine->AddOnScreenDebugMessage( -1, 5, FColor::Blue, TEXT("Esta vivo"));
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("Esta muerto"));

	}
		
}

void UAtributosState::UsarStamina(float StaminaAUsar)
{
	if (stamina<=0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Green, TEXT("No hay stamina"));
	}
	else {
		stamina = stamina - StaminaAUsar;
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Yellow, TEXT("Usar stamina"));
	}
}


// Called when the game starts
void UAtributosState::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UAtributosState::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

