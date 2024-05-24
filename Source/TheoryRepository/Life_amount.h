// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Life_amount.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class THEORYREPOSITORY_API ULife_amount : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	ULife_amount();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// Variable para la salud del personaje
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	int Health;

	// Función para verificar la salud
	UFUNCTION(BlueprintCallable, Category = "Health")
	void CheckHealth();
};
