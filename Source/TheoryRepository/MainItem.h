// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <Components/BoxComponent.h>
#include "MainItem.generated.h"


UCLASS()
class THEORYREPOSITORY_API AMainItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMainItem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString itemname;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 itemamount;

private:
	UPROPERTY(EditAnywhere)
	UBoxComponent* Boxcollider;


};
