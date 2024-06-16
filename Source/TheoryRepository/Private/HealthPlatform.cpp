// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthPlatform.h"

// Sets default values for this component's properties
UHealthPlatform::UHealthPlatform()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
	health = 3;
}


void UHealthPlatform::HitPlatform()
{
	if (health>1)
	{
		health -= 1;
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow,FString::Printf(TEXT("Vida Restante de la Plataforma: %d"),health));
		
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, TEXT("Se rompio la Plataforma  :("));
		GetOwner()->Destroy();
	}
}

// Called when the game starts
void UHealthPlatform::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UHealthPlatform::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

