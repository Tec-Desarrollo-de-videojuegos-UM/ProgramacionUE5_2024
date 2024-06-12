// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "MainItem.generated.h"


UCLASS()
class THEORYREPOSITORY_API AMainItem : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMainItem();

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString itemName;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 itemAmount;

private:
	UPROPERTY(EditAnywhere)
	UBoxComponent* BoxCollider;

	

};