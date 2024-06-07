#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CheckLife.generated.h"

UCLASS()
class THEORYREPOSITORY_API ACheckLife : public AActor
{
    GENERATED_BODY()

public:
    // Constructor
    ACheckLife();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    // Propiedades
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character")
    int32 Salud;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character")
    int32 Energia;

    // Métodos
    UFUNCTION(BlueprintCallable, Category = "Character")
    void VerificarSalud();

    UFUNCTION(BlueprintCallable, Category = "Character")
    void VerificarEnergia(int32 CostoAccion);
};


