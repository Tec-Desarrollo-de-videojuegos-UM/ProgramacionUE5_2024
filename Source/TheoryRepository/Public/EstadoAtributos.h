// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EstadoAtributos.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class THEORYREPOSITORY_API AEstadoAtributos : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstadoAtributos();
	UFUNCTION(BlueprintCallable)
	bool CheckHeal(float healthToCheck);
	UFUNCTION(BlueprintCallable)
	void UseStamina(float StaminaToUse);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(EditAnywhere)
	float health;
	UPROPERTY(EditAnywhere)
	float stamina;
};
