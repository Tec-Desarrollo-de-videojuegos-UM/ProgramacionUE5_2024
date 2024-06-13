// Fill out your copyright notice in the Description page of Project Settings.


#include "AttributeState.h"

// Sets default values for this component's properties
UAttributeState::UAttributeState()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UAttributeState::CheckHealth()
{
	if (health > 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Emerald, TEXT("YOU ARE ALIVE!"));
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("YOU ARE DEAD!"));
	}
}

bool UAttributeState::UseStamina(float StaminaToUse)
{
	if (stamina <= 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("YOUR STAMINA RUN OUT!"));
		return false;
	}
	else
	{
		stamina = stamina - StaminaToUse;
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Emerald, TEXT("STAMINA AVAILABLE!"));
		return true;
	}
}


// Called when the game starts
void UAttributeState::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UAttributeState::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

