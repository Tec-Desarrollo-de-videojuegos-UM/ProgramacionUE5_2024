// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <Components/BoxComponent.h>
#include "Platform1.generated.h"

UCLASS()
class THEORYREPOSITORY_API APlatform1 : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	APlatform1();
public:
	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	UBoxComponent* BoxCollider;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* BoxMesh;
};
