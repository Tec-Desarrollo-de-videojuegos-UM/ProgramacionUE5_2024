// Fill out your copyright notice in the Description page of Project Settings.


#include "PersonajeUwU.h"
#include "Engine/Engine.h"

// Sets default values
APersonajeUwU::APersonajeUwU()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Salud = 100.0f;
	bPersonajeMuerto = false;
}

// Called when the game starts or when spawned
void APersonajeUwU::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APersonajeUwU::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	checkVida();
};

void APersonajeUwU::checkVida()
{
	bool bNuevoEstadoMuerto = Salud <= 0;

	if (bNuevoEstadoMuerto != bPersonajeMuerto)
	{
		bPersonajeMuerto = bNuevoEstadoMuerto;

		if (bPersonajeMuerto)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("El personaje ha muerto"));
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("El personaje sigue vivo"));
		}
	}
}

void APersonajeUwU::AumentarSalud()
{
	Salud += 10.0f;
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Aumentó la salud"));
}

void APersonajeUwU::DisminuirSalud()
{
	Salud -= 10.0f;
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Disminuyó la salud"));
}

// Called to bind functionality to input
void APersonajeUwU::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAction("IncreaseHealth", IE_Pressed, this, & APersonajeUwU::AumentarSalud);
	PlayerInputComponent->BindAction("DecreaseHealth", IE_Pressed, this, & APersonajeUwU::DisminuirSalud);
}