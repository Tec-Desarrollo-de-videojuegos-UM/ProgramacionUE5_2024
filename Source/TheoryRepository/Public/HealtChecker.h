#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HealthChecker.generated.h"

UCLASS()
class TUPROYECTO_API UHealthChecker : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Personaje")
	static void CheckCharacterHealth();
};