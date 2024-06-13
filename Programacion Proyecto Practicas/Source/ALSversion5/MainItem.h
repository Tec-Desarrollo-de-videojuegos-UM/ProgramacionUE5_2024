

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <Components/BoxComponent.h>
#include "MainItem.generated.h"


UCLASS()
class ALSVERSION5_API AMainItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMainItem();

private:
	UPROPERTY(EditAnywhere)
	UBoxComponent* BoxCollider;

	public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString itemName;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 itemAmount;
};
