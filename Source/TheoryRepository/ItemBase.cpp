#include "ItemBase.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AItemBase::AItemBase()
{
    // Set this actor to call Tick() every frame. You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    // Create and initialize the BoxComponent
    BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    RootComponent = BoxComponent;

    // Set the size of the BoxComponent
    BoxComponent->InitBoxExtent(FVector(50.f, 50.f, 50.f));
    BoxComponent->SetCollisionProfileName(TEXT("BlockAll"));

    // Create and initialize the StaticMeshComponent
    MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    MeshComponent->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AItemBase::BeginPlay()
{
    Super::BeginPlay();
}

// Called every frame
void AItemBase::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}
