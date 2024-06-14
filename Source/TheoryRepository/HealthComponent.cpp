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



void UHealthComponent::RestAndCheckLife()
{
	life = life - 2;

	if (life >= 1)
	{
		isAlive = true;
	}
	else
	{
		isAlive = false;
	}

}



