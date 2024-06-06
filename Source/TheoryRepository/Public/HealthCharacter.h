#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "HealthCharacter.generated.h"

UCLASS()
class TUPROYECTO_API AHealthCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Constructor
	AHealthCharacter();

	// Override de la función BeginPlay
	virtual void BeginPlay() override;

	// Función para verificar la salud del personaje
	UFUNCTION(BlueprintCallable, Category = "Personaje")
	void CheckHealth();

protected:
	// Salud del personaje
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Personaje")
	float Health;
};
