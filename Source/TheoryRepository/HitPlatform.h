#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HitPlatform.generated.h"

UCLASS()
class THEORYREPOSITORY_API AHitPlatform : public AActor
{
	GENERATED_BODY()
    
public:    
	// Constructor por defecto
	AHitPlatform();

protected:
	// Llamado cuando comienza el juego o cuando se genera
	virtual void BeginPlay() override;

public:    
	// Llamado cada cuadro
	virtual void Tick(float DeltaTime) override;

};