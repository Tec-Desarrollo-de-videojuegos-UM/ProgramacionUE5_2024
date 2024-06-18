// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <Components/BoxComponent.h>
#include "Item.generated.h"

UCLASS()
class THEORYREPOSITORY_API AItem : private AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(EditAnywhere)
	UBoxComponent* BoxCollider;
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FString itemName;
		UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 itemAmmount (3);
};