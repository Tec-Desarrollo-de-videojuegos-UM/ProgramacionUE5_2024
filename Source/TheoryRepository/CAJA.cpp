// Fill out your copyright notice in the Description page of Project Settings.


#include "CAJA.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"
#include <Engine/LevelBounds.h>


// Sets default values
ACAJA::ACAJA()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ColliderBox = CreateDefaultSubobject <UStaticMeshComponent>(TEXT("BoxComponent"));
	RootComponent = ColliderBox;

}

// Called when the game starts or when spawned
void ACAJA::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ACAJA::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

