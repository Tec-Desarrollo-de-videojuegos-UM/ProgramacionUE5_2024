


#include "EstadoAtributos.h"

// Sets default values for this component's properties
UEstadoAtributos::UEstadoAtributos()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UEstadoAtributos::CheckVida()
{
	if (vida > 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Blue, TEXT("El Personaje esta Vivo."));

	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("El personaje esta muerto."));
	}
}

bool UEstadoAtributos::UsoStamina(float StaminaAUsar)
{
	if (stamina <= 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("No hay Stamina suficiente."));
		return false;

	}
	else
	{
		
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Blue, TEXT("Se puede usar Stamina."));
		stamina = stamina - StaminaAUsar;
		return true;
	}
}


// Called when the game starts
void UEstadoAtributos::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UEstadoAtributos::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

