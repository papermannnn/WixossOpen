// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UMG_AddCard.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/EditableTextBox.h"
#include "Components/Image.h"
#include "UMG_CardDetailInfo.generated.h"

/**
* Id 卡片的Id（unique）
Name 卡牌名
EffectText （效果文本）
AliasId 同名卡
IdJason 杰森的编号
Environment 环境（1全、2K、3D）
Type 卡牌类型（1精灵、2魔法、3核心分身、4支援分身、5碎片、6Token、7钥匙、8必杀）
WithLifeBurst 是否有迸发（true、false）
Level 等级（精灵为精灵等级，分身为分身等级）
Color 颜色（1白、2红、3蓝、4绿、5黑、6无、双色用两位数例如12为红白）
Limit （支援分身为提供的界限增加值，分身为分身界限）
Cost （分身/核心分身成长费用、必杀使用费用、魔法使用费用，2蓝3任意=2330）
Power （精灵的力量）
Category（精灵种族、分身类型）
暂时废弃TeamCategory（小队类别）
TimeOfUse （使用时点，1主要阶段、2攻击阶段、3魔法切入）
暂时废弃Coins （分身的硬币数量）
暂时废弃CoinCost （钥匙使用所需要消耗的硬币数量）
 */

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class WIXOSSLIBRARY_API UCardDetailInfo : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category="Card | Widget", meta=(BindWidget))
	UImage* CardImage;
	UPROPERTY(EditAnywhere, Category="Card | Widget", meta=(BindWidget))
	UButton* Button_Image;

	UPROPERTY(EditAnywhere, Category="Card | Widget", meta=(BindWidget))
	UEditableTextBox* CardName;
	UPROPERTY(EditAnywhere, Category="Card | Widget", meta=(BindWidget))
	UEditableTextBox* IdJason;
	UPROPERTY(EditAnywhere, Category="Card | Widget", meta=(BindWidget))
	UEditableTextBox* Environment;
	UPROPERTY(EditAnywhere, Category="Card | Widget", meta=(BindWidget))
	UEditableTextBox* Type;
	UPROPERTY(EditAnywhere, Category="Card | Widget", meta=(BindWidget))
	UEditableTextBox* WithLifeBurst;
	UPROPERTY(EditAnywhere, Category="Card | Widget", meta=(BindWidget))
	UEditableTextBox* Level;
	UPROPERTY(EditAnywhere, Category="Card | Widget", meta=(BindWidget))
	UEditableTextBox* Color;
	UPROPERTY(EditAnywhere, Category="Card | Widget", meta=(BindWidget))
	UEditableTextBox* Limit;
	UPROPERTY(EditAnywhere, Category="Card | Widget", meta=(BindWidget))
	UEditableTextBox* Cost;
	UPROPERTY(EditAnywhere, Category="Card | Widget", meta=(BindWidget))
	UEditableTextBox* Power;
	UPROPERTY(EditAnywhere, Category="Card | Widget", meta=(BindWidget))
	UEditableTextBox* Category;
	UPROPERTY(EditAnywhere, Category="Card | Widget", meta=(BindWidget))
	UEditableTextBox* TimeOfUse;
	UPROPERTY(EditAnywhere, Category="Card | Widget", meta=(BindWidget))
	UEditableTextBox* EffectText;

public:
	// 共用父UMG
	UPROPERTY()
	UAddCardWidget* ParentWidget;

	// 生成覆盖全屏幕的卡牌图片
	UFUNCTION(BlueprintCallable, Category="Card | Widget")
	void GenerateUllScreenCardImage();
	UFUNCTION(BlueprintCallable, Category="Card | Widget")
	void InitData(FMSCardFromCSV InData);
};
