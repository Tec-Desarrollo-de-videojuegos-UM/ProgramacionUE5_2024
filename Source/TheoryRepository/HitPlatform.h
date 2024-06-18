// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HitPlatform.generated.h"


UCLASS()
class THEORYREPOSITORY_API AHitPlatform : public AActor
{
	GENERATED_BODY(CubeFace_MAX)

public:
	AHitPlatform();

public:
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(EditAnywhere)
	class UBoxComponent* BoxComponent;

	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* MeshComponent;

private:
	UFUNCTION(BlueprintCallable)
};
