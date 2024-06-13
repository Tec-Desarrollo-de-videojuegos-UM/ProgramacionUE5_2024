// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoAtributos.h"

// Sets default values
AEstadoAtributos::AEstadoAtributos()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

bool AEstadoAtributos::CheckHeal(float HealtToChech)
{
	return false;
	if (health > 0)
	{ 
		GEngine-> AddOnScreenDebugMessage(-1, 5, FColor::Blue, TEXT("El pj esta vivo"));
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("El pj esta muerto"));
	}

}

void AEstadoAtributos::UseStamina(float StaminaToUse)
{
	if (stamina <= 0)
	{

		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Blue, TEXT("No hay suficiente stamina"));
	}
	else
	{
		stamina = stamina - StaminaToUse;
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("Usar Stamina"));
	}
}

// Called when the game starts or when spawned
void AEstadoAtributos::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstadoAtributos::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

