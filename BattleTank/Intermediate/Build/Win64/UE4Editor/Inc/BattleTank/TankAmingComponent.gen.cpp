// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleTank/Public/TankAmingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankAmingComponent() {}
// Cross Module References
	BATTLETANK_API UClass* Z_Construct_UClass_UTankAmingComponent_NoRegister();
	BATTLETANK_API UClass* Z_Construct_UClass_UTankAmingComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_BattleTank();
// End Cross Module References
	void UTankAmingComponent::StaticRegisterNativesUTankAmingComponent()
	{
	}
	UClass* Z_Construct_UClass_UTankAmingComponent_NoRegister()
	{
		return UTankAmingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTankAmingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTankAmingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BattleTank,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTankAmingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TankAmingComponent.h" },
		{ "ModuleRelativePath", "Public/TankAmingComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTankAmingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTankAmingComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTankAmingComponent_Statics::ClassParams = {
		&UTankAmingComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		nullptr, 0,
		nullptr, 0,
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UTankAmingComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTankAmingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTankAmingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTankAmingComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTankAmingComponent, 3701806480);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTankAmingComponent(Z_Construct_UClass_UTankAmingComponent, &UTankAmingComponent::StaticClass, TEXT("/Script/BattleTank"), TEXT("UTankAmingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTankAmingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
