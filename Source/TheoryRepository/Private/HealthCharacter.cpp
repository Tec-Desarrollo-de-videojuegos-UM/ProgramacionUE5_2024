#include "HealthCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/GameEngine.h"

// Constructor
AHealthCharacter::AHealthCharacter()
{
	// Establecer la salud inicial del personaje
	Health = 100.0f;
}

// Override de la función BeginPlay
void AHealthCharacter::BeginPlay()
{
	Super::BeginPlay();
}

// Función para verificar la salud del personaje
void AHealthCharacter::CheckHealth()
{
	// Obtener la salud actual del personaje
	float CharacterHealth = Health;

	// Determinar el mensaje y color según la salud
	FString Message = (CharacterHealth <= 0.0f) ? "El personaje ha muerto" : "El personaje sigue vivo";
	FColor MessageColor = (CharacterHealth <= 0.0f) ? FColor::Red : FColor::Green;

	// Mostrar el mensaje en pantalla
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, MessageColor, FText::FromString(Message));
	}
}
