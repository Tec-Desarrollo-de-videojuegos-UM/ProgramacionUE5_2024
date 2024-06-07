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

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	void AddItemToInventory(FString NewItemName, int32 NewItemAmount);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> itemName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> itemAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, int32> inventory;
};
