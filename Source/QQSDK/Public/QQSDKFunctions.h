// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreUObject.h"
#include "Engine.h"

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "QQSDKFunctions.generated.h"

/**
 * 
 */
UCLASS(NotBlueprintable)
class QQSDK_API UQQSDKFunctions : public UObject
{
	GENERATED_BODY()
	
public:

#if PLATFORM_ANDROID 
	static void InitAndroidFunctions();
#endif

#if PLATFORM_IOS
	static void InitIOSFunctions();
#endif

	static bool isQQInstalled();

	/**
	* �������ŵ�QQ
	* @param Title               ����ı��⡣ע��PARAM_TITLE��PARAM_IMAGE_URL��PARAM_SUMMARY����ȫΪ�գ����ٱ�����һ������ֵ�ġ�
	* @param Summary             �������ϢժҪ���50����
	* @param TargetURL           ����������Ϣ�����ѵ�������תURL
	* @param ImageURL            ����ͼͼ��ַ
	* @param APPName             ��Q�ͻ��˶������滻�����ء���ť���֣����Ϊ�գ��÷��ش���(IOS���ֶ���Ч)
	*/
	UFUNCTION(BlueprintCallable, meta = (Keywords = "QQSDK "), Category = "QQSDK|")
	static void ShareToQQ_News(const FString& Title, const FString& Summary, const FString& TargetURL, const FString& ImageURL, const FString& APPName);

	/**
	* �������ŵ�QQ�ռ�
	* @param Title               ����ı���(����)
	* @param Summary             �������ϢժҪ(����)
	* @param TargetURL           ��תURL(����)
	* @param ImageURL            ����ͼͼ��ַ
	*/
	UFUNCTION(BlueprintCallable, meta = (Keywords = "QQSDK "), Category = "QQSDK|")
	static void ShareToQzone_News(const FString& Title, const FString& Summary, const FString& TargetURL, const FString& ImageURL);
};
