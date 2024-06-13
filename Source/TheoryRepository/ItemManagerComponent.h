// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ItemManagerComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class THEORYREPOSITORY_API UItemManagerComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UItemManagerComponent();

	UFUNCTION(BlueprintCallable)
	void AddItemToInventory(FString ItemName, int32 ItemAmount);

public: 
	UPROPERTY(EditAnywhere)
	TArray<FString> ItemNameList;
	
	UPROPERTY(EditAnywhere)
	TArray<int32> ItemAmountList;
};
