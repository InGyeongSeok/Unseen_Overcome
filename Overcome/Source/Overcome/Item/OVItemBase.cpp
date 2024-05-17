// Fill out your copyright notice in the Description page of Project Settings.


#include "Item/OVItemBase.h"

UOVItemBase::UOVItemBase()
{
}

UOVItemBase* UOVItemBase::CreateItemCopy() const  //������ �����Ѵ�. �� �纻�� ����! 
{
	UOVItemBase* ItemCopy = NewObject<UOVItemBase>(StaticClass()); //���� Ŭ������ �����.
	ItemCopy->ID=this->ID;
	ItemCopy->Quantity = this->Quantity;
	ItemCopy->ItemType = this->ItemType;
	ItemCopy->TextData = this->TextData;
	ItemCopy->ItemNumericData = this->ItemNumericData;
	ItemCopy->ItemStatistics = this->ItemStatistics;
	ItemCopy->AssetData = this -> AssetData;

	return ItemCopy;
	
}

void UOVItemBase::SetQuantity(const int32 NewQuantity)
{
	if(NewQuantity!=Quantity)
	{
		Quantity = FMath::Clamp(NewQuantity,0,ItemNumericData.bIsStackable? ItemNumericData.MaxStackSize:1);
		//bIsStackable�� true�ΰ�� �ƴѰ�� 
	}
}

void UOVItemBase::Use(AOVCharacterPlayer* Character)
{
}
