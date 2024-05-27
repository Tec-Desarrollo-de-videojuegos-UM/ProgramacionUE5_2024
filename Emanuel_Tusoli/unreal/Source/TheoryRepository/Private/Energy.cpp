// Fill out your copyright notice in the Description page of Project Settings.


#include "Energy.h"

// Sets default values for this component's properties
UEnergy::UEnergy()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}
void UEnergy::calculateEnergy (int32 Energy)
if energy <= 0
{
	GEngine->AddOnScreenDebugMessage (-1,2, FColor::Blue)

}


// Called when the game starts
void UEnergy::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UEnergy::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

