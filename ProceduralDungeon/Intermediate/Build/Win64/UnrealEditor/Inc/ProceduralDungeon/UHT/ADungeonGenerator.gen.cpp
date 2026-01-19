// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ADungeonGenerator.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeADungeonGenerator() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
ENGINE_API UClass* Z_Construct_UClass_AActor();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ADungeonGenerator();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ADungeonGenerator_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ARoomBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ADungeonGenerator ********************************************************
void ADungeonGenerator::StaticRegisterNativesADungeonGenerator()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ADungeonGenerator;
UClass* ADungeonGenerator::GetPrivateStaticClass()
{
	using TClass = ADungeonGenerator;
	if (!Z_Registration_Info_UClass_ADungeonGenerator.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DungeonGenerator"),
			Z_Registration_Info_UClass_ADungeonGenerator.InnerSingleton,
			StaticRegisterNativesADungeonGenerator,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ADungeonGenerator.InnerSingleton;
}
UClass* Z_Construct_UClass_ADungeonGenerator_NoRegister()
{
	return ADungeonGenerator::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADungeonGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ADungeonGenerator.h" },
		{ "ModuleRelativePath", "ADungeonGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomPrefabs_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "ADungeonGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRandomSeed_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "ADungeonGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialSeed_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "ADungeonGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomsToGenerate_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "ADungeonGenerator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_RoomPrefabs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RoomPrefabs;
	static void NewProp_bRandomSeed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomSeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialSeed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RoomsToGenerate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeonGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_RoomPrefabs_Inner = { "RoomPrefabs", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_ARoomBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_RoomPrefabs = { "RoomPrefabs", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGenerator, RoomPrefabs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomPrefabs_MetaData), NewProp_RoomPrefabs_MetaData) };
void Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bRandomSeed_SetBit(void* Obj)
{
	((ADungeonGenerator*)Obj)->bRandomSeed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bRandomSeed = { "bRandomSeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADungeonGenerator), &Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bRandomSeed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRandomSeed_MetaData), NewProp_bRandomSeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_InitialSeed = { "InitialSeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGenerator, InitialSeed), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialSeed_MetaData), NewProp_InitialSeed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_RoomsToGenerate = { "RoomsToGenerate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGenerator, RoomsToGenerate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomsToGenerate_MetaData), NewProp_RoomsToGenerate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADungeonGenerator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_RoomPrefabs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_RoomPrefabs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bRandomSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_InitialSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_RoomsToGenerate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADungeonGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADungeonGenerator_Statics::ClassParams = {
	&ADungeonGenerator::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADungeonGenerator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_ADungeonGenerator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADungeonGenerator()
{
	if (!Z_Registration_Info_UClass_ADungeonGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADungeonGenerator.OuterSingleton, Z_Construct_UClass_ADungeonGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADungeonGenerator.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeonGenerator);
ADungeonGenerator::~ADungeonGenerator() {}
// ********** End Class ADungeonGenerator **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Natalia_Documents_GitHub_Procedural_Dungeon_ProceduralDungeon_Source_ProceduralDungeon_ADungeonGenerator_h__Script_ProceduralDungeon_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADungeonGenerator, ADungeonGenerator::StaticClass, TEXT("ADungeonGenerator"), &Z_Registration_Info_UClass_ADungeonGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADungeonGenerator), 220974617U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Natalia_Documents_GitHub_Procedural_Dungeon_ProceduralDungeon_Source_ProceduralDungeon_ADungeonGenerator_h__Script_ProceduralDungeon_999243010(TEXT("/Script/ProceduralDungeon"),
	Z_CompiledInDeferFile_FID_Users_Natalia_Documents_GitHub_Procedural_Dungeon_ProceduralDungeon_Source_ProceduralDungeon_ADungeonGenerator_h__Script_ProceduralDungeon_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Natalia_Documents_GitHub_Procedural_Dungeon_ProceduralDungeon_Source_ProceduralDungeon_ADungeonGenerator_h__Script_ProceduralDungeon_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
