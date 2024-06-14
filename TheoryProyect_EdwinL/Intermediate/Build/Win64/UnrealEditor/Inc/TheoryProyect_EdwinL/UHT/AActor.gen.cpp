// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheoryProyect_EdwinL/AActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
THEORYPROYECT_EDWINL_API UClass* Z_Construct_UClass_AAActor();
THEORYPROYECT_EDWINL_API UClass* Z_Construct_UClass_AAActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_TheoryProyect_EdwinL();
// End Cross Module References

// Begin Class AAActor
void AAActor::StaticRegisterNativesAAActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAActor);
UClass* Z_Construct_UClass_AAActor_NoRegister()
{
	return AAActor::StaticClass();
}
struct Z_Construct_UClass_AAActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AActor.h" },
		{ "ModuleRelativePath", "AActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TheoryProyect_EdwinL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAActor_Statics::ClassParams = {
	&AAActor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AAActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAActor()
{
	if (!Z_Registration_Info_UClass_AAActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAActor.OuterSingleton, Z_Construct_UClass_AAActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAActor.OuterSingleton;
}
template<> THEORYPROYECT_EDWINL_API UClass* StaticClass<AAActor>()
{
	return AAActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAActor);
AAActor::~AAActor() {}
// End Class AAActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_githubfacu_Programacion2024_TheoryProyect_EdwinL_Source_TheoryProyect_EdwinL_AActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAActor, AAActor::StaticClass, TEXT("AAActor"), &Z_Registration_Info_UClass_AAActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAActor), 2712826305U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_githubfacu_Programacion2024_TheoryProyect_EdwinL_Source_TheoryProyect_EdwinL_AActor_h_3463901774(TEXT("/Script/TheoryProyect_EdwinL"),
	Z_CompiledInDeferFile_FID_githubfacu_Programacion2024_TheoryProyect_EdwinL_Source_TheoryProyect_EdwinL_AActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_githubfacu_Programacion2024_TheoryProyect_EdwinL_Source_TheoryProyect_EdwinL_AActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
