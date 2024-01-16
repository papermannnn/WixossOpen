// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/VerticalBox.h"
#include "UMG_AddCard.generated.h"

class UCardDetailInfo;
struct FMSCardFromCSV;
/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class WIXOSSLIBRARY_API UAddCardWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(blueprintCallable, Category = "Card")
	void LoadCardDataTable();
	UFUNCTION(blueprintCallable, Category = "Card")
	void AddItemToCardList();
	UFUNCTION(blueprintCallable, Category = "Card")
	UDataTable* GetCardDataTable() const { return CardDataTable; }

	UPROPERTY(BlueprintReadWrite, meta=(BindWidget))
	UVerticalBox* VerticalBox_CardList;
	UPROPERTY(BlueprintReadWrite, meta=(BindWidget))
	UVerticalBox* VerticalBox_ImageFullScreen;
	UPROPERTY(BlueprintReadWrite, meta=(BindWidget))
	UCardDetailInfo* UMG_CardDetailInfo;

protected:
	UPROPERTY()
	UDataTable* CardDataTable;
};
