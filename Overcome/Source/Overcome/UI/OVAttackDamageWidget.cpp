// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/OVAttackDamageWidget.h"
#include "Components/TextBlock.h"

void UOVAttackDamageWidget::SetDamage(float Damage)
{
	uint32 Score = static_cast<uint8>(Damage);
	FString DamageTxt = FString::Printf(TEXT("%d"), Score);
	TxtAttackDamage->SetText(FText::FromString(DamageTxt));
}