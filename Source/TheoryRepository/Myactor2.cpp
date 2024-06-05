// Fill out your copyright notice in the Description page of Project Settings.


#include "Myactor2.h"
#include <iostream>

// Sets default values
AMyactor2::AMyactor2()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
}

// Called when the game starts or when spawned
void AMyactor2::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyactor2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
//Function for player HP
void VerifyHealth(int health) {
	if (health <= 0) {
		std::cout << " Player is dead " << std::endl;
	}
	else { 
		std::cout << " Player is still alive " << std::endl;
	}
}
int main() {
	int HealthCharacter = 50;
	VerifyHealth(HealthCharacter);

	return 0;
}
//Function dedicated to verify player energy

void Verifyenergy(int& energy, int energyrequired) {

	if (energy >= energyrequired) {
		energy -= energyrequired;//reduces the energy
		std::count << " Action can be done " << std::endl;
	}
	else {
		std::count << " Action cant be done " << std::endl;
	
	}
		
}

int main() {
	int playerenergy = 100;//Base energy of Player
	int energyforaction = 40;//Energy required to do the action

	//Verifies energy quantities
	
	Verifyenergy(playerenergy, energyforaction);
	
	//Show Energy left
	std::count << " Energy remaining " << playerenergy << std::endl;

	return 0;
}