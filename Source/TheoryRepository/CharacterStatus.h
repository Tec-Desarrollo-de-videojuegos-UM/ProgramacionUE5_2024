// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CharacterStatus.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class THEORYREPOSITORY_API UCharacterStatus : public UActorComponent
{
	GENERATED_BODY()



protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Sets default values for this component's properties
	UCharacterStatus();
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	UFUNCTION(BlueprintCallable)
	bool HealthStatus();
	UFUNCTION(BlueprintCallable)
	bool EnergyStatus();

public:
	UPROPERTY(BlueprintReadWrite)
	int32 health;
	UPROPERTY(BlueprintReadWrite)
	int32 energy;
};
