// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <Components/BoxComponent.h>
#include "MainItem.generated.h"


UCLASS()
class THEORYREPOSITORY_API AMainItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMainItem(); 

private:
	UPROPERTY(EditAnywhere)
	UBoxComponent* BoxCollider; 

	UPROPERTY(EditAnywhere)
	FString itemName;
	UPROPERTY(EditAnywhere)
	int32 itemAmount;

};
