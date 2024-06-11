// Fill out your copyright notice in the Description page of Project Settings.


#include "health.h"

// Sets default values for this component's properties
Uhealth::Uhealth()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

}
void Uhealth::CheckHealth()
{
	if (health > 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Blue, TEXT("Su personaje esta vivo"));

	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("Su personaje ha muerto"));

	}
		
}
void Uhealth::UseStamina(float StaminaToUse)
{
	if (stamina <= 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Blue, TEXT("NO tienes estamina"));

	}
	else
	{
		stamina = stamina - StaminaToUse
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("Tiene stamina"));

	}

// Called when the game starts
void Uhealth::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void Uhealth::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

