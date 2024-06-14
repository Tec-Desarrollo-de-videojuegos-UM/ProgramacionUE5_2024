// Fill out your copyright notice in the Description page of Project Settings.


#include "HitPlataform.h"

// Sets default values
AHitPlataform::AHitPlataform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AHitPlataform::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHitPlataform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

