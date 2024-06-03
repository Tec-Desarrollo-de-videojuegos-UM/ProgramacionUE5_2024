// Fill out your copyright notice in the Description page of Project Settings.


#include "energySystem.h"

// Sets default values for this component's properties
UenergySystem::UenergySystem()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	calculateEnergy(100);
}

// Called when the game starts
void UenergySystem::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UenergySystem::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

bool UenergySystem::checkEnergy()
{
	if (energy <= 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Blue, TEXT("No tienes energias para realizar la accion"));
		calculateEnergy(100);
		return true;
	}
	else {
		energy = energy - 10;
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Blue, TEXT("Tienes energias para realizar la accion"));
		return false;
	}
}
void UenergySystem::calculateEnergy(int32 newEnergy) {
	energy = newEnergy;

}
