#include "CheckLife.h"
#include "Engine/Engine.h"  // Para utilizar GEngine y mostrar mensajes en pantalla

//Establezco los valores Iniciales
ACheckLife::ACheckLife()
{
    //Se inicializa para que se le llame al actor en cada fotograma.
    PrimaryActorTick.bCanEverTick = true;

    Salud = 100;
    Energia = 50;
}

//Se le llama a ACheckLife cuando se inicia el juego
void ACheckLife::BeginPlay()
{
    Super::BeginPlay();
}

//Para llamar en cada fotograma
void ACheckLife::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void ACheckLife::VerificarSalud()
{
    if (Salud > 0)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("El personaje sigue vivo"));
    }
    else
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("El personaje ha muerto"));
    }
}

void ACheckLife::VerificarEnergia(int32 CostoAccion)
{
    if (Energia >= CostoAccion)
    {
        Energia -= CostoAccion;
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Se puede realizar la acción. Energía restante: %d"), Energia));
    }
    else
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("No hay suficiente energía. Energía disponible: %d"), Energia));
    }
}
