// Fill out your copyright notice in the Description page of Project Settings.

#include "drugiIgracT.h"




void UdrugiIgracT::PostInitProperties()
{
	Super::PostInitProperties();

	P2Keys.Add(EKeys::Up);
	P2Keys.Add(EKeys::Left);
	P2Keys.Add(EKeys::Right);
	P2Keys.Add(EKeys::Down);
	P2Keys.Add(EKeys::NumPadOne);
	P2Keys.Add(EKeys::NumPadTwo);
	
}

bool UdrugiIgracT::InputKey(FViewport* Viewport, int32 ControllerId, FKey Key, EInputEvent EventType, float AmountDepressed, bool bGamepad)
{
	if (P2Keys.Find(Key))
	{
		ControllerId = 1;
	}

	return Super::InputKey(Viewport, ControllerId, Key, EventType, AmountDepressed, bGamepad);
}