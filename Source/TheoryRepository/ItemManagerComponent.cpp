// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemManagerComponent.h"

// Sets default values for this component's properties
UItemManagerComponent::UItemManagerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UItemManagerComponent::AddItemToInventory(FString ItemName, int32 ItemAmount)
{
	if (ItemNameList.Contains(ItemName))
	{
		if (ItemAmountList.IsValidIndex(ItemNameList.Find(ItemName)))
		{
			ItemAmountList[ItemNameList.Find(ItemName)] = ItemAmountList[ItemNameList.Find(ItemName)] + ItemAmount;
		}
	}
	else
	{
		ItemNameList.Add(ItemName);
		ItemAmountList.Add(ItemAmount);
	}

}



