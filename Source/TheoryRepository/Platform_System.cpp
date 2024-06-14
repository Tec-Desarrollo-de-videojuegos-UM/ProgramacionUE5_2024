// Fill out your copyright notice in the Description page of Project Settings.


#include "Platform_System.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include <Engine/LevelBounds.h>

APlatform_System::APlatform_System(){

	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
RootComponent = BoxComponent;

MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
MeshComponent->SetupAttachment(RootComponent);

}






