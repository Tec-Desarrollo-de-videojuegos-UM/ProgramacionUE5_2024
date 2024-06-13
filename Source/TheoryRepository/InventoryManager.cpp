// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryManager.h"

// Sets default values for this component's properties
UInventoryManager::UInventoryManager()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UInventoryManager::AddItemToInventory(FString ItemName, int32 ItemAmount)
{
	if (itemNameList.Contains(ItemName))
	{
		if (itemNameList.IsValidIndex(itemNameList.Find(ItemName)))
		{
			itemAmountList[itemNameList.Find(ItemName)] = itemAmountList[itemNameList.Find(ItemName)] + ItemAmount;
		}
	}
	else
	{
		itemNameList.Add(ItemName);
		itemAmountList.Add(ItemAmount);
	}
}


// Called when the game starts
void UInventoryManager::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UInventoryManager::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

