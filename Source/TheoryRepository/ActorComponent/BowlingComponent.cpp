// Fill out your copyright notice in the Description page of Project Settings.


#include "BowlingComponent.h"

// Sets default values for this component's properties
UBowlingComponent::UBowlingComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
	LocationPins.Add("UNO");
	LocationPins.Add("DOS");
	LocationPins.Add("TRES");
	LocationPins.Add("CUATRO");
	LocationPins.Add("CINCO");
	LocationPins.Add("SEIS");
	LocationPins.Add("SIETE");
	LocationPins.Add("OCHO");
}


 int32 UBowlingComponent::ThrowBall(TArray<FString> NamePinLocation)
{
	 for (FString PinLocation : NamePinLocation)
	 {
		 if (LocationPins.Contains(PinLocation))
		 {
			 LocationPins.Remove(PinLocation);
		 }
	 }
	return int32(LocationPins.Num());
}




