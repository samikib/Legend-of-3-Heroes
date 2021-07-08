// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "RPGCharacter.generated.h"

UCLASS()
class MYPROJECT_API ARPGCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ARPGCharacter();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Stats")
		FText Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Stats")
		int32 MaxHP;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Stats")
		int32 HP;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Stats")
		int32 MaxMP;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Stats")
		int32 MP;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Stats")
		int32 Attack;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Stats")
		int32 Defense;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Stats")
		int32 Resistance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Stats")
		int32 Magic;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Stats")
		int32 Speed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Stats")
		bool Enemy;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Stats")
		bool Deceased;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, Category = "Character Data")
		void CalculateDamage(int32 damage);
	UFUNCTION(BlueprintCallable, Category = "Character Data")
		void CalculateMagicDamage(int32 damage);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
