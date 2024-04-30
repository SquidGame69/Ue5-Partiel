// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JaiUnEspoir/Public/Actor/Target.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTarget() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	JAIUNESPOIR_API UClass* Z_Construct_UClass_ATarget();
	JAIUNESPOIR_API UClass* Z_Construct_UClass_ATarget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_JaiUnEspoir();
// End Cross Module References
	void ATarget::StaticRegisterNativesATarget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATarget);
	UClass* Z_Construct_UClass_ATarget_NoRegister()
	{
		return ATarget::StaticClass();
	}
	struct Z_Construct_UClass_ATarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootScene_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RootScene;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_JaiUnEspoir,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATarget_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATarget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/Target.h" },
		{ "ModuleRelativePath", "Public/Actor/Target.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATarget_Statics::NewProp_RootScene_MetaData[] = {
		{ "Category", "MovingTarget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/Target.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATarget_Statics::NewProp_RootScene = { "RootScene", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATarget, RootScene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATarget_Statics::NewProp_RootScene_MetaData), Z_Construct_UClass_ATarget_Statics::NewProp_RootScene_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATarget_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "MovingTarget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/Target.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATarget_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATarget, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATarget_Statics::NewProp_Mesh_MetaData), Z_Construct_UClass_ATarget_Statics::NewProp_Mesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATarget_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "MovingTarget" },
		{ "ModuleRelativePath", "Public/Actor/Target.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000815, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATarget, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATarget_Statics::NewProp_Target_MetaData), Z_Construct_UClass_ATarget_Statics::NewProp_Target_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATarget_Statics::NewProp_RootScene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATarget_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATarget_Statics::NewProp_Target,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATarget_Statics::ClassParams = {
		&ATarget::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATarget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATarget_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATarget_Statics::Class_MetaDataParams), Z_Construct_UClass_ATarget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATarget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATarget()
	{
		if (!Z_Registration_Info_UClass_ATarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATarget.OuterSingleton, Z_Construct_UClass_ATarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATarget.OuterSingleton;
	}
	template<> JAIUNESPOIR_API UClass* StaticClass<ATarget>()
	{
		return ATarget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATarget);
	ATarget::~ATarget() {}
	struct Z_CompiledInDeferFile_FID_Users_echameau_Documents_Unreal_Projects_JaiUnEspoir_Source_JaiUnEspoir_Public_Actor_Target_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_echameau_Documents_Unreal_Projects_JaiUnEspoir_Source_JaiUnEspoir_Public_Actor_Target_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATarget, ATarget::StaticClass, TEXT("ATarget"), &Z_Registration_Info_UClass_ATarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATarget), 917480459U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_echameau_Documents_Unreal_Projects_JaiUnEspoir_Source_JaiUnEspoir_Public_Actor_Target_h_730406042(TEXT("/Script/JaiUnEspoir"),
		Z_CompiledInDeferFile_FID_Users_echameau_Documents_Unreal_Projects_JaiUnEspoir_Source_JaiUnEspoir_Public_Actor_Target_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_echameau_Documents_Unreal_Projects_JaiUnEspoir_Source_JaiUnEspoir_Public_Actor_Target_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
