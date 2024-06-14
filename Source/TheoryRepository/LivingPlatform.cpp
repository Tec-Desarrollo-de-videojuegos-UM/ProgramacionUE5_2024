// Fill out your copyright notice in the Description page of Project Settings.


#include "LivingPlatform.h"

// Sets default values
ALivingPlatform::ALivingPlatform()
{
	PrimaryActorTick.bCanEverTick = true;
	BoxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collision"));
	RootComponent = BoxCollider;
}




