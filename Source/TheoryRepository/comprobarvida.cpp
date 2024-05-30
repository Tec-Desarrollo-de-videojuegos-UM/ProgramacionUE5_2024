// Fill out your copyright notice in the Description page of Project Settings.


#include "comprobarvida.h"

// Sets default values
Acomprobarvida::Acomprobarvida()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	VidaMaxima = 100.0f;
	VidaActual = VidaMaxima;

}

// Called when the game starts or when spawned
void Acomprobarvida::BeginPlay()
{
	Super::BeginPlay();
	
	
}
void Acomprobarvida::RecibirDaño(float Cantidad)
{
	VidaActual -= Cantidad;
	if (VidaActual > 0.0f)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Orange, TEXT("El personaje ha muerto"));
	}
	else
	{
		GEngine ->AddOnScreenDebugMessage(-1, 5, FColor::Orange, TEXT("El personaje esta vivo"));
	}
}

// Called every frame
void Acomprobarvida::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

