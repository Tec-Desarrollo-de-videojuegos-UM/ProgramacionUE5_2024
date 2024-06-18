// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheoryRepository/Public/Personaje.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePersonaje() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	THEORYREPOSITORY_API UClass* Z_Construct_UClass_APersonaje();
	THEORYREPOSITORY_API UClass* Z_Construct_UClass_APersonaje_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TheoryRepository();
// End Cross Module References
	void APersonaje::StaticRegisterNativesAPersonaje()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APersonaje);
	UClass* Z_Construct_UClass_APersonaje_NoRegister()
	{
		return APersonaje::StaticClass();
	}
	struct Z_Construct_UClass_APersonaje_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APersonaje_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TheoryRepository,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APersonaje_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APersonaje_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Personaje.h" },
		{ "ModuleRelativePath", "Public/Personaje.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APersonaje_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APersonaje>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APersonaje_Statics::ClassParams = {
		&APersonaje::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APersonaje_Statics::Class_MetaDataParams), Z_Construct_UClass_APersonaje_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_APersonaje()
	{
		if (!Z_Registration_Info_UClass_APersonaje.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APersonaje.OuterSingleton, Z_Construct_UClass_APersonaje_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APersonaje.OuterSingleton;
	}
	template<> THEORYREPOSITORY_API UClass* StaticClass<APersonaje>()
	{
		return APersonaje::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APersonaje);
	APersonaje::~APersonaje() {}
	struct Z_CompiledInDeferFile_FID_Programas_Videojuegos_Repositorios_proyectos_Programacion2024_tarea1PuebloUnreal_Source_TheoryRepository_Public_Personaje_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Programas_Videojuegos_Repositorios_proyectos_Programacion2024_tarea1PuebloUnreal_Source_TheoryRepository_Public_Personaje_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APersonaje, APersonaje::StaticClass, TEXT("APersonaje"), &Z_Registration_Info_UClass_APersonaje, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APersonaje), 2406547916U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Programas_Videojuegos_Repositorios_proyectos_Programacion2024_tarea1PuebloUnreal_Source_TheoryRepository_Public_Personaje_h_1110055602(TEXT("/Script/TheoryRepository"),
		Z_CompiledInDeferFile_FID_Programas_Videojuegos_Repositorios_proyectos_Programacion2024_tarea1PuebloUnreal_Source_TheoryRepository_Public_Personaje_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Programas_Videojuegos_Repositorios_proyectos_Programacion2024_tarea1PuebloUnreal_Source_TheoryRepository_Public_Personaje_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
