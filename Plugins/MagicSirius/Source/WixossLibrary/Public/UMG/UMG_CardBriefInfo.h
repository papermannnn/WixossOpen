// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UMG_AddCard.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/EditableTextBox.h"
#include "Components/Image.h"
#include "Components/VerticalBox.h"
#include "MSDataModel/CardDataTable.h"
#include "UMG_CardBriefInfo.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class WIXOSSLIBRARY_API UCardBriefInfo : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category="Card | Widget", meta=(BindWidget))
	UImage* CardImage;
	UPROPERTY(EditAnywhere, Category="Card | Widget", meta=(BindWidget))
	UEditableTextBox* CardId;
	UPROPERTY(EditAnywhere, Category="Card | Widget", meta=(BindWidget))
	UEditableTextBox* CardName;
	UPROPERTY(EditAnywhere, Category="Card | Widget", meta=(BindWidget))
	UEditableTextBox* CardType;
	UPROPERTY(EditAnywhere, Category="Card | Widget", meta=(BindWidget))
	UButton* Button_Image;

	UPROPERTY()
	UAddCardWidget* ParentWidget;
	
	UFUNCTION()
	void InitData(FMSCardFromCSV InData);
	// 生成覆盖全屏幕的卡牌图片
	UFUNCTION(BlueprintCallable, Category="Card | Widget")
	void GenerateUllScreenCardImage();
	// 初始化详细卡牌信息
	UFUNCTION(BlueprintCallable, Category="Card | Widget")
	void InitDetailWidgetData(FMSCardFromCSV InData);

protected:
	UPROPERTY(BlueprintReadOnly, Category="Card | Widget")
	FMSCardFromCSV CardData;
	UPROPERTY()
	UTexture2D* CardImage2D;
};
