// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralDungeonGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeProceduralDungeonGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_AProceduralDungeonGameMode();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_AProceduralDungeonGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AProceduralDungeonGameMode ***********************************************
void AProceduralDungeonGameMode::StaticRegisterNativesAProceduralDungeonGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AProceduralDungeonGameMode;
UClass* AProceduralDungeonGameMode::GetPrivateStaticClass()
{
	using TClass = AProceduralDungeonGameMode;
	if (!Z_Registration_Info_UClass_AProceduralDungeonGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ProceduralDungeonGameMode"),
			Z_Registration_Info_UClass_AProceduralDungeonGameMode.InnerSingleton,
			StaticRegisterNativesAProceduralDungeonGameMode,
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
	return Z_Registration_Info_UClass_AProceduralDungeonGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AProceduralDungeonGameMode_NoRegister()
{
	return AProceduralDungeonGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AProceduralDungeonGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple Game Mode for a top-down perspective game\n *  Sets the default gameplay framework classes\n *  Check the Blueprint derived class for the set values\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ProceduralDungeonGameMode.h" },
		{ "ModuleRelativePath", "ProceduralDungeonGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple Game Mode for a top-down perspective game\nSets the default gameplay framework classes\nCheck the Blueprint derived class for the set values" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProceduralDungeonGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AProceduralDungeonGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralDungeonGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProceduralDungeonGameMode_Statics::ClassParams = {
	&AProceduralDungeonGameMode::StaticClass,
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
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralDungeonGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AProceduralDungeonGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProceduralDungeonGameMode()
{
	if (!Z_Registration_Info_UClass_AProceduralDungeonGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProceduralDungeonGameMode.OuterSingleton, Z_Construct_UClass_AProceduralDungeonGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProceduralDungeonGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProceduralDungeonGameMode);
AProceduralDungeonGameMode::~AProceduralDungeonGameMode() {}
// ********** End Class AProceduralDungeonGameMode *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Procedural_Dungeon_ProceduralDungeon_Source_ProceduralDungeon_ProceduralDungeonGameMode_h__Script_ProceduralDungeon_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProceduralDungeonGameMode, AProceduralDungeonGameMode::StaticClass, TEXT("AProceduralDungeonGameMode"), &Z_Registration_Info_UClass_AProceduralDungeonGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProceduralDungeonGameMode), 2553135570U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Procedural_Dungeon_ProceduralDungeon_Source_ProceduralDungeon_ProceduralDungeonGameMode_h__Script_ProceduralDungeon_3894775000(TEXT("/Script/ProceduralDungeon"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Procedural_Dungeon_ProceduralDungeon_Source_ProceduralDungeon_ProceduralDungeonGameMode_h__Script_ProceduralDungeon_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Procedural_Dungeon_ProceduralDungeon_Source_ProceduralDungeon_ProceduralDungeonGameMode_h__Script_ProceduralDungeon_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
