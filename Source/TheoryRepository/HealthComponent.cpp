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


bool UHealthtComponent : : IsDestroyable()
 
if (health > 0)
{
    HEngine->AddOnScreenDebugMassage(-1, 5, FColor: : Blue, TEXT("Se quito (-20hp)"));
    health = health - 20hp
        return false;

}
else
{
    HEngine->AddOnScreenDebugMassage(-1, 5, FColor: : Blue, TEXT("Se Destruyó la PARED"));
    return true



}
