#include "HitPlatform.h"

// Constructor por defecto
AHitPlatform::AHitPlatform()
{
	// Establecer que este actor puede ser renderizado cada cuadro.
	PrimaryActorTick.bCanEverTick = true;
}

// Llamado cuando comienza el juego o cuando se genera
void AHitPlatform::BeginPlay()
{
	Super::BeginPlay();
    
	// Incluir aquí la lógica adicional para cuando comienza el juego
}

// Llamado cada cuadro
void AHitPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    
	// Incluir aquí la lógica de cada cuadro (por ejemplo, animaciones, actualizaciones de estado)
}