#include "Attributes.h"
// Fill out your copyright notice in the Description page of Project Settings.


#include "Attributes.h"

// Sets default values for this component's properties
UAttributes::UAttributes()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UAttributes::CheckHealth()
{
	if (health >= 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Green, TEXT(*The player is Alive*));
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT(*The player is DEAD*));
	}
}

void UAttributes::UseStamina(float StaminaToUse)
{
	if (stamina <= 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Blue, TEXT(*Not enough stamina*));
	}
	else
	{
		stamina = stamina - StaminaToUse;
			GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT(*Enough Stamina*));
	}
}


// Called when the game starts
void UAttributes::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UAttributes::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

