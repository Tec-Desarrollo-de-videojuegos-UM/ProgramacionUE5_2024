// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <Components/BoxComponent.h>
#include "RecollectableItem.generated.h"


UCLASS()
class THEORYREPOSITORY_API ARecollectableItem : public AActor
{
	GENERATED_BODY()
	

public:	
	// Sets default values for this actor's properties
	ARecollectableItem();




private:
	//Variables
	UPROPERTY(EditAnywhere)
	UBoxComponent* BoxCollider;

public:

	//variables
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString itemName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 itemAmountl;

};
