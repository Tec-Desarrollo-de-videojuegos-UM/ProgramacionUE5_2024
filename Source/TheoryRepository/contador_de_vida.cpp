// Fill out your copyright notice in the Description page of Project Settings.


#include "contador_de_vida.h"
#include "Engine.h"


Acontador_de_vida::Acontador_de_vida()
{
	Healt = 100.0f;
}

void Acontador_de_vida::CheckHealth() const
{
	if (Healt <= 0.0f)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("estas muerto"));
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("estas vivo"));
	}
}