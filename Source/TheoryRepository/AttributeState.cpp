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
	if (health >= 0) {

		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Blue, TEXT("Player is alive"));

	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("Player is dead"));
	}
	
	
	return false;
}


void UAttributeState::StaminaUse(float StaminaToUse)
{
	if (stamina <0 0) {

		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Blue, TEXT("Action cant be done"));

	}
	else {
		stamina = stamina - StaminaToUse;
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("Action can be done"));
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

