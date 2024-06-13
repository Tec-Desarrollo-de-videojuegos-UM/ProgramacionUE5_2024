// Fill out your copyright notice in the Description page of Project Settings.


#include "UInventoryComponent.h"

// Sets default values for this component's properties
UUInventoryComponent::UUInventoryComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UUInventoryComponent::AddItemtoInventory(FString ItemName, int32 ItemAmount)
{
	if (itemNameList.Contains(ItemName))
	{
		if (itemAmountList.IsValidIndex(itemNameList.Find(ItemName)))
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



