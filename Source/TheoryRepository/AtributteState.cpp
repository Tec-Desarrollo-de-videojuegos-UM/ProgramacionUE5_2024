// Fill out your copyright notice in the Description page of Project Settings.

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
//Creamos las funciones en el cpp

void UAtributteState::CheckHealth()
{
	if (health >= 0)
	{
		GEngine->AddOnScreenDebugMessage(-1,5,FColor::Blue,TEXT("El personaje esta vivo"));
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1,5,FColor::Red,TEXT("El personaje esta muerto"));
	}

}

bool UAtributteState::UseEnergy(float EnergyToUse)
{
	if (energy <= 0)
	{

		GEngine->AddOnScreenDebugMessage(-1,5,FColor::Blue,TEXT("No hay suficiente energia"));
		return false;
		
	}
	else
	{
		energy = energy - EnergyToUse;
		GEngine->AddOnScreenDebugMessage(-1,5,FColor::Red,TEXT("Se puede realizar la accion"));
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

