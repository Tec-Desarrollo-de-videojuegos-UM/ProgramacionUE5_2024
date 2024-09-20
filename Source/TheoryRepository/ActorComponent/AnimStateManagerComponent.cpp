// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimStateManagerComponent.h"

// Sets default values for this component's properties
UAnimStateManagerComponent::UAnimStateManagerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UAnimStateManagerComponent::BeginPlay()
{
	Super::BeginPlay();
}


// Called every frame
void UAnimStateManagerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UAnimStateManagerComponent::executeSwitch()
{
	switch (AnimState)
	{
	case EAnimatorState::primeraParte:
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Green, TEXT("Primera Parte"));
		AnimState = EAnimatorState::segundaParte;
		break;
	case EAnimatorState::segundaParte:
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Blue, TEXT("Segunda Parte"));
		AnimState = EAnimatorState::terceraParte;
		break;
	case EAnimatorState::terceraParte:
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("Tercera Parte"));
		AnimState = EAnimatorState::cuartaParte;
		break;
	case EAnimatorState::cuartaParte:
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Black, TEXT("Cuarta Parte"));
		AnimState = EAnimatorState::primeraParte;
		break;
	}
}

