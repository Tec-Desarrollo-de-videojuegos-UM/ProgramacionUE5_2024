// Fill out your copyright notice in the Description page of Project Settings.


#include "HealClass.h"

// Sets default values for this component's properties
UHealClass::UHealClass()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	// ...
}


// Called when the game starts
void UHealClass::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UHealClass::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UHealClass::takedamage()
{

	if (vidaPlataforma > 1) 
	{
		vidaPlataforma -= 1;
	}

	else 
	{
		GetOwner()->Destroy();
	}
}

