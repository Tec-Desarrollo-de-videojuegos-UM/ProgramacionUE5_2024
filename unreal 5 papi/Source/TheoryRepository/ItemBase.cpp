// Fill out your copyright notice in the Description page of Project Settings.

#include "ItemBase.h"
#include <Components/BoxComponent.h>

AItemBase::AItemBase()
{
    // Crear el componente de caja de colisión
    AItemBase::UBoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));

    // Establecer el componente de caja de colisión como el componente raíz
    RootComponent = AItemBase::UBoxCollision;

    // Configurar el tamaño de la caja de colisión
    UBoxCollision->InitBoxExtent(FVector(50.0f, 50.0f, 50.0f)); // Tamaño de la caja de colisión (ancho, largo, alto)
}


