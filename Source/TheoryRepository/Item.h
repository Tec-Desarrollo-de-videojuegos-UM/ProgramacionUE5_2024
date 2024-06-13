

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <Components/BoxComponent.h>
#include "Item.generated.h"

UCLASS()
class THEORYREPOSITORY_API AItem : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AItem();

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UBoxComponent* BoxCollider;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString ItemName;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 ItemAmount;
};
