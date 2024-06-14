#include "HealthComponent.h"
#include "Engine/Engine.h"

UHealthComponent::UHealthComponent()
{
    PrimaryComponentTick.bCanEverTick = false;
    health = 100; // Valor predeterminado de la salud
}

void UHealthComponent::BeginPlay()
{
    Super::BeginPlay();
}

bool UHealthComponent::Destruido()
{
    health = health - 10;
    if (health > 0)
    {
        if (GEngine)
        {
            FString DebugMessage = FString::Printf(TEXT("Hiciste dano a este pobre Objeto, Vida Restante: %d"), health);
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, DebugMessage);
        }
        return false;
    }
    else
    {
        if (GEngine)
        {
            FString DebugMessage = FString::Printf(TEXT("Objeto Destruido"));
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, DebugMessage);
        }
        return true;
    }
}

void UHealthComponent::CheckIfDestroyed()
{
    if (health <= 0)
    {
        if (AActor* Owner = GetOwner())
        {
            if (GEngine)
            {
                GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Actor destruido"));
            }
            Owner->Destroy();
        }
    }
};