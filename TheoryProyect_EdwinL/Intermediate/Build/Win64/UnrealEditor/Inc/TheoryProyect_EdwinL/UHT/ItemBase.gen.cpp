// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheoryProyect_EdwinL/ItemBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
THEORYPROYECT_EDWINL_API UClass* Z_Construct_UClass_AItemBase();
THEORYPROYECT_EDWINL_API UClass* Z_Construct_UClass_AItemBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_TheoryProyect_EdwinL();
// End Cross Module References

// Begin Class AItemBase
void AItemBase::StaticRegisterNativesAItemBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AItemBase);
UClass* Z_Construct_UClass_AItemBase_NoRegister()
{
	return AItemBase::StaticClass();
}
struct Z_Construct_UClass_AItemBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ItemBase.h" },
		{ "ModuleRelativePath", "ItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_itemname_MetaData[] = {
		{ "Category", "ItemBase" },
		{ "ModuleRelativePath", "ItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_itemamount_MetaData[] = {
		{ "Category", "ItemBase" },
		{ "ModuleRelativePath", "ItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollider_MetaData[] = {
		{ "Category", "ItemBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ItemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_itemname;
	static const UECodeGen_Private::FIntPropertyParams NewProp_itemamount;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCollider;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItemBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AItemBase_Statics::NewProp_itemname = { "itemname", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemBase, itemname), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_itemname_MetaData), NewProp_itemname_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AItemBase_Statics::NewProp_itemamount = { "itemamount", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemBase, itemamount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_itemamount_MetaData), NewProp_itemamount_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemBase_Statics::NewProp_BoxCollider = { "BoxCollider", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemBase, BoxCollider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxCollider_MetaData), NewProp_BoxCollider_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AItemBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemBase_Statics::NewProp_itemname,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemBase_Statics::NewProp_itemamount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemBase_Statics::NewProp_BoxCollider,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItemBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AItemBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TheoryProyect_EdwinL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItemBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AItemBase_Statics::ClassParams = {
	&AItemBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AItemBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AItemBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItemBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AItemBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AItemBase()
{
	if (!Z_Registration_Info_UClass_AItemBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AItemBase.OuterSingleton, Z_Construct_UClass_AItemBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AItemBase.OuterSingleton;
}
template<> THEORYPROYECT_EDWINL_API UClass* StaticClass<AItemBase>()
{
	return AItemBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AItemBase);
AItemBase::~AItemBase() {}
// End Class AItemBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_TheoryProyect_EdwinL_Source_TheoryProyect_EdwinL_ItemBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AItemBase, AItemBase::StaticClass, TEXT("AItemBase"), &Z_Registration_Info_UClass_AItemBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AItemBase), 1149643602U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TheoryProyect_EdwinL_Source_TheoryProyect_EdwinL_ItemBase_h_1591686774(TEXT("/Script/TheoryProyect_EdwinL"),
	Z_CompiledInDeferFile_FID_TheoryProyect_EdwinL_Source_TheoryProyect_EdwinL_ItemBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TheoryProyect_EdwinL_Source_TheoryProyect_EdwinL_ItemBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
