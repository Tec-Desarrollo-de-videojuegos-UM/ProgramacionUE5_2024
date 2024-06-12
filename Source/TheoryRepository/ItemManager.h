// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ItemManager.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class THEORYREPOSITORY_API UItemManager : public UActorComponent
{
	GENERATED_BODY()

public:	
	UItemManager();

	UFUNCTION(BlueprintCallable)
	void AddItemToInventory(FString ItemName, int32 ItemAmount);

public:
	//variables

	UPROPERTY(EditAnywhere)
	TArray <FString> itemNameList;
	UPROPERTY(EditAnywhere)
	TArray <int32> itemAmountList;


};
