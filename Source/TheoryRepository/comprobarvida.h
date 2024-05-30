// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "comprobarvida.generated.h"

UCLASS()
class THEORYREPOSITORY_API Acomprobarvida : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Acomprobarvida();
	UPROPERTY(BlueprintReadOnly, Category = "Vida")
	float VidaMaxima;

    UPROPERTY(BlueprintReadOnly, Category = "Vida")
	float VidaActual;

	UPROPERTY(BlueprintReadOnly, Category = "Vida")
	float RecibirDaño(float Cantidad);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
