#include "HealthCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/GameEngine.h"

AHealthCharacter::AHealthCharacter()
{
	// Establecer la salud inicial del personaje
	Health = 100.0f;
}

void AHealthCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void AHealthCharacter::CheckHealth()
{
	// Obtener la salud actual del personaje
	float CharacterHealth = Health;

	// Determinar el mensaje y color según la salud
	FString Message = (CharacterHealth <= 0.0f) ? "El personaje ha muerto" : "El personaje sigue vivo";
	FColor MessageColor = (CharacterHealth <= 0.0f) ? FColor::Red : FColor::Green;

	// Mostrar el mensaje en pantalla
	GEngine->AddOnScreenDebugMessage(-1, 5.f, MessageColor, FText::FromString(Message));
}
