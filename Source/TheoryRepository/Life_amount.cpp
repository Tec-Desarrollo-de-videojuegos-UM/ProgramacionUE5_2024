// Fill out your copyright notice in the Description page of Project Settings.


#include "Life_amount.h"

// Sets default values for this component's properties
ULife_amount::ULife_amount()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
	Health = 100;
}


// Called when the game starts
void ULife_amount::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void ULife_amount::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void ULife_amount::CheckHealth()
{
	if (Health <= 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("El personaje ha muerto"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("El personaje sigue vivo"));
	}
}
