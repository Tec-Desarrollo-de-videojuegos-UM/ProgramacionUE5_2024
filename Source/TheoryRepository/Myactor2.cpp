// Fill out your copyright notice in the Description page of Project Settings.


#include "Myactor2.h"

// Sets default values
AMyactor2::AMyactor2()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
}

// Called when the game starts or when spawned
void AMyactor2::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyactor2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

