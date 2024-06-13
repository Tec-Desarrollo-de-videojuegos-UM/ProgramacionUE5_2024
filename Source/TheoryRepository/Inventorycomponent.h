// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Inventorycomponent.generated.h"

UCLASS()
class THEORYREPOSITORY_API AInventorycomponent : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AInventorycomponent();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* TishTickFunction) override;

public:
	UPROPERTY(EditAnyware, BlueprintReadWrite)
	TArray<FString> itemName;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<int32> itemAmount;

	UPROPERTY(EditAnyware, BlueprintReadWrite)
	TMap<FString, int32> inventory; 
};
