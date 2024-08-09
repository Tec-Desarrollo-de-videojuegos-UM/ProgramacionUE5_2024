// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BowlingComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class THEORYREPOSITORY_API UBowlingComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UBowlingComponent();


public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> LocationPins;
	
public:
	UFUNCTION(BlueprintCallable)
	int32 ThrowBall(TArray<FString> NamePinLocation);

};
