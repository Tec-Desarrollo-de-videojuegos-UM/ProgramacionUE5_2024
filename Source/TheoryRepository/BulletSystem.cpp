// Fill out your copyright notice in the Description page of Project Settings.


#include "BulletSystem.h"

// Sets default values for this component's properties
UBulletSystem::UBulletSystem()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	SetAmout(7);
	// ...
}


// Called when the game starts
void UBulletSystem::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UBulletSystem::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

bool UBulletSystem::Shoot()
{
	if (amount <= 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("Necesitas recargar, no tienes balas"));
		SetAmout(7);
		return true;
	}
	else
	{
		amount = amount - 1;
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Emerald, TEXT("Tienes balas suficientes"));
		return false;
	}
}

void UBulletSystem::SetAmout(int32 NewAmount)
{
	amount = NewAmount;
}

