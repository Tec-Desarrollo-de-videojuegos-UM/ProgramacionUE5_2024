#include "HealthComponent.h"
#include "Engine/Engine.h"

UHealthComponent::UHealthComponent()
{
    PrimaryComponentTick.bCanEverTick = false;
    health = 100; // Valor predeterminado de la salud
    DestroyDelay = 0.8f; //Valor Predeterminado del Delay para destruir el Objeto
}

void UHealthComponent::BeginPlay()
{
    Super::BeginPlay();
}

void UHealthComponent::Destruido()
{
    health = health - 10;
    if (health <= 0)
    {
       
        
       if (AActor* Owner = GetOwner())
       {
           if (GEngine)
           {
               GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Actor destruido"));
           }
           FTimerHandle DestroyTimerHandle;
           GetWorld()->GetTimerManager().SetTimer(DestroyTimerHandle, [Owner]() {
               Owner->Destroy();

               }, DestroyDelay, false);
       }

    }
    else
    {
        if (GEngine)
        {
            FString DebugMessage = FString::Printf(TEXT("Le Pegaste A Este Pobre Objeto, Vida Restante: %d."), health);
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, DebugMessage);

        }        
    }
}