// Fill out your copyright notice in the Description page of Project Settings.


#include "Jetpack.h"

#include "Astronaut_JumpCharacter.h"

// Sets default values
AJetpack::AJetpack()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AJetpack::BeginPlay()
{
	Super::BeginPlay();
	OnActorBeginOverlap.AddDynamic(this, &AJetpack::OnJetpackBeginOverlap);
}

// Called every frame
void AJetpack::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AJetpack::OnJetpackBeginOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	auto character = Cast<AAstronaut_JumpCharacter>(OtherActor);
	if (character != nullptr)
	{
		if (Holder == nullptr)
		{
			auto playerAvatar = Cast<AAstronaut_JumpCharacter>(character);
			if (playerAvatar != nullptr)
			{
				Holder = character;
				playerAvatar->AttachJetpack(this);
			}
		}
	}
}

