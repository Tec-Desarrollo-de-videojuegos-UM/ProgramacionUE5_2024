// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterHealth.h"
#include "Engine/Engine.h"

// Sets default values
ACharacterHealth::ACharacterHealth()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACharacterHealth::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACharacterHealth::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//
void ACharacterHealth::CheckHealth(int Health) {
	if (Health > 0) {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("El personaje sigue vivo"));
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("El personaje ha muerto"));
	}
}
