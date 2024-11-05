// All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Character/Human.h"
#include "PlayableHuman.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;

UCLASS()
class FUTUREPROJECT_API APlayableHuman : public AHuman
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	UCameraComponent* CameraComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Control")
	UInputMappingContext* InputMappingContext;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Control")
	UInputAction* LookAction;

public:
	APlayableHuman();

public:
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
