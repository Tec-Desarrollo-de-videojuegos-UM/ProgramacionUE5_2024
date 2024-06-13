// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheoryProyect_EdwinL/Atributes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtributes() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
THEORYPROYECT_EDWINL_API UClass* Z_Construct_UClass_UAtributes();
THEORYPROYECT_EDWINL_API UClass* Z_Construct_UClass_UAtributes_NoRegister();
UPackage* Z_Construct_UPackage__Script_TheoryProyect_EdwinL();
// End Cross Module References

// Begin Class UAtributes Function Checkhealth
struct Z_Construct_UFunction_UAtributes_Checkhealth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Atributes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtributes_Checkhealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtributes, nullptr, "Checkhealth", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtributes_Checkhealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtributes_Checkhealth_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAtributes_Checkhealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtributes_Checkhealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtributes::execCheckhealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Checkhealth();
	P_NATIVE_END;
}
// End Class UAtributes Function Checkhealth

// Begin Class UAtributes Function Usestamina
struct Z_Construct_UFunction_UAtributes_Usestamina_Statics
{
	struct Atributes_eventUsestamina_Parms
	{
		float Staminatouse;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Atributes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Staminatouse;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtributes_Usestamina_Statics::NewProp_Staminatouse = { "Staminatouse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Atributes_eventUsestamina_Parms, Staminatouse), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAtributes_Usestamina_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Atributes_eventUsestamina_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtributes_Usestamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Atributes_eventUsestamina_Parms), &Z_Construct_UFunction_UAtributes_Usestamina_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtributes_Usestamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtributes_Usestamina_Statics::NewProp_Staminatouse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtributes_Usestamina_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtributes_Usestamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtributes_Usestamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtributes, nullptr, "Usestamina", nullptr, nullptr, Z_Construct_UFunction_UAtributes_Usestamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtributes_Usestamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtributes_Usestamina_Statics::Atributes_eventUsestamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtributes_Usestamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtributes_Usestamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtributes_Usestamina_Statics::Atributes_eventUsestamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtributes_Usestamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtributes_Usestamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtributes::execUsestamina)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Staminatouse);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Usestamina(Z_Param_Staminatouse);
	P_NATIVE_END;
}
// End Class UAtributes Function Usestamina

// Begin Class UAtributes
void UAtributes::StaticRegisterNativesUAtributes()
{
	UClass* Class = UAtributes::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Checkhealth", &UAtributes::execCheckhealth },
		{ "Usestamina", &UAtributes::execUsestamina },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtributes);
UClass* Z_Construct_UClass_UAtributes_NoRegister()
{
	return UAtributes::StaticClass();
}
struct Z_Construct_UClass_UAtributes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Atributes.h" },
		{ "ModuleRelativePath", "Atributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_health_MetaData[] = {
		{ "Category", "Atributes" },
		{ "ModuleRelativePath", "Atributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_stamina_MetaData[] = {
		{ "Category", "Atributes" },
		{ "ModuleRelativePath", "Atributes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_health;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_stamina;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtributes_Checkhealth, "Checkhealth" }, // 3456765884
		{ &Z_Construct_UFunction_UAtributes_Usestamina, "Usestamina" }, // 959547093
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtributes>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtributes_Statics::NewProp_health = { "health", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAtributes, health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_health_MetaData), NewProp_health_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtributes_Statics::NewProp_stamina = { "stamina", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAtributes, stamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_stamina_MetaData), NewProp_stamina_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtributes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtributes_Statics::NewProp_health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtributes_Statics::NewProp_stamina,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAtributes_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAtributes_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_TheoryProyect_EdwinL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAtributes_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtributes_Statics::ClassParams = {
	&UAtributes::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAtributes_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAtributes_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAtributes_Statics::Class_MetaDataParams), Z_Construct_UClass_UAtributes_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAtributes()
{
	if (!Z_Registration_Info_UClass_UAtributes.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtributes.OuterSingleton, Z_Construct_UClass_UAtributes_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAtributes.OuterSingleton;
}
template<> THEORYPROYECT_EDWINL_API UClass* StaticClass<UAtributes>()
{
	return UAtributes::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAtributes);
UAtributes::~UAtributes() {}
// End Class UAtributes

// Begin Registration
struct Z_CompiledInDeferFile_FID_TheoryProyect_EdwinL_Source_TheoryProyect_EdwinL_Atributes_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAtributes, UAtributes::StaticClass, TEXT("UAtributes"), &Z_Registration_Info_UClass_UAtributes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtributes), 2968419967U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TheoryProyect_EdwinL_Source_TheoryProyect_EdwinL_Atributes_h_1720556364(TEXT("/Script/TheoryProyect_EdwinL"),
	Z_CompiledInDeferFile_FID_TheoryProyect_EdwinL_Source_TheoryProyect_EdwinL_Atributes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TheoryProyect_EdwinL_Source_TheoryProyect_EdwinL_Atributes_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
