// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TimerManagerComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class THEORYREPOSITORY_API UTimerManagerComponent : public UActorComponent
{
	GENERATED_BODY()

protected:

	void TimerMagerComponent();

	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UUserWidget> TimerWidgetClass;
	UPROPERTY(BlueprintReadWrite)
	class UTimerWidget* timerWidgetInstance;

	UFUNCTION(BlueprintCallable, BlueprintPure)
	float GetTimeElpased();
	UFUNCTION(BlueprintCallable)
	void StartTimer();
	UFUNCTION(BlueprintCallable)
	void PauseTimer();

	UPROPERTY(BlueprintReadOnly)
	bool bIsTimerRunning;
	

private:
	float initTimer;
	float elapsedTime;
};
