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
	BATTLETANK_API UEnum* Z_Construct_UEnum_BattleTank_EFiringState();
	UPackage* Z_Construct_UPackage__Script_BattleTank();
	BATTLETANK_API UClass* Z_Construct_UClass_UTankAmingComponent_NoRegister();
	BATTLETANK_API UClass* Z_Construct_UClass_UTankAmingComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	static UEnum* EFiringState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BattleTank_EFiringState, Z_Construct_UPackage__Script_BattleTank(), TEXT("EFiringState"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFiringState(EFiringState_StaticEnum, TEXT("/Script/BattleTank"), TEXT("EFiringState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BattleTank_EFiringState_CRC() { return 275660431U; }
	UEnum* Z_Construct_UEnum_BattleTank_EFiringState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BattleTank();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFiringState"), 0, Get_Z_Construct_UEnum_BattleTank_EFiringState_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFiringState::Locked", (int64)EFiringState::Locked },
				{ "EFiringState::Aiming", (int64)EFiringState::Aiming },
				{ "EFiringState::Reloading", (int64)EFiringState::Reloading },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/TankAmingComponent.h" },
				{ "ToolTip", "Enum for aiming state" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BattleTank,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EFiringState",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EFiringState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FiringState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FiringState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FiringState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
		{ "ToolTip", "Holds barrel's properties and Elevate method" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTankAmingComponent_Statics::NewProp_FiringState_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/TankAmingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTankAmingComponent_Statics::NewProp_FiringState = { UE4CodeGen_Private::EPropertyClass::Enum, "FiringState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000014, 1, nullptr, STRUCT_OFFSET(UTankAmingComponent, FiringState), Z_Construct_UEnum_BattleTank_EFiringState, METADATA_PARAMS(Z_Construct_UClass_UTankAmingComponent_Statics::NewProp_FiringState_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTankAmingComponent_Statics::NewProp_FiringState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTankAmingComponent_Statics::NewProp_FiringState_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTankAmingComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTankAmingComponent_Statics::NewProp_FiringState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTankAmingComponent_Statics::NewProp_FiringState_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTankAmingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTankAmingComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTankAmingComponent_Statics::ClassParams = {
		&UTankAmingComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		nullptr, 0,
		Z_Construct_UClass_UTankAmingComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UTankAmingComponent_Statics::PropPointers),
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
	IMPLEMENT_CLASS(UTankAmingComponent, 3579391498);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTankAmingComponent(Z_Construct_UClass_UTankAmingComponent, &UTankAmingComponent::StaticClass, TEXT("/Script/BattleTank"), TEXT("UTankAmingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTankAmingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
