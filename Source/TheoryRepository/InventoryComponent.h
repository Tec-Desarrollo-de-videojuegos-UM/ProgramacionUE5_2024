// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InventoryComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class THEORYREPOSITORY_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventoryComponent();
	UFUNCTION(BlueprintCallable)
	void AddItemToInventory(FString itemName, int32 itemAmount);

public:
	UPROPERTY(EditAnywhere)
	TArray<FString> itemNameList;
	UPROPERTY(EditAnywhere)
	TArray<int32> itemAmountList;

		
};
