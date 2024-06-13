// Fill out your copyright notice in the Description page of Project Settings.


#include "Atributes.h"

// Sets default values for this component's properties
UAtributes::UAtributes()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UAtributes::Checkhealth()
{
	if (health >= 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Emerald, TEXT("el personaje esta vivo"));
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Emerald, TEXT("el personaje esta morido"));
	}
}


bool UAtributes::Usestamina(float Staminatouse)
{
	if (stamina < 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Emerald, TEXT("no hay stamina suficiente"));
		return false;
	}
	else
	{
		stamina = stamina - Staminatouse;
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Emerald, TEXT("usar estamina"));
		return true;
	}
}


// Called when the game starts
void UAtributes::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UAtributes::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

