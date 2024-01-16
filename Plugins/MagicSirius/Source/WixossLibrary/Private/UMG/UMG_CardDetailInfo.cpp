// Fill out your copyright notice in the Description page of Project Settings.


#include "..\..\Public\UMG\UMG_CardDetailInfo.h"

#include "MSDataModel/CardDataTable.h"
#include "UMG/UMG_CardImageFullScreen.h"

void UCardDetailInfo::GenerateUllScreenCardImage()
{
	// TSubclassOf<UUserWidget> CardImageFullScreenClass = LoadClass<UUserWidget>(
	// nullptr, TEXT("WidgetBlueprint'/MagicSirius/UMG/AddCards/UMG_CardImageFullScreen.UMG_CardImageFullScreen_C'"));
	// if (CardImageFullScreenClass.Get())
	// {
	// 	if (UCardImageFullScreen* CardImageFullScreen = CreateWidget<UCardImageFullScreen>(
	// 		this, CardImageFullScreenClass))
	// 	{
	// 		CardImageFullScreen->CardImage->Brush.SetResourceObject(CardImage2D);
	// 		ParentWidget->VerticalBox_ImageFullScreen->AddChild(CardImageFullScreen);
	// 	}
	// }
}

void UCardDetailInfo::InitData(FMSCardFromCSV InData)
{
	UE_LOG(LogTemp, Warning, TEXT("UCardDetailInfo::InitData"))
}
