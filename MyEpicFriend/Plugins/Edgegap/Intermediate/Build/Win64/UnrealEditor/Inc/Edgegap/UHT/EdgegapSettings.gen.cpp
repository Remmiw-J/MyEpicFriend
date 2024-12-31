// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Edgegap/Private/EdgegapSettings.h"
#include "Edgegap/Private/APIToken/APITokenSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdgegapSettings() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
EDGEGAP_API UClass* Z_Construct_UClass_UEdgegapSettings();
EDGEGAP_API UClass* Z_Construct_UClass_UEdgegapSettings_NoRegister();
EDGEGAP_API UScriptStruct* Z_Construct_UScriptStruct_FAPITokenSettings();
UPackage* Z_Construct_UPackage__Script_Edgegap();
// End Cross Module References

// Begin Class UEdgegapSettings
void UEdgegapSettings::StaticRegisterNativesUEdgegapSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdgegapSettings);
UClass* Z_Construct_UClass_UEdgegapSettings_NoRegister()
{
	return UEdgegapSettings::StaticClass();
}
struct Z_Construct_UClass_UEdgegapSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Edgegap Plugin" },
		{ "IncludePath", "EdgegapSettings.h" },
		{ "ModuleRelativePath", "Private/EdgegapSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_APIToken_MetaData[] = {
		{ "Category", "API" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//~ End UObject Interface\n" },
#endif
		{ "DisplayName", "API Token" },
		{ "ModuleRelativePath", "Private/EdgegapSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplicationName_MetaData[] = {
		{ "Category", "Application Info" },
		{ "DisplayName", "Application Name" },
		{ "EditCondition", "bIsTokenVerified" },
		{ "ModuleRelativePath", "Private/EdgegapSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImagePath_MetaData[] = {
		{ "Category", "Application Info" },
		{ "DisplayName", "Application Image" },
		{ "EditCondition", "bIsTokenVerified" },
		{ "ModuleRelativePath", "Private/EdgegapSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCustomContainerRegistry_MetaData[] = {
		{ "Category", "Container Registry" },
		{ "ModuleRelativePath", "Private/EdgegapSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Registry_MetaData[] = {
		{ "Category", "Container Registry" },
		{ "DisplayName", "Registry URL" },
		{ "EditCondition", "bUseCustomContainerRegistry" },
		{ "ModuleRelativePath", "Private/EdgegapSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImageRepository_MetaData[] = {
		{ "Category", "Container Registry" },
		{ "DisplayName", "Repository" },
		{ "EditCondition", "bUseCustomContainerRegistry" },
		{ "ModuleRelativePath", "Private/EdgegapSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrivateRegistryUsername_MetaData[] = {
		{ "Category", "Container Registry" },
		{ "DisplayName", "Username" },
		{ "EditCondition", "bUseCustomContainerRegistry" },
		{ "ModuleRelativePath", "Private/EdgegapSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrivateRegistryToken_MetaData[] = {
		{ "Category", "Container Registry" },
		{ "DisplayName", "Token" },
		{ "EditCondition", "bUseCustomContainerRegistry" },
		{ "ModuleRelativePath", "Private/EdgegapSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "ModuleRelativePath", "Private/EdgegapSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VersionName_MetaData[] = {
		{ "ModuleRelativePath", "Private/EdgegapSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsTokenVerified_MetaData[] = {
		{ "Category", "EdgegapSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//@TODO: Check the best way to handle verification and toggle edit conditions accordingly\n" },
#endif
		{ "ModuleRelativePath", "Private/EdgegapSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@TODO: Check the best way to handle verification and toggle edit conditions accordingly" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_APIToken;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ApplicationName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImagePath;
	static void NewProp_bUseCustomContainerRegistry_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCustomContainerRegistry;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Registry;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ImageRepository;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PrivateRegistryUsername;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PrivateRegistryToken;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VersionName;
	static void NewProp_bIsTokenVerified_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTokenVerified;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdgegapSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEdgegapSettings_Statics::NewProp_APIToken = { "APIToken", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdgegapSettings, APIToken), Z_Construct_UScriptStruct_FAPITokenSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_APIToken_MetaData), NewProp_APIToken_MetaData) }; // 1774933944
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UEdgegapSettings_Statics::NewProp_ApplicationName = { "ApplicationName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdgegapSettings, ApplicationName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplicationName_MetaData), NewProp_ApplicationName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEdgegapSettings_Statics::NewProp_ImagePath = { "ImagePath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdgegapSettings, ImagePath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImagePath_MetaData), NewProp_ImagePath_MetaData) };
void Z_Construct_UClass_UEdgegapSettings_Statics::NewProp_bUseCustomContainerRegistry_SetBit(void* Obj)
{
	((UEdgegapSettings*)Obj)->bUseCustomContainerRegistry = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdgegapSettings_Statics::NewProp_bUseCustomContainerRegistry = { "bUseCustomContainerRegistry", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEdgegapSettings), &Z_Construct_UClass_UEdgegapSettings_Statics::NewProp_bUseCustomContainerRegistry_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCustomContainerRegistry_MetaData), NewProp_bUseCustomContainerRegistry_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEdgegapSettings_Statics::NewProp_Registry = { "Registry", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdgegapSettings, Registry), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Registry_MetaData), NewProp_Registry_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEdgegapSettings_Statics::NewProp_ImageRepository = { "ImageRepository", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdgegapSettings, ImageRepository), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImageRepository_MetaData), NewProp_ImageRepository_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEdgegapSettings_Statics::NewProp_PrivateRegistryUsername = { "PrivateRegistryUsername", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdgegapSettings, PrivateRegistryUsername), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrivateRegistryUsername_MetaData), NewProp_PrivateRegistryUsername_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEdgegapSettings_Statics::NewProp_PrivateRegistryToken = { "PrivateRegistryToken", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdgegapSettings, PrivateRegistryToken), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrivateRegistryToken_MetaData), NewProp_PrivateRegistryToken_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEdgegapSettings_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdgegapSettings, Tag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEdgegapSettings_Statics::NewProp_VersionName = { "VersionName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdgegapSettings, VersionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VersionName_MetaData), NewProp_VersionName_MetaData) };
void Z_Construct_UClass_UEdgegapSettings_Statics::NewProp_bIsTokenVerified_SetBit(void* Obj)
{
	((UEdgegapSettings*)Obj)->bIsTokenVerified = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdgegapSettings_Statics::NewProp_bIsTokenVerified = { "bIsTokenVerified", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEdgegapSettings), &Z_Construct_UClass_UEdgegapSettings_Statics::NewProp_bIsTokenVerified_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsTokenVerified_MetaData), NewProp_bIsTokenVerified_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEdgegapSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdgegapSettings_Statics::NewProp_APIToken,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdgegapSettings_Statics::NewProp_ApplicationName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdgegapSettings_Statics::NewProp_ImagePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdgegapSettings_Statics::NewProp_bUseCustomContainerRegistry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdgegapSettings_Statics::NewProp_Registry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdgegapSettings_Statics::NewProp_ImageRepository,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdgegapSettings_Statics::NewProp_PrivateRegistryUsername,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdgegapSettings_Statics::NewProp_PrivateRegistryToken,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdgegapSettings_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdgegapSettings_Statics::NewProp_VersionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdgegapSettings_Statics::NewProp_bIsTokenVerified,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEdgegapSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEdgegapSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_Edgegap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEdgegapSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdgegapSettings_Statics::ClassParams = {
	&UEdgegapSettings::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEdgegapSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEdgegapSettings_Statics::PropPointers),
	0,
	0x000000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEdgegapSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UEdgegapSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEdgegapSettings()
{
	if (!Z_Registration_Info_UClass_UEdgegapSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdgegapSettings.OuterSingleton, Z_Construct_UClass_UEdgegapSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEdgegapSettings.OuterSingleton;
}
template<> EDGEGAP_API UClass* StaticClass<UEdgegapSettings>()
{
	return UEdgegapSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEdgegapSettings);
UEdgegapSettings::~UEdgegapSettings() {}
// End Class UEdgegapSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyEpicFriend_MyEpicFriend_Plugins_Edgegap_Source_Edgegap_Private_EdgegapSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEdgegapSettings, UEdgegapSettings::StaticClass, TEXT("UEdgegapSettings"), &Z_Registration_Info_UClass_UEdgegapSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdgegapSettings), 1188739041U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyEpicFriend_MyEpicFriend_Plugins_Edgegap_Source_Edgegap_Private_EdgegapSettings_h_1784773787(TEXT("/Script/Edgegap"),
	Z_CompiledInDeferFile_FID_MyEpicFriend_MyEpicFriend_Plugins_Edgegap_Source_Edgegap_Private_EdgegapSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyEpicFriend_MyEpicFriend_Plugins_Edgegap_Source_Edgegap_Private_EdgegapSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
