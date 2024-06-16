// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <Components/BoxComponent.h>
#include "HitPlatform.generated.h"

UCLASS()
class THEORYREPOSITORY_API AHitPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Constructor
	AHitPlatform();

public:	
	UPROPERTY(EditAnywhere)
	UBoxComponent* BoxCollider;

};
