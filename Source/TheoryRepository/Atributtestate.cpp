// Fill out your copyright notice in the Description page of Project Settings.


#include "Atributtestate.h"

// Sets default values for this component's properties
UAtributtestate::UAtributtestate()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UAtributtestate::CheckHealth()
{
    if (health > 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Blue, TEXT("el personaje esta vivo"));

	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("el personaje esta muerto"));
	
	}
	
}


void UAtributtestate::UseStamina(float StaminaToUse)
{
	if (stamina <= 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Blue, TEXT("no hay stamina"));

	}
	else
	{
		stamina = stamina - StaminaToUse;
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("se puede realizar accion"));

	}

}

// Called when the game starts
void UAtributtestate::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UAtributtestate::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

