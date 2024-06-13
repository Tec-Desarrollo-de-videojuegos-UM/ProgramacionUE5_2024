// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UInventoryComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class THEORYREPOSITORY_API UUInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UUInventoryComponent();

	UFUNCTION(BlueprintCallable)
	void AddItemtoInventory(FString ItemName, int32 ItemAmount);

public:
	UPROPERTY(EditAnywhere)
	TArray<FString> itemNameList;
	UPROPERTY(EditAnywhere)
	TArray<int32> itemAmountList;
};
