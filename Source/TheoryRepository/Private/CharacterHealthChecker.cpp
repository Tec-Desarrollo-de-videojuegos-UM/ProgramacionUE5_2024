#include "CharacterHealthChecker.h"

void UCharacterHealthChecker::CheckHealthChecker(float Health)
{
	FString Message;

	if (Health <= 0.0f)
	{
		Message = "El personaje ha muerto";
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FText::FromString(Message));
	}
	else
	{
		Message = "El personaje sigue vivo";
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FText::FromString(Message));
	}
}
