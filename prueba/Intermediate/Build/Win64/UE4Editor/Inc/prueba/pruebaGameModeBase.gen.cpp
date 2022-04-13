// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "prueba/pruebaGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodepruebaGameModeBase() {}
// Cross Module References
	PRUEBA_API UClass* Z_Construct_UClass_ApruebaGameModeBase_NoRegister();
	PRUEBA_API UClass* Z_Construct_UClass_ApruebaGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_prueba();
// End Cross Module References
	void ApruebaGameModeBase::StaticRegisterNativesApruebaGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ApruebaGameModeBase_NoRegister()
	{
		return ApruebaGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ApruebaGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ApruebaGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_prueba,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ApruebaGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "pruebaGameModeBase.h" },
		{ "ModuleRelativePath", "pruebaGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ApruebaGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ApruebaGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ApruebaGameModeBase_Statics::ClassParams = {
		&ApruebaGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ApruebaGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ApruebaGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ApruebaGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ApruebaGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ApruebaGameModeBase, 3348596080);
	template<> PRUEBA_API UClass* StaticClass<ApruebaGameModeBase>()
	{
		return ApruebaGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ApruebaGameModeBase(Z_Construct_UClass_ApruebaGameModeBase, &ApruebaGameModeBase::StaticClass, TEXT("/Script/prueba"), TEXT("ApruebaGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ApruebaGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
