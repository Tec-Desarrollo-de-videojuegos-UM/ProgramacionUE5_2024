// Fill out your copyright notice in the Description page of Project Settings.


#include "TimerWidget.h"
#include <Components/TextBlock.h>

void UTimerWidget::UpdateTimerText(float ElapsedTime)
{
	// Crear un FTimespan a partir de los segundos transcurridos
	FTimespan Timespan = FTimespan::FromSeconds(ElapsedTime);

	// Obtener las horas, minutos, segundos y milisegundos del FTimespan
	int32 Hours = Timespan.GetHours();
	int32 Minutes = Timespan.GetMinutes();
	int32 Seconds = Timespan.GetSeconds();
	int32 Milliseconds = Timespan.GetFractionMilli();

	// Formatear el tiempo como "HH:MM:SS:MS"
	FString FormattedTime = FString::Printf(TEXT("%02d:%02d:%02d:%03d"), Hours, Minutes, Seconds, Milliseconds);

	// Actualizar el texto del widget
	FString TimerString = FString::Printf(TEXT("Time: %s"), *FormattedTime);
	TimerText->SetText(FText::FromString(TimerString));
}
