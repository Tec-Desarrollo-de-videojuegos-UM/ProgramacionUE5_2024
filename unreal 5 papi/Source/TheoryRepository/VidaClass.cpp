// Fill out your copyright notice in the Description page of Project Settings.


#include "VidaClass.h"
#include <iostream>

// Sets default values for this component's properties
UVidaClass::UVidaClass()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UVidaClass::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UVidaClass::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}
void tick;
int main(){
float vida;
vida = 100;
if (vida >= 1;)
std::cout << "El personaje sigue vivo" << std::enld;
if (vida <= 0;)
std::cout << "El personaje esta muerto" << std::enld;
}