// Fill out your copyright notice in the Description page of Project Settings.


#include "Base_BattleManager.h"


// Sets default values
ABase_BattleManager::ABase_BattleManager()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABase_BattleManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABase_BattleManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABase_BattleManager::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ABase_BattleManager::CalculateDamage(int32 choice, int32 power, int32 &damage_out, int32 &mpCost_out)
{

	Action* action = new Action();


	if (choice == 0)
	{
		Attack attack(action);
		damage_out = attack.Damage(power);
		mpCost_out = attack.getMPCost();
	}
	else if (choice == 1)
	{
		Stream stream(action);
		damage_out = stream.Damage(power);
		mpCost_out = stream.getMPCost();
	}
	else if (choice == 2)
	{
		Fire fire(action);
		damage_out = fire.Damage(power);
		mpCost_out = fire.getMPCost();
	}
	else if (choice == 3)
	{
		Lightning lightning(action);
		damage_out = lightning.Damage(power);
		mpCost_out = lightning.getMPCost();
	}

}