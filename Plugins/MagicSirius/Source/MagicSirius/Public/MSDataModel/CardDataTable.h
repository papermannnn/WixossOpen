// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CardDataTable.generated.h"
/**
* Id 卡片的Id（unique）
Name 卡牌名
EffectText （效果文本）
AliasId 同名卡Id
IdJason 杰森的编号
Environment 环境（1全、2K、3D）
Type 卡牌类型（1精灵、2魔法、3核心分身、4支援分身、5碎片、6Token、7钥匙、8必杀）
WithLifeBurst 是否有迸发（true、false）
Level 等级（精灵为精灵等级，分身为分身等级）
Color 颜色（1白、2红、3蓝、4绿、5黑、6无、双色用两位数例如12为红白）
Limit （支援分身为提供的界限增加值，分身为分身界限）
Cost （分身/核心分身成长费用、必杀使用费用、魔法使用费用，A白、B红、C蓝、D绿、E黑、F无、12蓝3任意=12B3F）
Power （精灵的力量）
Category（精灵种族、分身类型）
暂时废弃TeamCategory（小队类别）
TimeOfUse （使用时点，1主要阶段、2攻击阶段、3魔法切入）
暂时废弃Coins （分身的硬币数量）
暂时废弃CoinCost （钥匙使用所需要消耗的硬币数量）
 */
USTRUCT(BlueprintType)
struct FMSCardFromCSV : public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Card | Struct")
	int Id;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Card | Struct")
	FString Name;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Card | Struct")
	int AliasId;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Card | Struct")
	FString EffectText;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Card | Struct")
	FString IdJason;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Card | Struct")
	int Environment;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Card | Struct")
	int Type;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Card | Struct")
	bool WithLifeBurst;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Card | Struct")
	int Level;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Card | Struct")
	int Color;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Card | Struct")
	int Limit;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Card | Struct")
	int Cost;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Card | Struct")
	int Power;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Card | Struct")
	int Category;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Card | Struct")
	int TeamCategory;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Card | Struct")
	int TimeOfUse;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Card | Struct")
	int Coins;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Card | Struct")
	int CoinCost;
};
/**
 * 
 */
UCLASS()
class MAGICSIRIUS_API UCardDataTable : public UDataTable
{
	GENERATED_BODY()
public:
	UCardDataTable();
	
};
