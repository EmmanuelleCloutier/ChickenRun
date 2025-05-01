// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChickenRun/ChickenRunGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChickenRunGameMode() {}

// Begin Cross Module References
CHICKENRUN_API UClass* Z_Construct_UClass_AChickenRunGameMode();
CHICKENRUN_API UClass* Z_Construct_UClass_AChickenRunGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_ChickenRun();
// End Cross Module References

// Begin Class AChickenRunGameMode
void AChickenRunGameMode::StaticRegisterNativesAChickenRunGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChickenRunGameMode);
UClass* Z_Construct_UClass_AChickenRunGameMode_NoRegister()
{
	return AChickenRunGameMode::StaticClass();
}
struct Z_Construct_UClass_AChickenRunGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ChickenRunGameMode.h" },
		{ "ModuleRelativePath", "ChickenRunGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChickenRunGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AChickenRunGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ChickenRun,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChickenRunGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AChickenRunGameMode_Statics::ClassParams = {
	&AChickenRunGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChickenRunGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AChickenRunGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AChickenRunGameMode()
{
	if (!Z_Registration_Info_UClass_AChickenRunGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChickenRunGameMode.OuterSingleton, Z_Construct_UClass_AChickenRunGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AChickenRunGameMode.OuterSingleton;
}
template<> CHICKENRUN_API UClass* StaticClass<AChickenRunGameMode>()
{
	return AChickenRunGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AChickenRunGameMode);
AChickenRunGameMode::~AChickenRunGameMode() {}
// End Class AChickenRunGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_emman_Documents_GitHub_ChickenRun_C___ChickenRun_Source_ChickenRun_ChickenRunGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AChickenRunGameMode, AChickenRunGameMode::StaticClass, TEXT("AChickenRunGameMode"), &Z_Registration_Info_UClass_AChickenRunGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChickenRunGameMode), 3335377492U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_emman_Documents_GitHub_ChickenRun_C___ChickenRun_Source_ChickenRun_ChickenRunGameMode_h_590884361(TEXT("/Script/ChickenRun"),
	Z_CompiledInDeferFile_FID_Users_emman_Documents_GitHub_ChickenRun_C___ChickenRun_Source_ChickenRun_ChickenRunGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_emman_Documents_GitHub_ChickenRun_C___ChickenRun_Source_ChickenRun_ChickenRunGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
