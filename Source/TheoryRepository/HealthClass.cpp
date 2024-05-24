// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthClass.h"

// Sets default values
AHealthClass::AHealthClass()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AHealthClass::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHealthClass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

