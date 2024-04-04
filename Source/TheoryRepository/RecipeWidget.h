// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RecipeWidget.generated.h"

/**
 * 
 */
UCLASS()
class THEORYREPOSITORY_API URecipeWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	URecipeWidget(const FObjectInitializer& ObjectInicilizer);

	void SetRecipe(TMap<FString, int32>& Recipe);
	UFUNCTION(BlueprintCallable)
	void AddIngredient(FString ingredientName, int32 Quantity);

protected:
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	class UUniformGridPanel* RecipeGrid;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UButton* AddIngredientButton;

	TMap<FString, int32> RecipeMap;
	
};
