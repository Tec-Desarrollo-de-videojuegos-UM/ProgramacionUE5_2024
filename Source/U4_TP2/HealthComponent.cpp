// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponent.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	Health = 100.0f; // Default health value

	// ...
}


// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

bool UHealthComponent::CanBeDestroyed() const
{
	return Health <= 0.0f;
}

void UHealthComponent::TakeDamage(float Damage)
{
	Health -= Damage;
	if (CanBeDestroyed())
	{
		// Optionally, destroy the owner actor
		if (AActor* Owner = GetOwner())
		{
			Owner->Destroy();
		}
	}
}


// Called every frame
void UHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

