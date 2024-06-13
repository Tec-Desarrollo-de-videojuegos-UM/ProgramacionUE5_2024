// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheoryProyect_EdwinL/TheoryProyect_EdwinLGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTheoryProyect_EdwinLGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
THEORYPROYECT_EDWINL_API UClass* Z_Construct_UClass_ATheoryProyect_EdwinLGameMode();
THEORYPROYECT_EDWINL_API UClass* Z_Construct_UClass_ATheoryProyect_EdwinLGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_TheoryProyect_EdwinL();
// End Cross Module References

// Begin Class ATheoryProyect_EdwinLGameMode
void ATheoryProyect_EdwinLGameMode::StaticRegisterNativesATheoryProyect_EdwinLGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATheoryProyect_EdwinLGameMode);
UClass* Z_Construct_UClass_ATheoryProyect_EdwinLGameMode_NoRegister()
{
	return ATheoryProyect_EdwinLGameMode::StaticClass();
}
struct Z_Construct_UClass_ATheoryProyect_EdwinLGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TheoryProyect_EdwinLGameMode.h" },
		{ "ModuleRelativePath", "TheoryProyect_EdwinLGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATheoryProyect_EdwinLGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATheoryProyect_EdwinLGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_TheoryProyect_EdwinL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATheoryProyect_EdwinLGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATheoryProyect_EdwinLGameMode_Statics::ClassParams = {
	&ATheoryProyect_EdwinLGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATheoryProyect_EdwinLGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATheoryProyect_EdwinLGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATheoryProyect_EdwinLGameMode()
{
	if (!Z_Registration_Info_UClass_ATheoryProyect_EdwinLGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATheoryProyect_EdwinLGameMode.OuterSingleton, Z_Construct_UClass_ATheoryProyect_EdwinLGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATheoryProyect_EdwinLGameMode.OuterSingleton;
}
template<> THEORYPROYECT_EDWINL_API UClass* StaticClass<ATheoryProyect_EdwinLGameMode>()
{
	return ATheoryProyect_EdwinLGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATheoryProyect_EdwinLGameMode);
ATheoryProyect_EdwinLGameMode::~ATheoryProyect_EdwinLGameMode() {}
// End Class ATheoryProyect_EdwinLGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_TheoryProyect_EdwinL_Source_TheoryProyect_EdwinL_TheoryProyect_EdwinLGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATheoryProyect_EdwinLGameMode, ATheoryProyect_EdwinLGameMode::StaticClass, TEXT("ATheoryProyect_EdwinLGameMode"), &Z_Registration_Info_UClass_ATheoryProyect_EdwinLGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATheoryProyect_EdwinLGameMode), 3589078719U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TheoryProyect_EdwinL_Source_TheoryProyect_EdwinL_TheoryProyect_EdwinLGameMode_h_1774747382(TEXT("/Script/TheoryProyect_EdwinL"),
	Z_CompiledInDeferFile_FID_TheoryProyect_EdwinL_Source_TheoryProyect_EdwinL_TheoryProyect_EdwinLGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TheoryProyect_EdwinL_Source_TheoryProyect_EdwinL_TheoryProyect_EdwinLGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
