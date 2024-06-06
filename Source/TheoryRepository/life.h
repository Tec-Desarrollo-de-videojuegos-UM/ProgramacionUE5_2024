// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "life.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class THEORYREPOSITORY_API Ulife : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	Ulife();
	//UPROPERTY(EdiAnywhere, BlueprinReadWrite) int32 life;
	UFUNCTION(BlueprintCallable) void calculatelife(int32 newlife)

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
