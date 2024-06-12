// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AtributteState.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class THEORYREPOSITORY_API UAtributteState : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAtributteState();

	UFUNCTION (BluePrintCallable)
	void CheckHealth();

	UFUNCTION (BluePrintCallable)
	bool UseStamina(float StaminaToUse);


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	UPROPERTY (EditAnyWhere)
	float health;
	UPROPERTY (EditAnyWhere)
	float stamina;

		
};
