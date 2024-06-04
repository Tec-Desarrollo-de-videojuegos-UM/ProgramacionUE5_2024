// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemBase.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AItemBase::AItemBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	BoxComponent1 = CreateDefaultSubobject(TEXT("BoxComponent"));
		RootComponent = BoxComponent1;

	StaticMeshComponent = CreateDefaultSubobject(TEXT("StaticMeshComponent"));
	StaticMeshComponent->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AItemBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AItemBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AItemBase: : SpawnBoxCollider
{

	FactorSpawnParameters spawnParams;
spawnParams.SpawnCollisionHandingOverride = ESpawnActorCollisionHandlingMethod: : AdjustIfPossibleButAlwatsSpawn;
GetWorld()->SpawnBoxCollider<AActor>(actorBPtoSpawn, GetActorTransform(), spawnParams);
}

