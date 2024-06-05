// Fill out your copyright notice in the Description page of Project Settings.


#include "Personajeee.h"
#include <iostream>

// Sets default values
APersonajeee::APersonajeee()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APersonajeee::BeginPlay()
{
	Super::BeginPlay();
	vidaActual = vidaMaxima;
}

// Called every frame
void APersonajeee::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (vidaActual<=0)
	{
		std::cout << "Ha Muerto" << std::endl;
	}
}

// Called to bind functionality to input
void APersonajeee::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

