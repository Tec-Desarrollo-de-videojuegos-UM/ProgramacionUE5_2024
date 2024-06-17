// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <Components/BoxComponent.h>
#include "HitPLataform.generated.h"

UCLASS()
class THEORYREPOSITORY_API AHitPLataform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHitPLataform();
	UPROPERTY(EditAnywhere)
	UBoxComponent* BoxCollider;



};
