// Fill out your copyright notice in the Description page of Project Settings.


#include "RPGCharacter.h"

// Sets default values
ARPGCharacter::ARPGCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Name.FromString("Name");
	MaxHP = 150;
	HP = 150;
	MaxMP = 30;
	MP = 30;
	Attack = 10;
	Defense = 5;
	Resistance = 5;
	Magic = 10;
	Speed = 5;
	Enemy = false;
	Deceased = false;


}

// Called when the game starts or when spawned
void ARPGCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARPGCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ARPGCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ARPGCharacter::CalculateDamage(int32 damage)
{
	this->HP = this->HP - damage + this->Defense;
	if (this->HP <= 0)
	{
		this->Deceased = true;
	}
}

void ARPGCharacter::CalculateMagicDamage(int32 damage)
{
	this->HP = this->HP - damage + this->Resistance;
	if (this->HP <= 0)
	{
		this->Deceased = true;
	}
}
