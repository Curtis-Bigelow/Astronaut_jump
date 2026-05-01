// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Astronaut_JumpCharacter.h"
#include "Jetpack.generated.h"


UCLASS()
class ASTRONAUT_JUMP_API AJetpack : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AJetpack();
	


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UFUNCTION()
	void OnJetpackBeginOverlap(AActor* OverlappedActor, AActor* OtherActor); // Function for when overlapping with player
	
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(VisibleAnywhere) // Property for the player
	class AAstronaut_JumpCharacter* Holder = nullptr;
	
	
};
