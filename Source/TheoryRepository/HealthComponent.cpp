// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponent.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{

}

bool UHealthComponent::IsDestroyable()
{
	if (WallHealth <= 0)
	{
		return true;

	}
	else
	{
		return false;
	}
}

void UHealthComponent::Damage()
{
	if (WallHealth > 0)
	{
		WallHealth -= 20;

		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("-20"));
	}
	else
	{

	}

}


