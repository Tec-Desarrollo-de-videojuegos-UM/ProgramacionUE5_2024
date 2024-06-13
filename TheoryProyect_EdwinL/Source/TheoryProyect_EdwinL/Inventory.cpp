// Fill out your copyright notice in the Description page of Project Settings.


#include "Inventory.h"

// Sets default values for this component's properties
UInventory::UInventory()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UInventory::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UInventory::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UInventory::AddItemToinventory(FString itemname, int32 itemamount)
{

	if (ItemNameList.Contains(itemname))
	{
		if (ItemAmountList.IsValidIndex(ItemNameList.Find(itemname)))
		{
			ItemAmountList[ItemNameList.Find(itemname)] = ItemAmountList[ItemNameList.Find(itemname)] + itemamount;
		}
	}

	else
	{

		ItemNameList.Add(itemname);
		ItemAmountList.Add(itemamount);

	}

}

