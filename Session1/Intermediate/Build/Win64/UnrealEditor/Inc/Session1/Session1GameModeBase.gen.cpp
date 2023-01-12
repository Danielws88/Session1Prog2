// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Session1/Session1GameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSession1GameModeBase() {}
// Cross Module References
	SESSION1_API UClass* Z_Construct_UClass_ASession1GameModeBase_NoRegister();
	SESSION1_API UClass* Z_Construct_UClass_ASession1GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Session1();
// End Cross Module References
	void ASession1GameModeBase::StaticRegisterNativesASession1GameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASession1GameModeBase);
	UClass* Z_Construct_UClass_ASession1GameModeBase_NoRegister()
	{
		return ASession1GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASession1GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASession1GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Session1,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASession1GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Session1GameModeBase.h" },
		{ "ModuleRelativePath", "Session1GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASession1GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASession1GameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASession1GameModeBase_Statics::ClassParams = {
		&ASession1GameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASession1GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASession1GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASession1GameModeBase()
	{
		if (!Z_Registration_Info_UClass_ASession1GameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASession1GameModeBase.OuterSingleton, Z_Construct_UClass_ASession1GameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASession1GameModeBase.OuterSingleton;
	}
	template<> SESSION1_API UClass* StaticClass<ASession1GameModeBase>()
	{
		return ASession1GameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASession1GameModeBase);
	struct Z_CompiledInDeferFile_FID_Session1_Source_Session1_Session1GameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Session1_Source_Session1_Session1GameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASession1GameModeBase, ASession1GameModeBase::StaticClass, TEXT("ASession1GameModeBase"), &Z_Registration_Info_UClass_ASession1GameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASession1GameModeBase), 4772402U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Session1_Source_Session1_Session1GameModeBase_h_1314052126(TEXT("/Script/Session1"),
		Z_CompiledInDeferFile_FID_Session1_Source_Session1_Session1GameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Session1_Source_Session1_Session1GameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
