// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemBase.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"


// Sets default values for this component's properties
AItemBase::AItemBase()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	
	BoxComponent = CreateDefaultSubobject <UStaticMeshComponent>(TEXT("BoxComponent"));
	RootComponent = BoxComponent;
	
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMeshAsset(TEXT("/Engine/BasicShapes/Cube.Cube"));

	if (CubeMeshAsset.Succeeded())
	{
		BoxComponent->SetStaticMesh(CubeMeshAsset.Object);
	}
	// ...
}


// Called when the game starts
void AItemBase::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void AItemBase::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}



