// Fill out your copyright notice in the Description page of Project Settings.


#include "HitPlatform.h"

#include "NavCollision.h"

// Sets default values
AHitPlatform::AHitPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	BoxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Boxcollision"));
	RootComponent = BoxCollider;
}

// Called when the game starts or when spawned
void AHitPlatform::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHitPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

