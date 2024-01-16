// Fill out your copyright notice in the Description page of Project Settings.


#include "..\..\Public\UMG\UMG_CardImageFullScreen.h"

void UCardImageFullScreen::NativeConstruct()
{
	Button_Image->OnReleased.AddDynamic(this, &UCardImageFullScreen::OnClicked_Button_Image);
	Super::NativeConstruct();
}

void UCardImageFullScreen::OnClicked_Button_Image()
{
	this->RemoveFromParent();
}
