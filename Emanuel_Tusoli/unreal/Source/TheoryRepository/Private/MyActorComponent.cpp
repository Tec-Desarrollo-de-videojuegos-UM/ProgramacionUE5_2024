// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActorComponent.h"

// Sets default values for this component's properties
UMyActorComponent::UMyActorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}
void UMyActorComponent::calculateLife(int32 newLife) {
	if (newLife <= 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Orange, TEXT ("Su jugador ha muerto"));
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Emerald, TEXT ("Sigues con vida"));
	}
}


// Called when the game starts
void UMyActorComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UMyActorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

