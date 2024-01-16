// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/Image.h"
#include "UMG_CardImageFullScreen.generated.h"

/**
 * 
 */
UCLASS()
class WIXOSSLIBRARY_API UCardImageFullScreen : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category="Card | Widget", meta=(BindWidget))
	UImage* CardImage;
	UPROPERTY(EditAnywhere, Category="Card | Widget", meta=(BindWidget))
	UButton* Button_Image;

	virtual void NativeConstruct() override;
	UFUNCTION(BlueprintCallable, Category="Card | Widget")
	void OnClicked_Button_Image();
};
