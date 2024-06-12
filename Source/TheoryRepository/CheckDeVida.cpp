// Fill out your copyright notice in the Description page of Project Settings.


#include "CheckDeVida.h"

<<<<<<< Updated upstream
// Sets default values for this component's properties
UCheckDeVida::UCheckDeVida()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	Health = 100;

	// ...
}


// Called when the game starts
void UCheckDeVida::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UCheckDeVida::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}
void UCheckDeVida::CheckHealth()
{
	if (Health >0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, TEXT("Eljugador esta vivo"));
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, TEXT("Eljugador esta muerto"));
	}
}
=======
// Sets default values
ACheckDeVida::ACheckDeVida()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Health = 100;
}

// Called when the game starts or when spawned
void ACheckDeVida::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACheckDeVida::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void ACheckDeVida::RevisarVida()
{
	if (Health > 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, TEXT("El pj esta vivo"));
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, TEXT("El pj esta muerto"));
	}
}

>>>>>>> Stashed changes
