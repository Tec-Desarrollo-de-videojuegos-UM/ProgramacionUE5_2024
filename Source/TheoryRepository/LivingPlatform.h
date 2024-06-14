// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <Components/BoxComponent.h>
#include "LivingPlatform.generated.h"

UCLASS()
class THEORYREPOSITORY_API ALivingPlatform : public AActor
{
	GENERATED_BODY()
	
public:
	// Constructor
	ALivingPlatform();

public:
	UPROPERTY(EditAnywhere)
	UBoxComponent* BoxCollider;

};
