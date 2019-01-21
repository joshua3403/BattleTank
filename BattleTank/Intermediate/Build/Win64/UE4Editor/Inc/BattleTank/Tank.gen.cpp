// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleTank/Public/Tank.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTank() {}
// Cross Module References
	BATTLETANK_API UClass* Z_Construct_UClass_ATank_NoRegister();
	BATTLETANK_API UClass* Z_Construct_UClass_ATank();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_BattleTank();
	BATTLETANK_API UFunction* Z_Construct_UFunction_ATank_Fire();
	BATTLETANK_API UFunction* Z_Construct_UFunction_ATank_SetBarrelReference();
	BATTLETANK_API UClass* Z_Construct_UClass_UTankBarrel_NoRegister();
	BATTLETANK_API UFunction* Z_Construct_UFunction_ATank_SetTurretReference();
	BATTLETANK_API UClass* Z_Construct_UClass_UTankTurret_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	BATTLETANK_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
// End Cross Module References
	void ATank::StaticRegisterNativesATank()
	{
		UClass* Class = ATank::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Fire", &ATank::execFire },
			{ "SetBarrelReference", &ATank::execSetBarrelReference },
			{ "SetTurretReference", &ATank::execSetTurretReference },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATank_Fire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATank_Fire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tank.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATank_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATank, "Fire", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATank_Fire_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATank_Fire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATank_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATank_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATank_SetBarrelReference_Statics
	{
		struct Tank_eventSetBarrelReference_Parms
		{
			UTankBarrel* BarrelToSet;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarrelToSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BarrelToSet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATank_SetBarrelReference_Statics::NewProp_BarrelToSet_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATank_SetBarrelReference_Statics::NewProp_BarrelToSet = { UE4CodeGen_Private::EPropertyClass::Object, "BarrelToSet", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(Tank_eventSetBarrelReference_Parms, BarrelToSet), Z_Construct_UClass_UTankBarrel_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATank_SetBarrelReference_Statics::NewProp_BarrelToSet_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ATank_SetBarrelReference_Statics::NewProp_BarrelToSet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATank_SetBarrelReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATank_SetBarrelReference_Statics::NewProp_BarrelToSet,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATank_SetBarrelReference_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/Tank.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATank_SetBarrelReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATank, "SetBarrelReference", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Tank_eventSetBarrelReference_Parms), Z_Construct_UFunction_ATank_SetBarrelReference_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATank_SetBarrelReference_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATank_SetBarrelReference_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATank_SetBarrelReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATank_SetBarrelReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATank_SetBarrelReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATank_SetTurretReference_Statics
	{
		struct Tank_eventSetTurretReference_Parms
		{
			UTankTurret* BarrelToSet;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarrelToSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BarrelToSet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATank_SetTurretReference_Statics::NewProp_BarrelToSet_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATank_SetTurretReference_Statics::NewProp_BarrelToSet = { UE4CodeGen_Private::EPropertyClass::Object, "BarrelToSet", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(Tank_eventSetTurretReference_Parms, BarrelToSet), Z_Construct_UClass_UTankTurret_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATank_SetTurretReference_Statics::NewProp_BarrelToSet_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ATank_SetTurretReference_Statics::NewProp_BarrelToSet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATank_SetTurretReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATank_SetTurretReference_Statics::NewProp_BarrelToSet,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATank_SetTurretReference_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/Tank.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATank_SetTurretReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATank, "SetTurretReference", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Tank_eventSetTurretReference_Parms), Z_Construct_UFunction_ATank_SetTurretReference_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATank_SetTurretReference_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATank_SetTurretReference_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATank_SetTurretReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATank_SetTurretReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATank_SetTurretReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATank_NoRegister()
	{
		return ATank::StaticClass();
	}
	struct Z_Construct_UClass_ATank_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadTimeInSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReloadTimeInSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LaunchSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileBlueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileBlueprint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATank_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_BattleTank,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATank_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATank_Fire, "Fire" }, // 923849977
		{ &Z_Construct_UFunction_ATank_SetBarrelReference, "SetBarrelReference" }, // 1357184145
		{ &Z_Construct_UFunction_ATank_SetTurretReference, "SetTurretReference" }, // 3758476153
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATank_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Tank.h" },
		{ "ModuleRelativePath", "Public/Tank.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATank_Statics::NewProp_ReloadTimeInSeconds_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/Tank.h" },
		{ "ToolTip", "TODO find Sensible default" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATank_Statics::NewProp_ReloadTimeInSeconds = { UE4CodeGen_Private::EPropertyClass::Float, "ReloadTimeInSeconds", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010001, 1, nullptr, STRUCT_OFFSET(ATank, ReloadTimeInSeconds), METADATA_PARAMS(Z_Construct_UClass_ATank_Statics::NewProp_ReloadTimeInSeconds_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATank_Statics::NewProp_ReloadTimeInSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATank_Statics::NewProp_LaunchSpeed_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/Tank.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATank_Statics::NewProp_LaunchSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "LaunchSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010001, 1, nullptr, STRUCT_OFFSET(ATank, LaunchSpeed), METADATA_PARAMS(Z_Construct_UClass_ATank_Statics::NewProp_LaunchSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATank_Statics::NewProp_LaunchSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATank_Statics::NewProp_ProjectileBlueprint_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/Tank.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATank_Statics::NewProp_ProjectileBlueprint = { UE4CodeGen_Private::EPropertyClass::Class, "ProjectileBlueprint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044000000010001, 1, nullptr, STRUCT_OFFSET(ATank, ProjectileBlueprint), Z_Construct_UClass_AProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATank_Statics::NewProp_ProjectileBlueprint_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATank_Statics::NewProp_ProjectileBlueprint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATank_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATank_Statics::NewProp_ReloadTimeInSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATank_Statics::NewProp_LaunchSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATank_Statics::NewProp_ProjectileBlueprint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATank_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATank>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATank_Statics::ClassParams = {
		&ATank::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ATank_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ATank_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ATank_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATank_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATank()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATank_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATank, 4231941777);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATank(Z_Construct_UClass_ATank, &ATank::StaticClass, TEXT("/Script/BattleTank"), TEXT("ATank"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATank);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
