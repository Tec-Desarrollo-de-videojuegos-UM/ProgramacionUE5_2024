// Fill out your copyright notice in the Description page of Project Settings.

#include "ItemBase.h"
#include <Components/BoxComponent.h>

AItemBase::AItemBase()
{
    // Crear el componente de caja de colisi�n
    AItemBase::UBoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));

    // Establecer el componente de caja de colisi�n como el componente ra�z
    RootComponent = AItemBase::UBoxCollision;

    // Configurar el tama�o de la caja de colisi�n
    UBoxCollision->InitBoxExtent(FVector(50.0f, 50.0f, 50.0f)); // Tama�o de la caja de colisi�n (ancho, largo, alto)
}


