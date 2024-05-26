// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "contador_de_vida.generated.h"

UCLASS()
class THEORYREPOSITORY_API Acontador_de_vida : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Acontador_de_vida();
	void CheckHealth() const;

protected:
	// Called when the game starts or when spawned
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Character|Healt")
	float Healt;

};
