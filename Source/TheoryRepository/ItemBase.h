// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemBase.generated.h"
<<<<<<< Updated upstream
#include "Components/StaticMeshComponent.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class THEORYREPOSITORY_API AItemBase : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	AItemBase();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* BoxComponent;
	
=======

UCLASS()
class THEORYREPOSITORY_API AItemBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItemBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

	UPROPERTY(VisibleAnywhere, Category="Components")
	UStaticMeshComponent* BoxMesh;

>>>>>>> Stashed changes
};
