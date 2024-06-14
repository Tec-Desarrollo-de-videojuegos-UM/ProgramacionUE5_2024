// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheoryProyect_EdwinL/Inventory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventory() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
THEORYPROYECT_EDWINL_API UClass* Z_Construct_UClass_UInventory();
THEORYPROYECT_EDWINL_API UClass* Z_Construct_UClass_UInventory_NoRegister();
UPackage* Z_Construct_UPackage__Script_TheoryProyect_EdwinL();
// End Cross Module References

// Begin Class UInventory Function AddItemToinventory
struct Z_Construct_UFunction_UInventory_AddItemToinventory_Statics
{
	struct Inventory_eventAddItemToinventory_Parms
	{
		FString itemname;
		int32 itemamount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_itemname;
	static const UECodeGen_Private::FIntPropertyParams NewProp_itemamount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInventory_AddItemToinventory_Statics::NewProp_itemname = { "itemname", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventAddItemToinventory_Parms, itemname), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_AddItemToinventory_Statics::NewProp_itemamount = { "itemamount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventAddItemToinventory_Parms, itemamount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_AddItemToinventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_AddItemToinventory_Statics::NewProp_itemname,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_AddItemToinventory_Statics::NewProp_itemamount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_AddItemToinventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_AddItemToinventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "AddItemToinventory", nullptr, nullptr, Z_Construct_UFunction_UInventory_AddItemToinventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_AddItemToinventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventory_AddItemToinventory_Statics::Inventory_eventAddItemToinventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_AddItemToinventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_AddItemToinventory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventory_AddItemToinventory_Statics::Inventory_eventAddItemToinventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_AddItemToinventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_AddItemToinventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execAddItemToinventory)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_itemname);
	P_GET_PROPERTY(FIntProperty,Z_Param_itemamount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddItemToinventory(Z_Param_itemname,Z_Param_itemamount);
	P_NATIVE_END;
}
// End Class UInventory Function AddItemToinventory

// Begin Class UInventory
void UInventory::StaticRegisterNativesUInventory()
{
	UClass* Class = UInventory::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddItemToinventory", &UInventory::execAddItemToinventory },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventory);
UClass* Z_Construct_UClass_UInventory_NoRegister()
{
	return UInventory::StaticClass();
}
struct Z_Construct_UClass_UInventory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Inventory.h" },
		{ "ModuleRelativePath", "Inventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemNameList_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Inventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemAmountList_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemNameList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemNameList;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemAmountList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemAmountList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventory_AddItemToinventory, "AddItemToinventory" }, // 3792572967
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_ItemNameList_Inner = { "ItemNameList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_ItemNameList = { "ItemNameList", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventory, ItemNameList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemNameList_MetaData), NewProp_ItemNameList_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_ItemAmountList_Inner = { "ItemAmountList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_ItemAmountList = { "ItemAmountList", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventory, ItemAmountList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemAmountList_MetaData), NewProp_ItemAmountList_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_ItemNameList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_ItemNameList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_ItemAmountList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_ItemAmountList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_TheoryProyect_EdwinL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventory_Statics::ClassParams = {
	&UInventory::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInventory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventory()
{
	if (!Z_Registration_Info_UClass_UInventory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventory.OuterSingleton, Z_Construct_UClass_UInventory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventory.OuterSingleton;
}
template<> THEORYPROYECT_EDWINL_API UClass* StaticClass<UInventory>()
{
	return UInventory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventory);
UInventory::~UInventory() {}
// End Class UInventory

// Begin Registration
struct Z_CompiledInDeferFile_FID_githubfacu_Programacion2024_TheoryProyect_EdwinL_Source_TheoryProyect_EdwinL_Inventory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventory, UInventory::StaticClass, TEXT("UInventory"), &Z_Registration_Info_UClass_UInventory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventory), 1278710310U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_githubfacu_Programacion2024_TheoryProyect_EdwinL_Source_TheoryProyect_EdwinL_Inventory_h_4240391839(TEXT("/Script/TheoryProyect_EdwinL"),
	Z_CompiledInDeferFile_FID_githubfacu_Programacion2024_TheoryProyect_EdwinL_Source_TheoryProyect_EdwinL_Inventory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_githubfacu_Programacion2024_TheoryProyect_EdwinL_Source_TheoryProyect_EdwinL_Inventory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
