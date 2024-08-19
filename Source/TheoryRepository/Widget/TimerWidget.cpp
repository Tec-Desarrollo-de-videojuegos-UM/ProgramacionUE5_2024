// Fill out your copyright notice in the Description page of Project Settings.


#include "TimerWidget.h"
#include <Components/TextBlock.h>

void UTimerWidget::UpdateTimerText(float ElapsedTime)
{
		FString TimerString = FString::Printf(TEXT("TIME: %.2f", ElapsedTime));
		TimerText->SetText(FText::FromString(TimerString));

}
