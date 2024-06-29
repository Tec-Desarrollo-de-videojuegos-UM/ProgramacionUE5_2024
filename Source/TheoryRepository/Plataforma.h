// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <Components/BoxComponent.h>
#include "Plataforma.generated.h"

UCLASS()
class THEORYREPOSITORY_API APlataforma: public AActor
{
	GENERATED_BODY()
	
private:	
	// Sets default values for this actor's properties
	APlataforma();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


private:
	UPROPERTY(EditAnywhere)
	UBoxComponent* BoxCollider;
};
