// Fill out your copyright notice in the Description page of Project Settings.


#include "comprobarVida.h"



void UcomprobarVida::CheckVida()
{
	if (health > 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Orange, TEXT("El personaje esta vivo"));
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Orange, TEXT("El personaje esta muerto"));
	}
}

bool UcomprobarVida::UseStamina(float EstaminaUsar)
{
	if (stamina <= 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Orange, TEXT("El personaje no tiene estamina"));
		return false;
	}
	else
	{
		stamina = stamina - EstaminaUsar;
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Orange, TEXT("El personaje tiene estamina"));
		return true;
	}
}