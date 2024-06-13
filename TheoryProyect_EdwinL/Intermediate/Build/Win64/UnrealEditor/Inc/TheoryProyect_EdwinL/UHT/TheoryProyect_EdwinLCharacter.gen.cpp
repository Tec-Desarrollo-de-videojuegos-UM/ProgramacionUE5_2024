// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheoryProyect_EdwinL/TheoryProyect_EdwinLCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTheoryProyect_EdwinLCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
THEORYPROYECT_EDWINL_API UClass* Z_Construct_UClass_ATheoryProyect_EdwinLCharacter();
THEORYPROYECT_EDWINL_API UClass* Z_Construct_UClass_ATheoryProyect_EdwinLCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_TheoryProyect_EdwinL();
// End Cross Module References

// Begin Class ATheoryProyect_EdwinLCharacter
void ATheoryProyect_EdwinLCharacter::StaticRegisterNativesATheoryProyect_EdwinLCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATheoryProyect_EdwinLCharacter);
UClass* Z_Construct_UClass_ATheoryProyect_EdwinLCharacter_NoRegister()
{
	return ATheoryProyect_EdwinLCharacter::StaticClass();
}
struct Z_Construct_UClass_ATheoryProyect_EdwinLCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TheoryProyect_EdwinLCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "TheoryProyect_EdwinLCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopDownCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Top down camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TheoryProyect_EdwinLCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Top down camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera above the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TheoryProyect_EdwinLCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera above the character" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TopDownCameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATheoryProyect_EdwinLCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATheoryProyect_EdwinLCharacter_Statics::NewProp_TopDownCameraComponent = { "TopDownCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATheoryProyect_EdwinLCharacter, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopDownCameraComponent_MetaData), NewProp_TopDownCameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATheoryProyect_EdwinLCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATheoryProyect_EdwinLCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATheoryProyect_EdwinLCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheoryProyect_EdwinLCharacter_Statics::NewProp_TopDownCameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheoryProyect_EdwinLCharacter_Statics::NewProp_CameraBoom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATheoryProyect_EdwinLCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATheoryProyect_EdwinLCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_TheoryProyect_EdwinL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATheoryProyect_EdwinLCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATheoryProyect_EdwinLCharacter_Statics::ClassParams = {
	&ATheoryProyect_EdwinLCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATheoryProyect_EdwinLCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATheoryProyect_EdwinLCharacter_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATheoryProyect_EdwinLCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ATheoryProyect_EdwinLCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATheoryProyect_EdwinLCharacter()
{
	if (!Z_Registration_Info_UClass_ATheoryProyect_EdwinLCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATheoryProyect_EdwinLCharacter.OuterSingleton, Z_Construct_UClass_ATheoryProyect_EdwinLCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATheoryProyect_EdwinLCharacter.OuterSingleton;
}
template<> THEORYPROYECT_EDWINL_API UClass* StaticClass<ATheoryProyect_EdwinLCharacter>()
{
	return ATheoryProyect_EdwinLCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATheoryProyect_EdwinLCharacter);
ATheoryProyect_EdwinLCharacter::~ATheoryProyect_EdwinLCharacter() {}
// End Class ATheoryProyect_EdwinLCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_TheoryProyect_EdwinL_Source_TheoryProyect_EdwinL_TheoryProyect_EdwinLCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATheoryProyect_EdwinLCharacter, ATheoryProyect_EdwinLCharacter::StaticClass, TEXT("ATheoryProyect_EdwinLCharacter"), &Z_Registration_Info_UClass_ATheoryProyect_EdwinLCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATheoryProyect_EdwinLCharacter), 3735329328U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TheoryProyect_EdwinL_Source_TheoryProyect_EdwinL_TheoryProyect_EdwinLCharacter_h_4285243839(TEXT("/Script/TheoryProyect_EdwinL"),
	Z_CompiledInDeferFile_FID_TheoryProyect_EdwinL_Source_TheoryProyect_EdwinL_TheoryProyect_EdwinLCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TheoryProyect_EdwinL_Source_TheoryProyect_EdwinL_TheoryProyect_EdwinLCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
