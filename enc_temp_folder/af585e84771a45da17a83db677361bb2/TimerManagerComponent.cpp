// Fill out your copyright notice in the Description page of Project Settings.

#include "TimerManagerComponent.h"


// Called when the game starts
void UTimerManagerComponent::BeginPlay()
{
	Super::BeginPlay();

	//generar el Widget en BP e iniciar el timer
}


// Called every frame
void UTimerManagerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	
}

float UTimerManagerComponent::GetTimeElpased()
{
	if (bIsTimerRunning) 
	{
		if (GetOwner())
		{
			return GetOwner()->GetWorld()->GetTimeSeconds();
		}
	}
	else 
	{
		return elapsedTime;
	}
	return elapsedTime;
}

void UTimerManagerComponent::StartTimer()
{
	if (GetOwner())
	{
		initTimer = GetOwner()->GetWorld()->GetTimeSeconds();
		bIsTimerRunning = true;
	}
}

void UTimerManagerComponent::PauseTimer()
{
	if (GetOwner())
	{
		elapsedTime = GetOwner()->GetWorld()->GetTimeSeconds() - initTimer;
		bIsTimerRunning = false;
	}
}

