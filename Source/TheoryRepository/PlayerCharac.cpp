#include "PlayerCharac.h"
// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharac.h"

// Sets default values
APlayerCharac::APlayerCharac()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerCharac::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerCharac::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}





