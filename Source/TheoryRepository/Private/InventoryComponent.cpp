// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryComponent.h"

// Sets default values for this component's properties
UInventoryComponent::UInventoryComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UInventoryComponent::AddItemToInventory(FString NewItemName, int32 NewItemAmount) {

	if (itemName.Contains(NewItemName))
	{
		if (itemAmount.IsValidIndex(itemName.Find(NewItemName))) 
		{
			itemAmount[itemName.Find(NewItemName)] = NewItemAmount + itemName.Find(NewItemName);
		}
	}
	else
	{
		itemName.Add(NewItemName);
		itemAmount.Add(NewItemAmount);
	}
};

// Called every frame
void UInventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

