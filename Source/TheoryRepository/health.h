// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "health.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class THEORYREPOSITORY_API Uhealth : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	Uhealth();
	//UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 life
	UPROPERTY(BlueprintCallable)
	void CheckHealth();
	UPROPERTY(BlueprintCallable)
	void UseStamina(float StaminaToUse);
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	UPROPERTY(EditAnywhere)
	float health;
	UPROPERTY(EditAnywhere)
	float stamina;


};
