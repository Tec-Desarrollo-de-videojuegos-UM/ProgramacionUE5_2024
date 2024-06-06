// Fill out your copyright notice in the Description page of Project Settings.


#include "life.h"

// Sets default values for this component's properties
Ulife::Ulife()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	void Ulife::calculatelife(int32 newLife){
		if(newLife <=0)
		{
			GEngine->AddOnScreenOnDebugMessage(-1, 1, FColor::Blue, TEXT(¨Su jugador ha muerto¨));

		}
		else {
			GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Blue,TEXT(¨Su jugador sigue vivo¨));
		}
			
// Called when the game starts
void Ulife::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void Ulife::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

