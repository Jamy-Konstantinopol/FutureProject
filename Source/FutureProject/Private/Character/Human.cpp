// All rights reserved.

#include "Character/Human.h"

AHuman::AHuman()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AHuman::BeginPlay()
{
	Super::BeginPlay();
}

void AHuman::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AHuman::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}
