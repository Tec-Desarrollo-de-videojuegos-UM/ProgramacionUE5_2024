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
    //Sets default values for this actors properties
    AItemBase();

private:
    UBoxComponent* BoxCollider;

    FString itembase;
    int32 itemamount;

};
