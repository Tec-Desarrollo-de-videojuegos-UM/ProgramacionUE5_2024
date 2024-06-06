#include "HealthChecker.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/GameEngine.h"

void UHealthChecker::CheckCharacterHealth()
{
	// Obtener una referencia al personaje principal
	APawn* MainCharacter = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	// Verificar la salud del personaje
	float CharacterHealth = MainCharacter->GetHealth();
	FString Message = (CharacterHealth <= 0.0f) ? "El personaje ha muerto" : "El personaje sigue vivo";
	FColor MessageColor = (CharacterHealth <= 0.0f) ? FColor::Red : FColor::Green;

	// Mostrar el mensaje en pantalla
	GEngine->AddOnScreenDebugMessage(-1, 5.f, MessageColor, FText::FromString(Message));
}