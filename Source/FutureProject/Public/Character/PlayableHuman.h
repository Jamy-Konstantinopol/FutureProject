// All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Character/Human.h"
#include "PlayableHuman.generated.h"

class USpringArmComponent;
class UCameraComponent;

UCLASS()
class FUTUREPROJECT_API APlayableHuman : public AHuman
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	UCameraComponent* CameraComponent;

public:
	APlayableHuman();
};
