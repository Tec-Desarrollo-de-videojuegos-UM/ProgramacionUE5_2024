// Fill out your copyright notice in the Description page of Project Settings.


#include "RecipeWidget.h"
#include "Components/UniformGridPanel.h"
#include "Components/TextBlock.h"

URecipeWidget::URecipeWidget(const FObjectInitializer& ObjectInicilizer) : 
	Super(ObjectInicilizer)
{
}


void URecipeWidget::SetRecipe(TMap<FString, int32>& Recipe)
{
	RecipeMap = Recipe;

	if (!RecipeGrid)
	{
		UE_LOG(LogTemp, Warning, TEXT("RecipeGrid is not bound in the UI."));
		return;
	}

	RecipeGrid->ClearChildren();

	int32 RowIndex = 0;
	for (const TPair<FString, int32>& IngredientPair : RecipeMap)
	{
		UTextBlock* IngredientText = NewObject<UTextBlock>(this);
		if (IngredientText)
		{
			IngredientText->SetText(FText::FromString(IngredientPair.Key));
			RecipeGrid->AddChildToUniformGrid(IngredientText, RowIndex, 0);
		}

		UTextBlock* QuantityText = NewObject<UTextBlock>(this);
		if (QuantityText)
		{
			QuantityText->SetText(FText::AsNumber(IngredientPair.Value));
			RecipeGrid->AddChildToUniformGrid(QuantityText, RowIndex, 1);
		}

		RowIndex++;
	}
}

void URecipeWidget::AddIngredient(FString ingredientName, int32 Quantity)
{
	RecipeMap.Add(ingredientName, Quantity);

	SetRecipe(RecipeMap);
}
