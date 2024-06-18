// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemManagerComponent.h"

// Sets default values for this component's properties
UItemManagerComponent::UItemManagerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	

	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true; false;

	// ...
}
void UItemManagerComponent::AddItemToInventory(FString itemName, int32 itemAmmount)
{
	if (itemNameList.Contains(itemName))
	{
    if (itemAmmountList.IsValidIndex(itemNameList.Find(itemName)))
    {
		itemAmmountList[itemNameList.Find(itemName)] = itemAmmountList[itemNameList.Find(itemName)] + itemAmmount;
    }

	}
	else
	{
		itemNameList.Add(itemName);
		itemAmmountList.Add(itemAmmount);

	}

}
// Called when the game starts
void UItemManagerComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}
// Called every frame
void UItemManagerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}