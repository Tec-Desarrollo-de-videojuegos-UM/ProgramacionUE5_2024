// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TimerWidget.generated.h"

/**
 * 
 */
UCLASS()
class THEORYREPOSITORY_API UTimerWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "Timer")
	void UpdateTimerText(float ElapsedTime);

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	class UTextBlock* TimerText;
};
