// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Blueprint/UserWidget.h"
#include "TimerManagerActor.generated.h"

UCLASS()
class THEORYREPOSITORY_API ATimerManagerActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATimerManagerActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<UUserWidget> TimerWidgetClass;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Timer")
	float GetTimeElapsed();
	UFUNCTION(BlueprintCallable, Category = "Timer")
	void StartTimer();
	UFUNCTION(BlueprintCallable, Category = "Timer")
	void PauseTimer();
private:
	float elapsedTimer;
	float initTimer;
	bool bIsTimerRunning;

	class UTimerWidget* TimerWidgetInstance;
	 
	void DecrementTimer();
};
