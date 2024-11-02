// All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Human.generated.h"

UCLASS()
class FUTUREPROJECT_API AHuman : public ACharacter
{
	GENERATED_BODY()

public:
	AHuman();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
