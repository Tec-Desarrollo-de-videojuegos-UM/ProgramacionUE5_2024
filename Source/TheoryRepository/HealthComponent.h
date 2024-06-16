#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class THEORYREPOSITORY_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:    
	// Constructor por defecto
	UHealthComponent();

protected:
	// Llamado cuando comienza el juego
	virtual void BeginPlay() override;

public:    
	// Vida actual del actor
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	float Hitpoint;

	// Vida máxima del actor
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	float MaxHitpoint;

	// Método para reducir la vida
	UFUNCTION(BlueprintCallable, Category = "Health")
	void TakeDamage(float DamageAmount);

	// Método para chequear si el actor puede ser destruido
	UFUNCTION(BlueprintCallable, Category = "Health")
	bool CanBeDestroyed() const;
};