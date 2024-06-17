// Fill out your copyright notice in the Description page of Project Settings.


#include "HitPlatform.h"

// Sets default values
AHitPlatform::AHitPlatform()
{
 	
	PrimaryActorTick.bCanEverTick = true;
	BoxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collision"));
	RootComponent = BoxCollider;

}