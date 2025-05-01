// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChickenRun/ChickenRunPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChickenRunPlayerController() {}

// Begin Cross Module References
CHICKENRUN_API UClass* Z_Construct_UClass_AChickenRunPlayerController();
CHICKENRUN_API UClass* Z_Construct_UClass_AChickenRunPlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_ChickenRun();
// End Cross Module References

// Begin Class AChickenRunPlayerController
void AChickenRunPlayerController::StaticRegisterNativesAChickenRunPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChickenRunPlayerController);
UClass* Z_Construct_UClass_AChickenRunPlayerController_NoRegister()
{
	return AChickenRunPlayerController::StaticClass();
}
struct Z_Construct_UClass_AChickenRunPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "ChickenRunPlayerController.h" },
		{ "ModuleRelativePath", "ChickenRunPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "ChickenRunPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChickenRunPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChickenRunPlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChickenRunPlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChickenRunPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChickenRunPlayerController_Statics::NewProp_InputMappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChickenRunPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AChickenRunPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_ChickenRun,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChickenRunPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AChickenRunPlayerController_Statics::ClassParams = {
	&AChickenRunPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AChickenRunPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AChickenRunPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChickenRunPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AChickenRunPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AChickenRunPlayerController()
{
	if (!Z_Registration_Info_UClass_AChickenRunPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChickenRunPlayerController.OuterSingleton, Z_Construct_UClass_AChickenRunPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AChickenRunPlayerController.OuterSingleton;
}
template<> CHICKENRUN_API UClass* StaticClass<AChickenRunPlayerController>()
{
	return AChickenRunPlayerController::StaticClass();
}
AChickenRunPlayerController::AChickenRunPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AChickenRunPlayerController);
AChickenRunPlayerController::~AChickenRunPlayerController() {}
// End Class AChickenRunPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_emman_Documents_GitHub_ChickenRun_C___ChickenRun_Source_ChickenRun_ChickenRunPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AChickenRunPlayerController, AChickenRunPlayerController::StaticClass, TEXT("AChickenRunPlayerController"), &Z_Registration_Info_UClass_AChickenRunPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChickenRunPlayerController), 3201137476U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_emman_Documents_GitHub_ChickenRun_C___ChickenRun_Source_ChickenRun_ChickenRunPlayerController_h_1089990085(TEXT("/Script/ChickenRun"),
	Z_CompiledInDeferFile_FID_Users_emman_Documents_GitHub_ChickenRun_C___ChickenRun_Source_ChickenRun_ChickenRunPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_emman_Documents_GitHub_ChickenRun_C___ChickenRun_Source_ChickenRun_ChickenRunPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
