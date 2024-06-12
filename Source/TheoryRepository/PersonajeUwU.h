// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PersonajeUwU.generated.h"

UCLASS()
class THEORYREPOSITORY_API APersonajeUwU : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APersonajeUwU();

	void checkVida();

	void AumentarSalud();
	void DisminuirSalud();

protected:

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="Healt")
		float Salud;

		bool bPersonajeMuerto;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
