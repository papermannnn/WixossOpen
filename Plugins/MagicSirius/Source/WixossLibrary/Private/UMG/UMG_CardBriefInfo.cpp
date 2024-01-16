// Fill out your copyright notice in the Description page of Project Settings.


#include "..\..\Public\UMG\UMG_CardBriefInfo.h"

#include "MSDataModel/CardDataTable.h"
#include "MSDataModel/MSCardEntity.h"
#include "..\..\Public\UMG\UMG_CardImageFullScreen.h"

void UCardBriefInfo::InitData(FMSCardFromCSV InData)
{
	CardData = InData;
	CardName->SetText(FText::FromString(CardData.Name));
	CardId->SetText(FText::FromString(FString::FromInt(CardData.Id)));
	CardType->SetText(FText::FromString(UMSCardEntity::GetCardType(CardData.Type)));

	CardImage2D = LoadObject<UTexture2D>(
		nullptr, *(FString("Texture2D'/Game/Pics/") + FString::FromInt(CardData.Id) + FString((".")) +
			FString::FromInt(CardData.Id) + FString(("'"))));
	CardImage->Brush.SetResourceObject(CardImage2D);
}

void UCardBriefInfo::GenerateUllScreenCardImage()
{
	TSubclassOf<UUserWidget> CardImageFullScreenClass = LoadClass<UUserWidget>(
		nullptr, TEXT("WidgetBlueprint'/MagicSirius/UMG/AddCards/UMG_CardImageFullScreen.UMG_CardImageFullScreen_C'"));
	if (CardImageFullScreenClass.Get())
	{
		if (UCardImageFullScreen* CardImageFullScreen = CreateWidget<UCardImageFullScreen>(
			this, CardImageFullScreenClass))
		{
			CardImageFullScreen->CardImage->Brush.SetResourceObject(CardImage2D);
			ParentWidget->VerticalBox_ImageFullScreen->AddChild(CardImageFullScreen);
		}
	}
}

void UCardBriefInfo::InitDetailWidgetData(FMSCardFromCSV InData)
{
	ParentWidget->UMG_CardDetailInfo->InitData(InData);
}
