// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChickenRunProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef CHICKENRUN_ChickenRunProjectile_generated_h
#error "ChickenRunProjectile.generated.h already included, missing '#pragma once' in ChickenRunProjectile.h"
#endif
#define CHICKENRUN_ChickenRunProjectile_generated_h

#define FID_Users_emman_Documents_GitHub_ChickenRun_C___ChickenRun_Source_ChickenRun_ChickenRunProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_emman_Documents_GitHub_ChickenRun_C___ChickenRun_Source_ChickenRun_ChickenRunProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAChickenRunProjectile(); \
	friend struct Z_Construct_UClass_AChickenRunProjectile_Statics; \
public: \
	DECLARE_CLASS(AChickenRunProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChickenRun"), NO_API) \
	DECLARE_SERIALIZER(AChickenRunProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_emman_Documents_GitHub_ChickenRun_C___ChickenRun_Source_ChickenRun_ChickenRunProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AChickenRunProjectile(AChickenRunProjectile&&); \
	AChickenRunProjectile(const AChickenRunProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChickenRunProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChickenRunProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AChickenRunProjectile) \
	NO_API virtual ~AChickenRunProjectile();


#define FID_Users_emman_Documents_GitHub_ChickenRun_C___ChickenRun_Source_ChickenRun_ChickenRunProjectile_h_12_PROLOG
#define FID_Users_emman_Documents_GitHub_ChickenRun_C___ChickenRun_Source_ChickenRun_ChickenRunProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_emman_Documents_GitHub_ChickenRun_C___ChickenRun_Source_ChickenRun_ChickenRunProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_emman_Documents_GitHub_ChickenRun_C___ChickenRun_Source_ChickenRun_ChickenRunProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_emman_Documents_GitHub_ChickenRun_C___ChickenRun_Source_ChickenRun_ChickenRunProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHICKENRUN_API UClass* StaticClass<class AChickenRunProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_emman_Documents_GitHub_ChickenRun_C___ChickenRun_Source_ChickenRun_ChickenRunProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
