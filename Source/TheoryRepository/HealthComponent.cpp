


#include "HealthComponent.h"


UHealthComponent::UHealthComponent()
{

	PrimaryComponentTick.bCanEverTick = true;
	
}

void UHealthComponent::CheckDestroid()
{
	RestHealth(50);
	if (Health = 0)
	{
		GetOwner()->Destroy();
	}
}

void UHealthComponent::RestHealth(float HealthToRest)
{
	Health = Health - HealthToRest;
}


