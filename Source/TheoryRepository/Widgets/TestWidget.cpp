// Fill out your copyright notice in the Description page of Project Settings.

#include "TestWidget.h"
#include "Math/UnrealMathUtility.h"
#include "Components/Button.h"
#include "Components/ProgressBar.h"
#include "Components/SpinBox.h"

void UTestWidget::NativeConstruct()
{
	Btn_AddHealth->OnClicked.AddDynamic(this, &UTestWidget::OnButtonClicked);
	SB_HealthControl->OnValueChanged.AddDynamic(this, &UTestWidget::OnSpinBoxValueChanged);
}

void UTestWidget::OnButtonClicked()
{
	Health = Health + 10;
	Health = FMath::Clamp(Health, 0, 100);
	HealthBar->SetPercent(Health / 100);
	SB_HealthControl->SetValue(Health);
}

void UTestWidget::OnSpinBoxValueChanged(float Value)
{
	if (HealthBar)
	{
		HealthBar->SetPercent(Value / 100);
		Health = Value;
	}
}
