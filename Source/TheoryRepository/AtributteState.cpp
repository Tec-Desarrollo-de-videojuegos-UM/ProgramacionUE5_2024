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

void UAtributteState::CheckHealth()
{
	if (health > 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Green, TEXT("Tas Vivo"));
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("Tas muelto"));
	}

}

void UAtributteState::UseStamina(float StaminaToUse)
{
	if (stamina <= 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Magenta, TEXT("Tas cansao loco"));

	}
	else
	{
		stamina = stamina - StaminaToUse;
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Blue, TEXT("Tas manija pa"));
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

