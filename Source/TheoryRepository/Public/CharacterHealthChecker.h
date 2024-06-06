#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/GameEngine.h"
#include "CharacterHealthChecker.generated.h"

UCLASS()
class TUPROYECTO_API UCharacterHealthChecker : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Personaje")
	static void CheckHealth(float Health);
};
