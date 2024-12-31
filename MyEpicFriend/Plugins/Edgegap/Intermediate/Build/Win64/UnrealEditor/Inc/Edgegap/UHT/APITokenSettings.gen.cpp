// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Edgegap/Private/APIToken/APITokenSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAPITokenSettings() {}

// Begin Cross Module References
EDGEGAP_API UScriptStruct* Z_Construct_UScriptStruct_FAPITokenSettings();
UPackage* Z_Construct_UPackage__Script_Edgegap();
// End Cross Module References

// Begin ScriptStruct FAPITokenSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_APITokenSettings;
class UScriptStruct* FAPITokenSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_APITokenSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_APITokenSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAPITokenSettings, (UObject*)Z_Construct_UPackage__Script_Edgegap(), TEXT("APITokenSettings"));
	}
	return Z_Registration_Info_UScriptStruct_APITokenSettings.OuterSingleton;
}
template<> EDGEGAP_API UScriptStruct* StaticStruct<FAPITokenSettings>()
{
	return FAPITokenSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAPITokenSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/APIToken/APITokenSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_APIToken_MetaData[] = {
		{ "Category", "API Token" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// API Token\n" },
#endif
		{ "ModuleRelativePath", "Private/APIToken/APITokenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "API Token" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_APIToken;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAPITokenSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAPITokenSettings_Statics::NewProp_APIToken = { "APIToken", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAPITokenSettings, APIToken), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_APIToken_MetaData), NewProp_APIToken_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAPITokenSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAPITokenSettings_Statics::NewProp_APIToken,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAPITokenSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAPITokenSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Edgegap,
	nullptr,
	&NewStructOps,
	"APITokenSettings",
	Z_Construct_UScriptStruct_FAPITokenSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAPITokenSettings_Statics::PropPointers),
	sizeof(FAPITokenSettings),
	alignof(FAPITokenSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAPITokenSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAPITokenSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAPITokenSettings()
{
	if (!Z_Registration_Info_UScriptStruct_APITokenSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_APITokenSettings.InnerSingleton, Z_Construct_UScriptStruct_FAPITokenSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_APITokenSettings.InnerSingleton;
}
// End ScriptStruct FAPITokenSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyEpicFriend_MyEpicFriend_Plugins_Edgegap_Source_Edgegap_Private_APIToken_APITokenSettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAPITokenSettings::StaticStruct, Z_Construct_UScriptStruct_FAPITokenSettings_Statics::NewStructOps, TEXT("APITokenSettings"), &Z_Registration_Info_UScriptStruct_APITokenSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAPITokenSettings), 1774933944U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyEpicFriend_MyEpicFriend_Plugins_Edgegap_Source_Edgegap_Private_APIToken_APITokenSettings_h_3394690219(TEXT("/Script/Edgegap"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MyEpicFriend_MyEpicFriend_Plugins_Edgegap_Source_Edgegap_Private_APIToken_APITokenSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyEpicFriend_MyEpicFriend_Plugins_Edgegap_Source_Edgegap_Private_APIToken_APITokenSettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
