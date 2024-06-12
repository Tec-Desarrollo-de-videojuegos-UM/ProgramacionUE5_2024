// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Inventory.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class THEORYREPOSITORY_API UInventory : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventory();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void AddItemToInventory(FString NewItemName, int32 NewItemAmount);

public: 

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> itemName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> itemAmount;
     
};
