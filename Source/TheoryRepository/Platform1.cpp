// Fill out your copyright notice in the Description page of Project Settings.


#include "Platform1.h"

// Sets default values
APlatform1::APlatform1()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	BoxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	RootComponent = BoxCollider;
	BoxMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BoxMeshes"));
	RootComponent = BoxMesh;
};

