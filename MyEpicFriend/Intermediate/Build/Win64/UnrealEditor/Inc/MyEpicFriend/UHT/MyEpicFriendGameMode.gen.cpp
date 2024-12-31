// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyEpicFriend/MyEpicFriendGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyEpicFriendGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
MYEPICFRIEND_API UClass* Z_Construct_UClass_AMyEpicFriendGameMode();
MYEPICFRIEND_API UClass* Z_Construct_UClass_AMyEpicFriendGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyEpicFriend();
// End Cross Module References

// Begin Class AMyEpicFriendGameMode
void AMyEpicFriendGameMode::StaticRegisterNativesAMyEpicFriendGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyEpicFriendGameMode);
UClass* Z_Construct_UClass_AMyEpicFriendGameMode_NoRegister()
{
	return AMyEpicFriendGameMode::StaticClass();
}
struct Z_Construct_UClass_AMyEpicFriendGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MyEpicFriendGameMode.h" },
		{ "ModuleRelativePath", "MyEpicFriendGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyEpicFriendGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyEpicFriendGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MyEpicFriend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyEpicFriendGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyEpicFriendGameMode_Statics::ClassParams = {
	&AMyEpicFriendGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyEpicFriendGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyEpicFriendGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyEpicFriendGameMode()
{
	if (!Z_Registration_Info_UClass_AMyEpicFriendGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyEpicFriendGameMode.OuterSingleton, Z_Construct_UClass_AMyEpicFriendGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyEpicFriendGameMode.OuterSingleton;
}
template<> MYEPICFRIEND_API UClass* StaticClass<AMyEpicFriendGameMode>()
{
	return AMyEpicFriendGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyEpicFriendGameMode);
AMyEpicFriendGameMode::~AMyEpicFriendGameMode() {}
// End Class AMyEpicFriendGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyEpicFriend_MyEpicFriend_Source_MyEpicFriend_MyEpicFriendGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyEpicFriendGameMode, AMyEpicFriendGameMode::StaticClass, TEXT("AMyEpicFriendGameMode"), &Z_Registration_Info_UClass_AMyEpicFriendGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyEpicFriendGameMode), 1718359077U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyEpicFriend_MyEpicFriend_Source_MyEpicFriend_MyEpicFriendGameMode_h_2916021140(TEXT("/Script/MyEpicFriend"),
	Z_CompiledInDeferFile_FID_MyEpicFriend_MyEpicFriend_Source_MyEpicFriend_MyEpicFriendGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyEpicFriend_MyEpicFriend_Source_MyEpicFriend_MyEpicFriendGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
