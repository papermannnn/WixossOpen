// Fill out your copyright notice in the Description page of Project Settings.


#include "MSDataModel/MSCardEntity.h"

FString UMSCardEntity::GetCardType(int InType)
{
	switch (InType)
	{
	case 0:
		return TEXT("Normal");
	case 1:
		return TEXT("Spell");
	case 2:
		return TEXT("Trap");
	case 3:
		return TEXT("Monster");
	case 4:
		return TEXT("Minion");
	case 5:
		return TEXT("Weapon");
	case 6:
		return TEXT("Hero");
	default:
		return TEXT("Unknown");
	}
}
