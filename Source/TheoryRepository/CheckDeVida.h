// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
<<<<<<< Updated upstream
#include "Components/ActorComponent.h"
#include "CheckDeVida.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class THEORYREPOSITORY_API UCheckDeVida : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCheckDeVida();

protected:
	// Called when the game starts
=======
#include "GameFramework/Actor.h"
#include "CheckDeVida.generated.h"

UCLASS()
class THEORYREPOSITORY_API ACheckDeVida : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACheckDeVida();

protected:
	// Called when the game starts or when spawned
>>>>>>> Stashed changes
	virtual void BeginPlay() override;

public:	
	// Called every frame
<<<<<<< Updated upstream
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	int32 Health;
	UFUNCTION(BlueprintCallable, Category = "Health")
	void CheckHealth();
=======
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")

	int32 Health;

	UFUNCTION(BlueprintCallable, Category="Health")

	void RevisarVida();

>>>>>>> Stashed changes
};
