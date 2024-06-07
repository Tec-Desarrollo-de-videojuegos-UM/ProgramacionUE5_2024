#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemBase.generated.h"

class UBoxComponent;

UCLASS()
class THEORYREPOSITORY_API AItemBase : public AActor
{
    GENERATED_BODY()

public:
    // Constructor
    AItemBase();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

    // Box collision component
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Collision")
    UBoxComponent* BoxComponent;

    // Static mesh component
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Mesh")
    UStaticMeshComponent* MeshComponent;
};
