// Fill out your copyright notice in the Description page of Project Settings.


#include "HitPlatform.h"

// Sets default values
AHitPlatform::AHitPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PlatformComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Box platform"));
	RootComponent = PlatformComponent;
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

