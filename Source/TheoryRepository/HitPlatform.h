// HitPlatform.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h" // Asegúrate de incluir este encabezado
#include "Components/StaticMeshComponent.h" // Asegúrate de incluir este encabezado
#include "HitPlatform.generated.h"

UCLASS()
class THEORYREPOSITORY_API AHitPlatform : public AActor
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    AHitPlatform();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

private:
    UPROPERTY(VisibleAnywhere)
    UBoxComponent* BoxComponent;

    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* MeshComponent;
};
