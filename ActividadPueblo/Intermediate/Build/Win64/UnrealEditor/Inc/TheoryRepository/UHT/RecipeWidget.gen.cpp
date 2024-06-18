// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheoryRepository/RecipeWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRecipeWidget() {}
// Cross Module References
	THEORYREPOSITORY_API UClass* Z_Construct_UClass_URecipeWidget();
	THEORYREPOSITORY_API UClass* Z_Construct_UClass_URecipeWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUniformGridPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_TheoryRepository();
// End Cross Module References
	DEFINE_FUNCTION(URecipeWidget::execAddIngredient)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ingredientName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddIngredient(Z_Param_ingredientName,Z_Param_Quantity);
		P_NATIVE_END;
	}
	void URecipeWidget::StaticRegisterNativesURecipeWidget()
	{
		UClass* Class = URecipeWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddIngredient", &URecipeWidget::execAddIngredient },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URecipeWidget_AddIngredient_Statics
	{
		struct RecipeWidget_eventAddIngredient_Parms
		{
			FString ingredientName;
			int32 Quantity;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ingredientName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URecipeWidget_AddIngredient_Statics::NewProp_ingredientName = { "ingredientName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RecipeWidget_eventAddIngredient_Parms, ingredientName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URecipeWidget_AddIngredient_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RecipeWidget_eventAddIngredient_Parms, Quantity), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URecipeWidget_AddIngredient_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URecipeWidget_AddIngredient_Statics::NewProp_ingredientName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URecipeWidget_AddIngredient_Statics::NewProp_Quantity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URecipeWidget_AddIngredient_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RecipeWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URecipeWidget_AddIngredient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URecipeWidget, nullptr, "AddIngredient", nullptr, nullptr, Z_Construct_UFunction_URecipeWidget_AddIngredient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URecipeWidget_AddIngredient_Statics::PropPointers), sizeof(Z_Construct_UFunction_URecipeWidget_AddIngredient_Statics::RecipeWidget_eventAddIngredient_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URecipeWidget_AddIngredient_Statics::Function_MetaDataParams), Z_Construct_UFunction_URecipeWidget_AddIngredient_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URecipeWidget_AddIngredient_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URecipeWidget_AddIngredient_Statics::RecipeWidget_eventAddIngredient_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URecipeWidget_AddIngredient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URecipeWidget_AddIngredient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URecipeWidget);
	UClass* Z_Construct_UClass_URecipeWidget_NoRegister()
	{
		return URecipeWidget::StaticClass();
	}
	struct Z_Construct_UClass_URecipeWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecipeGrid_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RecipeGrid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddIngredientButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AddIngredientButton;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URecipeWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_TheoryRepository,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URecipeWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_URecipeWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URecipeWidget_AddIngredient, "AddIngredient" }, // 180636536
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URecipeWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URecipeWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "RecipeWidget.h" },
		{ "ModuleRelativePath", "RecipeWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URecipeWidget_Statics::NewProp_RecipeGrid_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "RecipeWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RecipeWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URecipeWidget_Statics::NewProp_RecipeGrid = { "RecipeGrid", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URecipeWidget, RecipeGrid), Z_Construct_UClass_UUniformGridPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URecipeWidget_Statics::NewProp_RecipeGrid_MetaData), Z_Construct_UClass_URecipeWidget_Statics::NewProp_RecipeGrid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URecipeWidget_Statics::NewProp_AddIngredientButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "RecipeWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RecipeWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URecipeWidget_Statics::NewProp_AddIngredientButton = { "AddIngredientButton", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URecipeWidget, AddIngredientButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URecipeWidget_Statics::NewProp_AddIngredientButton_MetaData), Z_Construct_UClass_URecipeWidget_Statics::NewProp_AddIngredientButton_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URecipeWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URecipeWidget_Statics::NewProp_RecipeGrid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URecipeWidget_Statics::NewProp_AddIngredientButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URecipeWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URecipeWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URecipeWidget_Statics::ClassParams = {
		&URecipeWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URecipeWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URecipeWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URecipeWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_URecipeWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URecipeWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_URecipeWidget()
	{
		if (!Z_Registration_Info_UClass_URecipeWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URecipeWidget.OuterSingleton, Z_Construct_UClass_URecipeWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URecipeWidget.OuterSingleton;
	}
	template<> THEORYREPOSITORY_API UClass* StaticClass<URecipeWidget>()
	{
		return URecipeWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URecipeWidget);
	URecipeWidget::~URecipeWidget() {}
	struct Z_CompiledInDeferFile_FID_Programas_Videojuegos_Repositorios_proyectos_Programacion2024_tarea1PuebloUnreal_Source_TheoryRepository_RecipeWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Programas_Videojuegos_Repositorios_proyectos_Programacion2024_tarea1PuebloUnreal_Source_TheoryRepository_RecipeWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URecipeWidget, URecipeWidget::StaticClass, TEXT("URecipeWidget"), &Z_Registration_Info_UClass_URecipeWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URecipeWidget), 1813886285U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Programas_Videojuegos_Repositorios_proyectos_Programacion2024_tarea1PuebloUnreal_Source_TheoryRepository_RecipeWidget_h_542312363(TEXT("/Script/TheoryRepository"),
		Z_CompiledInDeferFile_FID_Programas_Videojuegos_Repositorios_proyectos_Programacion2024_tarea1PuebloUnreal_Source_TheoryRepository_RecipeWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Programas_Videojuegos_Repositorios_proyectos_Programacion2024_tarea1PuebloUnreal_Source_TheoryRepository_RecipeWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
