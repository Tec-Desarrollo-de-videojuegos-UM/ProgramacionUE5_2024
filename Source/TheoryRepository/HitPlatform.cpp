// HitPlatform.cpp
#include "HitPlatform.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AHitPlatform::AHitPlatform()
{
    PrimaryActorTick.bCanEverTick = true;

    BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    RootComponent = BoxComponent;

    MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    MeshComponent->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AHitPlatform::BeginPlay()
{
    Super::BeginPlay();
}

// Called every frame
void AHitPlatform::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}


