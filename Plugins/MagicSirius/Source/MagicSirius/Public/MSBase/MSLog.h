// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Containers/CircularQueue.h"
#include "Logging/LogCategory.h"
#include "Logging/LogMacros.h"
#include "Logging/LogVerbosity.h"

MAGICSIRIUS_API DECLARE_LOG_CATEGORY_EXTERN(LogMS, Log, All);

class MAGICSIRIUS_API MSLog
{
public:
	static void Error_Exit(const FString& LogText)
	{
		UE_LOG(LogMS, Error, TEXT("%s"), *LogText);
		PushMessageToCache(LogText);
		check(false);
	}

protected:
	inline static uint32 MaxCacheLogNum = 20;
	inline static TCircularQueue<FString> LogCaches = TCircularQueue<FString>(MaxCacheLogNum);

	static void PushMessageToCache(const FString& Message)
	{
		if (LogCaches.Count() >= MaxCacheLogNum)
		{
			LogCaches.Dequeue();
		}
		LogCaches.Enqueue(*Message);
	}
};

#define MS_ERROR_EXIT(log_text) MSLog::Error_Exit(LOG_TEXT_FORMAT(FString(log_text)));

