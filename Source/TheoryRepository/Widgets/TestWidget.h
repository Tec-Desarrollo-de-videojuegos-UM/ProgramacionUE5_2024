// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TestWidget.generated.h"

/**
 * 
 */
UCLASS()
class THEORYREPOSITORY_API UTestWidget : public UUserWidget
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(meta = (BindWidget))
	class UButton* Btn_AddHealth;
	UPROPERTY(meta = (BindWidget))
	class USpinBox* SB_HealthControl;
	UPROPERTY(meta = (BindWidget))
	class UProgressBar* HealthBar;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Health;
	
	virtual void NativeConstruct() override;

	UFUNCTION()
	void OnButtonClicked();
	UFUNCTION()
	void OnSpinBoxValueChanged(float Value);
};
