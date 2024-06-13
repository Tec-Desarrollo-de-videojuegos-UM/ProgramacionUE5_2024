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

void UHealtComponent::CheckHealt()
{
	if (health > 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Green, TEXT("Ta vivo papi"));
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("Ta muelto papi"));
	}
}

void UHealtComponent::UseStamina(float StaminaToUse)
{
	if (stamina <= 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Blue, TEXT("So cra papi"));
	}
	else
	{
		stamina = stamina - StaminaToUse;
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("Tas muy cansao"));
	}
}


// Called when the game starts
void UHealtComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UHealtComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

