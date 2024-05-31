// Fill out your copyright notice in the Description page of Project Settings.


#include "lifeSystem.h"

// Sets default values for this component's properties
UlifeSystem::UlifeSystem()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}
void UlifeSystem::calculateLife(int32 newLife) {
	if (newLife <= 0) {
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Blue, TEXT("Su jugador ha muerto"));
	} 
	else {
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Blue, TEXT("Su jugador sigue vivo"));
	}

}

// Called when the game starts
void UlifeSystem::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UlifeSystem::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

