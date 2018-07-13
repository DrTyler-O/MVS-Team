// Fill out your copyright notice in the Description page of Project Settings.

#include "HUD_Dynamics.h"


// Sets default values for this component's properties
UHUD_Dynamics::UHUD_Dynamics()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UHUD_Dynamics::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UHUD_Dynamics::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

