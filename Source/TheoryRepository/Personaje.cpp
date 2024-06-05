// Fill out your copyright notice in the Description page of Project Settings.


#include "Personaje.h"
#include <iostream>
// Sets default values
APersonaje::APersonaje()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APersonaje::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APersonaje::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APersonaje::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}
void VerificarVida(int vida) {
	if (vida <= 0) (TEXT("Estas Muerto"));
	else (TEXT("Estas Vivo"));
}
void VerificarEnergia(int energia) {
	if (energia <= 0) (TEXT("No tienes suficiente energia"));
	else (TEXT("Tienes suficiente energia"));
}