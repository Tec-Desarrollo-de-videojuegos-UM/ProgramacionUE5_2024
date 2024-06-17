// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealtComponent.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class THEORYREPOSITORY_API UHealtComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UHealtComponent();

	UFUNCTION (BlueprintCallable)
	void CheckDestroy();

	UFUNCTION(BlueprintCallable)
	void NewHit(float Hit);

public:
	UPROPERTY(Editanywhere)
	float Health;








};
