// Fill out your copyright notice in the Description page of Project Settings.


#include "HealClass.h"
#include <iostream>

// Sets default values for this component's properties
UHealClass::UHealClass()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UHealClass::checkLife(int32 newLife)
{
	life = newLife;
	if (life <= 0) {
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("Estas Muerto"));
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("Estas Vivo"));
	}
}


// Called when the game starts
void UHealClass::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UHealClass::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	// ...
}



