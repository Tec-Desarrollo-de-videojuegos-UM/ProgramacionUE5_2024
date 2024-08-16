// Fill out your copyright notice in the Description page of Project Settings.


#include "TimerManagerActor.h"
#include <TheoryRepository/Widgets/TimerWidget.h>

// Sets default values
ATimerManagerActor::ATimerManagerActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATimerManagerActor::BeginPlay()
{
	Super::BeginPlay();

	if (TimerWidgetClass)
	{
		TimerWidgetInstance = CreateWidget<UTimerWidget>(GetWorld(), TimerWidgetClass);
		if (TimerWidgetInstance)
		{
			TimerWidgetInstance->AddToViewport();
		}
	}

	StartTimer();
}

// Called every frame
void ATimerManagerActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bIsTimerRunning && TimerWidgetInstance)
	{
		TimerWidgetInstance->UpdateTimerText(GetTimeElapsed());
	}
}

float ATimerManagerActor::GetTimeElapsed()
{
	if (bIsTimerRunning)
	{
		return GetWorld()->GetTimeSeconds() - initTimer;
	}
	else
	{
		return elapsedTimer;
	}
}

void ATimerManagerActor::StartTimer()
{
	initTimer = GetWorld()->GetTimeSeconds();
	bIsTimerRunning = true;
}

void ATimerManagerActor::PauseTimer()
{
	elapsedTimer = GetWorld()->GetTimeSeconds() - initTimer;
	bIsTimerRunning = false;
}

void ATimerManagerActor::DecrementTimer()
{
	
}

