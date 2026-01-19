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
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ADoorBase();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ADoorBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ADoorBase ****************************************************************
void ADoorBase::StaticRegisterNativesADoorBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ADoorBase;
UClass* ADoorBase::GetPrivateStaticClass()
{
	using TClass = ADoorBase;
	if (!Z_Registration_Info_UClass_ADoorBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DoorBase"),
			Z_Registration_Info_UClass_ADoorBase.InnerSingleton,
			StaticRegisterNativesADoorBase,
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
	return Z_Registration_Info_UClass_ADoorBase.InnerSingleton;
}
UClass* Z_Construct_UClass_ADoorBase_NoRegister()
{
	return ADoorBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADoorBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ADoorBase.h" },
		{ "ModuleRelativePath", "ADoorBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JoinPoint_MetaData[] = {
		{ "Category", "Door" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ADoorBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JoinPoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADoorBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoorBase_Statics::NewProp_JoinPoint = { "JoinPoint", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoorBase, JoinPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JoinPoint_MetaData), NewProp_JoinPoint_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADoorBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorBase_Statics::NewProp_JoinPoint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADoorBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADoorBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADoorBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADoorBase_Statics::ClassParams = {
	&ADoorBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADoorBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADoorBase_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADoorBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ADoorBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADoorBase()
{
	if (!Z_Registration_Info_UClass_ADoorBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADoorBase.OuterSingleton, Z_Construct_UClass_ADoorBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADoorBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADoorBase);
ADoorBase::~ADoorBase() {}
// ********** End Class ADoorBase ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Dell_Documents_Unreal_Projects_Procedural_Dungeon_ProceduralDungeon_Source_ProceduralDungeon_ADoorBase_h__Script_ProceduralDungeon_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADoorBase, ADoorBase::StaticClass, TEXT("ADoorBase"), &Z_Registration_Info_UClass_ADoorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADoorBase), 2513090731U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dell_Documents_Unreal_Projects_Procedural_Dungeon_ProceduralDungeon_Source_ProceduralDungeon_ADoorBase_h__Script_ProceduralDungeon_981034936(TEXT("/Script/ProceduralDungeon"),
	Z_CompiledInDeferFile_FID_Users_Dell_Documents_Unreal_Projects_Procedural_Dungeon_ProceduralDungeon_Source_ProceduralDungeon_ADoorBase_h__Script_ProceduralDungeon_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Dell_Documents_Unreal_Projects_Procedural_Dungeon_ProceduralDungeon_Source_ProceduralDungeon_ADoorBase_h__Script_ProceduralDungeon_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
