// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Myactor2.h"
#include "Platform_System.generated.h"

/**
 * 
 */
UCLASS()
class THEORYREPOSITORY_API APlatform_System : public AMyactor2
{
	GENERATED_BODY()

 public:
	//Collision component
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UBoxComponent* BoxComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UStaticMeshComponent* MeshComponent;
};
