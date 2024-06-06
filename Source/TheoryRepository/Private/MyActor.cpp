// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"
#include <iostream>


// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollitionBox"));
}

// Called when the game starts or when spawned

// check heatlh

void CheckHealth(int Health) {

	if (Health <= 0) {

		std::cout << " player is dead " << std::endl;
	}
	else {

		std::cout << " player is alive " << std::endl;
	}


}

void CheckEnergy(int& Energy, int energyrequierd) { // el ampersan es utilziado para encontrar el lugar de esa variable especificamente en la memoria

	if (Energy >= energyrequierd) {
		Energy -= energyrequierd;
		std::cout << " Action can be done " << std::endl;
	}
	else {
		std::cout << " Action can´t be done " << std::endl;
	}
}

int main() { // int main es igual a begin play

	int HealthCharacter = 50;
	CheckHealth;

	int playerenergy = 100;
	int energyforaction = 40;

	CheckEnergy(playerenergy, energyforaction);

	return 0;


}


// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


