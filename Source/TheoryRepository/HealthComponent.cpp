// HealthComponent.cpp
#include "HealthComponent.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
    PrimaryComponentTick.bCanEverTick = false;
    Health = 100.0f; // Default health value
}

// Called when the game starts
void UHealthComponent::BeginPlay()
{
    Super::BeginPlay();
}

void UHealthComponent::TakeDamage(float DamageAmount)
{
    Health -= DamageAmount;
    if (GEngine) {

        FString DebugMessage = FString: : Printf(TEXT("Daño Causado: %f, Vida Restante: %f"), DamageAmount, Health);

    }
    CheckIfDestroyed();
}


bool UHealthtComponent : : Destruido()
{
    health = health - 10;//resta hp cuando interactua con el objeto
    if (health > 0)
    {
        HEngine->AddOnScreenDebugMassage(-1, 5, FColor: : Blue, TEXT("Se quito (-10hp)"));

        return false;

    }
    else
    {
        HEngine->AddOnScreenDebugMassage(-1, 5, FColor: : Blue, TEXT("Se Destruyó"));
        return true



    }
}
