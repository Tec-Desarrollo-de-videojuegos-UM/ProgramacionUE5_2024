// HealthComponent.h
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class THEORYREPOSITORY_API UHealthComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    
    UHealthComponent();

    UFUNCTION(BlueprintCallable,Category="Destruido")
    void Destruido();

protected:
  
    virtual void BeginPlay() override;

public:

private:

    UPROPERTY(EditAnywhere)
    int32 health;

    UPROPERTY(EditDefaultsOnly, Category ="Destruido")
    float DestroyDelay;

  };
