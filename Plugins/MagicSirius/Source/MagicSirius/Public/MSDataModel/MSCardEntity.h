// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MSCardEntity.generated.h"

/*
#setnames, using tab for comment
!setname 0x1 小玉限定
!setname 0x2 伊绪奈限定
!setname 0x3 游月限定
!setname 0x4 小忆限定
!setname 0x5 皮璐璐可限定
!setname 0x6 绿子限定
!setname 0x7 ——限定
!setname 0x8 花代限定
!setname 0x9 乌莉丝限定
!setname 0x10 迟钝子限定
!setname 0x11 蕾拉限定
!setname 0x12 塔维尔限定
!setname 0x13 乌姆尔限定
!setname 0x14 艾尔德拉限定
!setname 0x15 米璐璐恩限定
!setname 0x16 安限定
!setname 0x17 莎榭限定
!setname 0x18 缪限定
!setname 0x19 艾娅依限定
!setname 0x20 离限定
!setname 0x21 ？限定
!setname 0x22 莉露限定
!setname 0x23 梅露限定
!setname 0x24 无名限定
!setname 0x25 妈妈限定
!setname 0x26 嘉年华限定
!setname 0x27 多娜限定
!setname 0x28 梦限限定
!setname 0x29 LOV限定
!setname 0x30 亚弥限定
!setname 0x31 阿尔芙限定
!setname 0x32 艾玛限定
!setname 0x33 彩虹社限定
!setname 0x130 精像
!setname 0x131 精武
!setname 0x132 精罗
!setname 0x133 精械
!setname 0x134 精生
!setname 0x135 精元
!setname 0x136 精武-武装
!setname 0x137 精罗-宝石
!setname 0x138 天使
!setname 0x139 恶魔
!setname 0x140 美巧
!setname 0x141 英知
!setname 0x142 武勇
!setname 0x143 升阶
!setname 0x144 武器
!setname 0x145 游具
!setname 0x146 毒牙
!setname 0x147 机关
!setname 0x148 矿石
!setname 0x149 植物
!setname 0x150 原子
!setname 0x151 宇宙
!setname 0x152 微菌
!setname 0x153 电机
!setname 0x154 古代兵器
!setname 0x155 迷宫
!setname 0x156 调理
!setname 0x157 附属
!setname 0x158 乘机
!setname 0x159 红莲
!setname 0x160 水兽
!setname 0x161 空兽
!setname 0x162 地兽
!setname 0x163 龙兽
!setname 0x164 凶虫
!setname 0x165 怪异


!system 1010 白
!system 1011 红
!system 1012 蓝
!system 1013 绿
!system 1014 黑
!system 1015 无
!system 1020 通用
!system 1021 小玉&伊绪奈
!system 1022 花代&游月
!system 1023 小忆&皮璐璐可
!system 1024 绿子
!system 1025 乌莉丝&迟钝子
!system 1026 塔维尔&乌姆尔
!system 1027 艾尔德拉&亚弥
!system 1028 米璐璐恩
!system 1029 安&彩虹社
!system 1030 莎榭&艾玛
!system 1031 缪
!system 1032 艾娅依 
!system 1033 离 
!system 1034 阿尔芙
!system 1035 ？
!system 1036 莉露
!system 1037 无名
!system 1038 妈妈
!system 1039 嘉年华
!system 1040 多娜
!system 1041 梦限
!system 1042 优羽莉
!system 1043 蕾拉
!system 1044 梅露
!system 1050 精灵
!system 1051 --
!system 1052 --
!system 1053 ？？？
!system 1054 精灵
!system 1055 ——
!system 1056 分身
!system 1057 魔法
!system 1058 ——
!system 1059 ——
!system 1060 ——
!system 1061 ——
!system 1062 --
!system 1063 必杀
!system 1064 ——
!system 1065 ？？？
!system 1066 ——
!system 1067 ——
!system 1068 ——
!system 1069 ——
!system 1070 ——
!system 1071 ——
!system 1072 --
!system 1073 共鸣
!system 1074 ——
!system 1075 应援
!system 1076 钥匙
!system 1080 (N/A)
#GUI
!system 1100 卡牌废弃
!system 1101 怪兽破坏
!system 1102 能量填充
!system 1103 生命爆发
!system 1104 返回手卡
!system 1105 返回卡组
!system 1106 舍弃手牌
!system 1107 卡牌除外
!system 1108 抽卡辅助
!system 1109 卡组检索
!system 1110 卡片回收
!system 1111 卡片横置
!system 1112 硬币相关
!system 1113 力量变化
!system 1114 枪兵  
!system 1115 卡片竖置
!system 1116 攻击限制
!system 1117 防御限制
!system 1118 多重击溃
!system 1119 精灵出场  
!system 1120 护甲填充
!system 1121 护甲削弱
!system 1122 给予伤害  
!system 1123 超越
!system 1124 破坏耐性
!system 1125 能力耐性
!system 1126 能量破坏
!system 1127 效果无效   
!system 1128 防御   
!system 1129 万花色  
!system 1130 指示物
!system 1131 暗杀 
*/
/**
 * @brief Wixoss单卡对象基类
 */
UCLASS(Blueprintable)
class MAGICSIRIUS_API UMSCardEntity : public UObject
{
	GENERATED_BODY()
public:
	UFUNCTION()
	static FString GetCardType(int InType);
	
};
