// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheoryProyect_EdwinL/MyItemBaseDerivated.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyItemBaseDerivated() {}

// Begin Cross Module References
THEORYPROYECT_EDWINL_API UClass* Z_Construct_UClass_AItemBase();
THEORYPROYECT_EDWINL_API UClass* Z_Construct_UClass_AMyItemBaseDerivated();
THEORYPROYECT_EDWINL_API UClass* Z_Construct_UClass_AMyItemBaseDerivated_NoRegister();
UPackage* Z_Construct_UPackage__Script_TheoryProyect_EdwinL();
// End Cross Module References

// Begin Class AMyItemBaseDerivated
void AMyItemBaseDerivated::StaticRegisterNativesAMyItemBaseDerivated()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyItemBaseDerivated);
UClass* Z_Construct_UClass_AMyItemBaseDerivated_NoRegister()
{
	return AMyItemBaseDerivated::StaticClass();
}
struct Z_Construct_UClass_AMyItemBaseDerivated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyItemBaseDerivated.h" },
		{ "ModuleRelativePath", "MyItemBaseDerivated.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyItemBaseDerivated>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyItemBaseDerivated_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AItemBase,
	(UObject* (*)())Z_Construct_UPackage__Script_TheoryProyect_EdwinL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyItemBaseDerivated_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyItemBaseDerivated_Statics::ClassParams = {
	&AMyItemBaseDerivated::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyItemBaseDerivated_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyItemBaseDerivated_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyItemBaseDerivated()
{
	if (!Z_Registration_Info_UClass_AMyItemBaseDerivated.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyItemBaseDerivated.OuterSingleton, Z_Construct_UClass_AMyItemBaseDerivated_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyItemBaseDerivated.OuterSingleton;
}
template<> THEORYPROYECT_EDWINL_API UClass* StaticClass<AMyItemBaseDerivated>()
{
	return AMyItemBaseDerivated::StaticClass();
}
AMyItemBaseDerivated::AMyItemBaseDerivated() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyItemBaseDerivated);
AMyItemBaseDerivated::~AMyItemBaseDerivated() {}
// End Class AMyItemBaseDerivated

// Begin Registration
struct Z_CompiledInDeferFile_FID_TheoryProyect_EdwinL_Source_TheoryProyect_EdwinL_MyItemBaseDerivated_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyItemBaseDerivated, AMyItemBaseDerivated::StaticClass, TEXT("AMyItemBaseDerivated"), &Z_Registration_Info_UClass_AMyItemBaseDerivated, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyItemBaseDerivated), 4022865532U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TheoryProyect_EdwinL_Source_TheoryProyect_EdwinL_MyItemBaseDerivated_h_2155433498(TEXT("/Script/TheoryProyect_EdwinL"),
	Z_CompiledInDeferFile_FID_TheoryProyect_EdwinL_Source_TheoryProyect_EdwinL_MyItemBaseDerivated_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TheoryProyect_EdwinL_Source_TheoryProyect_EdwinL_MyItemBaseDerivated_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
