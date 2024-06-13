

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ContadorVida.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ALSVERSION5_API UContadorVida : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UContadorVida();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
