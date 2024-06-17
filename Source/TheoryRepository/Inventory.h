// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Inventory.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class THEORYREPOSITORY_API UInventory : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UInventory();
	UFUNCTION(BlueprintCallable)
	void AddItemToInventory(FString ItemName, int32 ItemAmount);

public:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> itemNameList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> itemAmountList;

};
