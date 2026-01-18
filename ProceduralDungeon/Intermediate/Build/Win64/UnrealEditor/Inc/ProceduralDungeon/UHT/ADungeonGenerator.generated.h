// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ADungeonGenerator.h"

#ifdef PROCEDURALDUNGEON_ADungeonGenerator_generated_h
#error "ADungeonGenerator.generated.h already included, missing '#pragma once' in ADungeonGenerator.h"
#endif
#define PROCEDURALDUNGEON_ADungeonGenerator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ARoomBase;

// ********** Begin Class ADungeonGenerator ********************************************************
#define FID_Unreal_Projects_Procedural_Dungeon_ProceduralDungeon_Source_ProceduralDungeon_ADungeonGenerator_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSpawnRandomRoom); \
	DECLARE_FUNCTION(execDoesRoomOverlap);


PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ADungeonGenerator_NoRegister();

#define FID_Unreal_Projects_Procedural_Dungeon_ProceduralDungeon_Source_ProceduralDungeon_ADungeonGenerator_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADungeonGenerator(); \
	friend struct Z_Construct_UClass_ADungeonGenerator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ADungeonGenerator_NoRegister(); \
public: \
	DECLARE_CLASS2(ADungeonGenerator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProceduralDungeon"), Z_Construct_UClass_ADungeonGenerator_NoRegister) \
	DECLARE_SERIALIZER(ADungeonGenerator)


#define FID_Unreal_Projects_Procedural_Dungeon_ProceduralDungeon_Source_ProceduralDungeon_ADungeonGenerator_h_11_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADungeonGenerator(ADungeonGenerator&&) = delete; \
	ADungeonGenerator(const ADungeonGenerator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADungeonGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADungeonGenerator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADungeonGenerator) \
	NO_API virtual ~ADungeonGenerator();


#define FID_Unreal_Projects_Procedural_Dungeon_ProceduralDungeon_Source_ProceduralDungeon_ADungeonGenerator_h_8_PROLOG
#define FID_Unreal_Projects_Procedural_Dungeon_ProceduralDungeon_Source_ProceduralDungeon_ADungeonGenerator_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Procedural_Dungeon_ProceduralDungeon_Source_ProceduralDungeon_ADungeonGenerator_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_Procedural_Dungeon_ProceduralDungeon_Source_ProceduralDungeon_ADungeonGenerator_h_11_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_Procedural_Dungeon_ProceduralDungeon_Source_ProceduralDungeon_ADungeonGenerator_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADungeonGenerator;

// ********** End Class ADungeonGenerator **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_Procedural_Dungeon_ProceduralDungeon_Source_ProceduralDungeon_ADungeonGenerator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
