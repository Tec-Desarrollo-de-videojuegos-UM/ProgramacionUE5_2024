// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "verificar_salud.generated.h"

UCLASS()
class THEORYREPOSITORY_API Averificar_salud : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	Averificar_salud();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
