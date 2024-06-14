// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "ItemBase.generated.h"

UCLASS()
class THEORYREPOSITORY_API AItemBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItemBase();
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UFUNCTION(BlueprintCallable) FString changeName(FString newName);
	UFUNCTION(BlueprintCallable) int32 changeAmmount(int32 newAmmount);

public:
	UStaticMesh* StaticMeshObject;
	UPROPERTY(EditAnywhere) UBoxComponent* CollisionBox;
	FString name;
	UPROPERTY(BlueprintReadOnly) int32 ammount;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
