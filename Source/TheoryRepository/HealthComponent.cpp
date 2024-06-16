// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponent.h"

AHealthComponent::AHealthComponent()
{
	Health = 20;
}

void AHealthComponent::TakeDamage(int32 DamageAmount)
{
	Health -= DamageAmount;

		if (Health <= 0)
		{
			Destroy(true);
		}

}

