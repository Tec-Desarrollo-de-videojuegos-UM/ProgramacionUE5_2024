// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponent.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

bool UHealthComponent::checkHealt(float restHealt)
{
	if (Healt <= 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Black, TEXT("Objeto destruido"));
		return false;
	}
	else
	{
		Healt = restHealt - Healt;
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("Objeto valido"));
		return true;
	}
}


// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

