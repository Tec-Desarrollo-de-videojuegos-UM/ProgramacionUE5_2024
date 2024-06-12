// Fill out your copyright notice in the Description page of Project Settings.


#include "AtributteState.h"

// Sets default values for this component's properties
UAtributteState::UAtributteState()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UAtributteState::CheackHealt()
{
	if (healt > 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Cyan, TEXT("The character is alive"));
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Black, TEXT("The character is dead"));
	}

}

void UAtributteState::UseStamina(float StaminaToUse)
{
	if (stamina <= 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Blue, TEXT("Not enough stamina"));
	}
	else
	{
		stamina = stamina - StaminaToUse;
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Emerald, TEXT("Use stamina"));
	}
}


// Called when the game starts
void UAtributteState::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UAtributteState::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

