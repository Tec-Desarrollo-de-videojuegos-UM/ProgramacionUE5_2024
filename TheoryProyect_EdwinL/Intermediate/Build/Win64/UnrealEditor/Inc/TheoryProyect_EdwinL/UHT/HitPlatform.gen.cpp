// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheoryProyect_EdwinL/HitPlatform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHitPlatform() {}

// Begin Cross Module References
THEORYPROYECT_EDWINL_API UClass* Z_Construct_UClass_AAActor();
THEORYPROYECT_EDWINL_API UClass* Z_Construct_UClass_AHitPlatform();
THEORYPROYECT_EDWINL_API UClass* Z_Construct_UClass_AHitPlatform_NoRegister();
UPackage* Z_Construct_UPackage__Script_TheoryProyect_EdwinL();
// End Cross Module References

// Begin Class AHitPlatform
void AHitPlatform::StaticRegisterNativesAHitPlatform()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHitPlatform);
UClass* Z_Construct_UClass_AHitPlatform_NoRegister()
{
	return AHitPlatform::StaticClass();
}
struct Z_Construct_UClass_AHitPlatform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HitPlatform.h" },
		{ "ModuleRelativePath", "HitPlatform.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHitPlatform>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AHitPlatform_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TheoryProyect_EdwinL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHitPlatform_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHitPlatform_Statics::ClassParams = {
	&AHitPlatform::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHitPlatform_Statics::Class_MetaDataParams), Z_Construct_UClass_AHitPlatform_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHitPlatform()
{
	if (!Z_Registration_Info_UClass_AHitPlatform.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHitPlatform.OuterSingleton, Z_Construct_UClass_AHitPlatform_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHitPlatform.OuterSingleton;
}
template<> THEORYPROYECT_EDWINL_API UClass* StaticClass<AHitPlatform>()
{
	return AHitPlatform::StaticClass();
}
AHitPlatform::AHitPlatform() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHitPlatform);
AHitPlatform::~AHitPlatform() {}
// End Class AHitPlatform

// Begin Registration
struct Z_CompiledInDeferFile_FID_githubfacu_Programacion2024_TheoryProyect_EdwinL_Source_TheoryProyect_EdwinL_HitPlatform_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHitPlatform, AHitPlatform::StaticClass, TEXT("AHitPlatform"), &Z_Registration_Info_UClass_AHitPlatform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHitPlatform), 899925843U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_githubfacu_Programacion2024_TheoryProyect_EdwinL_Source_TheoryProyect_EdwinL_HitPlatform_h_1814140507(TEXT("/Script/TheoryProyect_EdwinL"),
	Z_CompiledInDeferFile_FID_githubfacu_Programacion2024_TheoryProyect_EdwinL_Source_TheoryProyect_EdwinL_HitPlatform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_githubfacu_Programacion2024_TheoryProyect_EdwinL_Source_TheoryProyect_EdwinL_HitPlatform_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
