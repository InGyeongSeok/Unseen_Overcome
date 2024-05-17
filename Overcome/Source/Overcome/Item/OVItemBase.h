// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
//#include "Character/OVCharacterPlayer.h"
#include "Item/OVItemData.h"
#include "OVItemBase.generated.h"

/**
 * 
 */
class AOVCharacterPlayer;
UCLASS()
class OVERCOME_API UOVItemBase : public UObject
{
	GENERATED_BODY()

public:

	// UPROPERTY()
	// UInventoryComponent* OwningInventory;

	UPROPERTY(VisibleAnywhere,Category = "Item Data", meta= (UIMin=1, UIMax=100))
	int32 Quantity; //������ ����
	
	UPROPERTY(EditAnyWhere,Category="Item Data")
	FName ID;

	UPROPERTY(EditAnyWhere,Category="Item Data")
	EItemType ItemType;

	UPROPERTY(EditAnyWhere,Category="Item Data")
	FItemStatistics ItemStatistics;

	UPROPERTY(EditAnyWhere,Category="Item Data")
	FItemTextData TextData;

	UPROPERTY(EditAnywhere, Category = "Item Data")
	FItemNumericData ItemNumericData;

	UPROPERTY(EditAnyWhere,Category="Item Data")
	FItemAssetData AssetData;

	UOVItemBase();

	UOVItemBase* CreateItemCopy() const;

	//FORCEINLINE float GetItemStackWeight() const{return Quantity* ItemNumericData.Weight};  ���� �ڵ�
	UFUNCTION(Category = "Item")
	FORCEINLINE bool IsFullItemStack() const { return Quantity == ItemNumericData.MaxStackSize;}; // ������ �ִ� ����ũ��� ������?

	UFUNCTION(Category = "Item")
	void SetQuantity(const int32 NewQuantity);
	
	UFUNCTION(Category = "Item") //ĳ���͸� �����´�. 
	virtual void Use(AOVCharacterPlayer* Character);

protected:
	bool operator==(const FName& OtherID) const
	{
		return ID == OtherID;
	}
	
};
