// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class THEORYREPOSITORY_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHealthComponent();
public:
	UPROPERTY(BlueprintReadWrite)
	int life = 5;
	
	UPROPERTY(BlueprintReadWrite)
	bool isAlive;

public:
	
	UFUNCTION(BlueprintCallable)
	void RestAndCheckLife();


};
