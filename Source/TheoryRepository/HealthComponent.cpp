#include "HealthComponent.h"
#include "GameFramework/Actor.h"

// Constructor por defecto
UHealthComponent::UHealthComponent()
{
	PrimaryComponentTick.bCanEverTick = false;

	// Inicializar valores de vida
	MaxHitpoint = 100.0f;
	Hitpoint = MaxHitpoint;
}

void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	// Asegurarse de que la vida esté configurada correctamente al comenzar el juego
	Hitpoint = MaxHitpoint;
}

void UHealthComponent::TakeDamage(float DamageAmount)
{
	// Reducir la vida
	Hitpoint -= DamageAmount;

	// Verificar si la vida es menor o igual a cero
	if (Hitpoint <= 0.0f && CanBeDestroyed())
	{
		// Destruir el actor
		GetOwner()->Destroy();
	}
}

bool UHealthComponent::CanBeDestroyed() const
{
	return Hitpoint <= 0.0f;
}