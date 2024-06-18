// HitPlatform.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h" 
#include "Components/StaticMeshComponent.h" 
#include "HitPlatform.generated.h"

UCLASS()
class THEORYREPOSITORY_API AHitPlatform : public AActor
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    AHitPlatform();

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBoxComponent* BoxComponent;

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

private:
   
    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* MeshComponent;
};
