// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "action.h"
#include "ActionDecorator.h"
#include "GameFramework/Pawn.h"
#include "Base_BattleManager.generated.h"

UCLASS()
class MYPROJECT_API ABase_BattleManager : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABase_BattleManager();
	UFUNCTION(Category = "Damage Calculation", BlueprintCallable)
	void CalculateDamage(int32 choice, int32 power, int32 &damage_out, int32 &mpCost_out);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
