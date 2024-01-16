// Fill out your copyright notice in the Description page of Project Settings.


#include "..\..\Public\UMG\UMG_AddCard.h"

#include "MSBase/MSLog.h"
#include "MSDataModel/CardDataTable.h"
#include "MSDataModel/MSCardEntity.h"
#include "..\..\Public\UMG\UMG_CardBriefInfo.h"

void UAddCardWidget::LoadCardDataTable()
{
	CardDataTable = LoadObject<UDataTable>(nullptr, TEXT("DataTable'/MagicSirius/Data/CardDataTable.CardDataTable'"));
	if (!CardDataTable)
	{
		UE_LOG(LogMS, Error, TEXT("Load CardDataTable Fail"));
	}
}

void UAddCardWidget::AddItemToCardList()
{
	UE_LOG(LogTemp, Warning, TEXT("Display the use of GetRowMap:"));
	for (auto it : CardDataTable->GetRowMap())
	{
		if (FMSCardFromCSV* Row = (FMSCardFromCSV*)it.Value)
		{
			// UE_LOG(LogTemp, Warning, TEXT("FMSCardFromCSV: %s %d %s %d"), *it.Key.ToString(), Row->I
			TSubclassOf<UUserWidget> CardBriefInfoClass = LoadClass<UUserWidget>(
				nullptr, TEXT("WidgetBlueprint'/MagicSirius/UMG/AddCards/UMG_CardBriefInfo.UMG_CardBriefInfo_C'"));
			if (CardBriefInfoClass.Get())
			{
				if (UCardBriefInfo* CardBriefInfo = CreateWidget<UCardBriefInfo>(this, CardBriefInfoClass))
				{
					CardBriefInfo->InitData(*Row);
					CardBriefInfo->ParentWidget = this;
					VerticalBox_CardList->AddChild(CardBriefInfo);
				}
			}
		}
	}
}
