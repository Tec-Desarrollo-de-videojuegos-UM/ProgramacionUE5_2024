#pragma once
#include "GameFramework/Character.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "ItemBase.generated.h"

UCLASS()
class THEORYREPOSITORY_API AItemBase : public AActor
{
    GENERATED_BODY()
    //Line skip 1
    //Line skip 2   


public:
    AItemBase();

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Item")
    UBoxComponent* UBoxCollision;
};
