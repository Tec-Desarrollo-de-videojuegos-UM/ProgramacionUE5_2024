// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponent.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

bool UHealthComponent::checkeandoVidaPared()
{
	if (vidaPared <= 0 ) //pared muerta
	{
		return false;
	}

	else //pared viva
	{
		return true;
	}
}

void UHealthComponent::takeDamage()
{
	if (vidaPared <= 0) //pared muerta
	{
			
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT ("Pared Muerta"));
	}

	else //pared viva
	{
		vidaPared = vidaPared - 5;
	}

}


