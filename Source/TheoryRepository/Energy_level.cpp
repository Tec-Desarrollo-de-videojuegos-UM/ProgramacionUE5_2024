// Fill out your copyright notice in the Description page of Project Settings.


#include "Energy_level.h"

// Sets default values for this component's properties
UEnergy_level::UEnergy_level()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
	Energy = 100;
}


// Called when the game starts
void UEnergy_level::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UEnergy_level::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UEnergy_level::PerformAction(int EnergyCost)
{
	if (Energy >= EnergyCost)
	{
		Energy -= EnergyCost;
		UE_LOG(LogTemp, Warning, TEXT("Se puede realizar la acción. Energía restante: %d"), Energy);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No hay suficiente energía. Energía actual: %d"), Energy);
	}
}
