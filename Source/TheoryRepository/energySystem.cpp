// Fill out your copyright notice in the Description page of Project Settings.


#include "energySystem.h"

// Sets default values for this component's properties
UenergySystem::UenergySystem()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UenergySystem::checkEnergy()
{
	if (energy <= 50) {
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("Energia baja"));
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("Energia correcta"));
	}
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

