// Fill out your copyright notice in the Description page of Project Settings.


#include "Item/OVItemBase.h"

UOVItemBase::UOVItemBase()
{
}

UOVItemBase* UOVItemBase::CreateItemCopy() const  //원본을 복사한다. 그 사본을 리턴! 
{
	UOVItemBase* ItemCopy = NewObject<UOVItemBase>(StaticClass()); //정적 클래스를 만든다.
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
		//bIsStackable가 true인경우 아닌경우 
	}
}

void UOVItemBase::Use(AOVCharacterPlayer* Character)
{
}
