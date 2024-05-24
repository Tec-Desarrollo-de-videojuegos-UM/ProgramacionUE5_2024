// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterStatus.h"

// Sets default values for this component's properties
UCharacterStatus::UCharacterStatus()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
	health = 10;
	energy = 50;
}


// Called when the game starts
void UCharacterStatus::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UCharacterStatus::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

bool UCharacterStatus::HealthStatus()
{
	if (health == 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("You are Dead"));
		health = health + 10;
		return true;
	} 
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Green, TEXT("You are alive"));
		health = health - 5;
		return false;
	}
	
}
bool UCharacterStatus::EnergyStatus()
{

	if (energy >= 50)
	{

		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Cyan, TEXT("you can do the action"));
		energy = energy - 50;
		return true;
	} 
	else
	{

		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("you can't do the action"));
		energy = energy + 100;
		return false;
	}

	return false;
}
