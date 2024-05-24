// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Energy_level.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class THEORYREPOSITORY_API UEnergy_level : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UEnergy_level();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// Variable para la energ�a del personaje
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Energy")
	int Energy;

	// Funci�n para verificar y reducir la energ�a
	UFUNCTION(BlueprintCallable, Category = "Energy")
	void PerformAction(int EnergyCost);
};
