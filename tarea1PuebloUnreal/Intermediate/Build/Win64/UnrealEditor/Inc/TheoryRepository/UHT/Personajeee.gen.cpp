// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheoryRepository/Public/Personajeee.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePersonajeee() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	THEORYREPOSITORY_API UClass* Z_Construct_UClass_APersonajeee();
	THEORYREPOSITORY_API UClass* Z_Construct_UClass_APersonajeee_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TheoryRepository();
// End Cross Module References
	void APersonajeee::StaticRegisterNativesAPersonajeee()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APersonajeee);
	UClass* Z_Construct_UClass_APersonajeee_NoRegister()
	{
		return APersonajeee::StaticClass();
	}
	struct Z_Construct_UClass_APersonajeee_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vidaMaxima_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_vidaMaxima;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vidaActual_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_vidaActual;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APersonajeee_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TheoryRepository,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APersonajeee_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APersonajeee_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Personajeee.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Personajeee.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APersonajeee_Statics::NewProp_vidaMaxima_MetaData[] = {
		{ "Category", "Estadisticas" },
		{ "ModuleRelativePath", "Public/Personajeee.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APersonajeee_Statics::NewProp_vidaMaxima = { "vidaMaxima", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APersonajeee, vidaMaxima), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APersonajeee_Statics::NewProp_vidaMaxima_MetaData), Z_Construct_UClass_APersonajeee_Statics::NewProp_vidaMaxima_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APersonajeee_Statics::NewProp_vidaActual_MetaData[] = {
		{ "Category", "Estadisticas" },
		{ "ModuleRelativePath", "Public/Personajeee.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APersonajeee_Statics::NewProp_vidaActual = { "vidaActual", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APersonajeee, vidaActual), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APersonajeee_Statics::NewProp_vidaActual_MetaData), Z_Construct_UClass_APersonajeee_Statics::NewProp_vidaActual_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APersonajeee_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APersonajeee_Statics::NewProp_vidaMaxima,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APersonajeee_Statics::NewProp_vidaActual,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APersonajeee_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APersonajeee>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APersonajeee_Statics::ClassParams = {
		&APersonajeee::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APersonajeee_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APersonajeee_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APersonajeee_Statics::Class_MetaDataParams), Z_Construct_UClass_APersonajeee_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APersonajeee_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APersonajeee()
	{
		if (!Z_Registration_Info_UClass_APersonajeee.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APersonajeee.OuterSingleton, Z_Construct_UClass_APersonajeee_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APersonajeee.OuterSingleton;
	}
	template<> THEORYREPOSITORY_API UClass* StaticClass<APersonajeee>()
	{
		return APersonajeee::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APersonajeee);
	APersonajeee::~APersonajeee() {}
	struct Z_CompiledInDeferFile_FID_Programas_Videojuegos_Repositorios_proyectos_Programacion2024_tarea1PuebloUnreal_Source_TheoryRepository_Public_Personajeee_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Programas_Videojuegos_Repositorios_proyectos_Programacion2024_tarea1PuebloUnreal_Source_TheoryRepository_Public_Personajeee_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APersonajeee, APersonajeee::StaticClass, TEXT("APersonajeee"), &Z_Registration_Info_UClass_APersonajeee, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APersonajeee), 1209669896U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Programas_Videojuegos_Repositorios_proyectos_Programacion2024_tarea1PuebloUnreal_Source_TheoryRepository_Public_Personajeee_h_3338932698(TEXT("/Script/TheoryRepository"),
		Z_CompiledInDeferFile_FID_Programas_Videojuegos_Repositorios_proyectos_Programacion2024_tarea1PuebloUnreal_Source_TheoryRepository_Public_Personajeee_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Programas_Videojuegos_Repositorios_proyectos_Programacion2024_tarea1PuebloUnreal_Source_TheoryRepository_Public_Personajeee_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
