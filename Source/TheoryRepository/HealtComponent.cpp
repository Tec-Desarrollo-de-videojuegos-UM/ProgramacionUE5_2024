// Fill out your copyright notice in the Description page of Project Settings.


#include "HealtComponent.h"

// Sets default values for this component's properties
UHealtComponent::UHealtComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}
void UHealtComponent::CheckDestroy() 
{
	if (Health <= 0)
	{
		GetOwner()->Destroy();
	}
}
void UHealtComponent::NewHit(float Hit)
{
	Health = Health - Hit;
}



