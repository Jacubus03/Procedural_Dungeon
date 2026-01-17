// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ADoorBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeADoorBase() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_AADoorBase();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_AADoorBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AADoorBase ***************************************************************
void AADoorBase::StaticRegisterNativesAADoorBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AADoorBase;
UClass* AADoorBase::GetPrivateStaticClass()
{
	using TClass = AADoorBase;
	if (!Z_Registration_Info_UClass_AADoorBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ADoorBase"),
			Z_Registration_Info_UClass_AADoorBase.InnerSingleton,
			StaticRegisterNativesAADoorBase,
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
	return Z_Registration_Info_UClass_AADoorBase.InnerSingleton;
}
UClass* Z_Construct_UClass_AADoorBase_NoRegister()
{
	return AADoorBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AADoorBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ADoorBase.h" },
		{ "ModuleRelativePath", "ADoorBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AADoorBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AADoorBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AADoorBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AADoorBase_Statics::ClassParams = {
	&AADoorBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AADoorBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AADoorBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AADoorBase()
{
	if (!Z_Registration_Info_UClass_AADoorBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AADoorBase.OuterSingleton, Z_Construct_UClass_AADoorBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AADoorBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AADoorBase);
AADoorBase::~AADoorBase() {}
// ********** End Class AADoorBase *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Procedural_Dungeon_ProceduralDungeon_Source_ProceduralDungeon_ADoorBase_h__Script_ProceduralDungeon_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AADoorBase, AADoorBase::StaticClass, TEXT("AADoorBase"), &Z_Registration_Info_UClass_AADoorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AADoorBase), 2636058849U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Procedural_Dungeon_ProceduralDungeon_Source_ProceduralDungeon_ADoorBase_h__Script_ProceduralDungeon_2589950706(TEXT("/Script/ProceduralDungeon"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Procedural_Dungeon_ProceduralDungeon_Source_ProceduralDungeon_ADoorBase_h__Script_ProceduralDungeon_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Procedural_Dungeon_ProceduralDungeon_Source_ProceduralDungeon_ADoorBase_h__Script_ProceduralDungeon_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
