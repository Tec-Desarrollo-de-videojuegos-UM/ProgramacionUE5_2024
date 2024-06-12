// Fill out your copyright notice in the Description page of Project Settings.


#include "Caja.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"

// Sets default values
ACaja::ACaja()
{

	PrimaryActorTick.bCanEverTick = true;
	BoxMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BoxMesh"));
	RootComponent = BoxMesh;

}

// Called when the game starts or when spawned
void ACaja::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACaja::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

