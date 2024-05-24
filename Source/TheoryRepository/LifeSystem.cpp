// Fill out your copyright notice in the Description page of Project Settings.


#include "LifeSystem.h"

// Sets default values for this component's properties
ULifeSystem::ULifeSystem()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void ULifeSystem::BeginPlay()
{
	Super::BeginPlay();
	
	
	// ...
	
}

void ULifeSystem::CheckLife()
{
	if (life <= 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("El personaje ah muerto"));
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Green, TEXT("El personaje sigue vivo"));
		life -= 1;
	}
	
}

// Called every frame
void ULifeSystem::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


	// ...
}



