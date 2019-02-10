// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleTank/Public/TankPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankPlayerController() {}
// Cross Module References
	BATTLETANK_API UClass* Z_Construct_UClass_ATankPlayerController_NoRegister();
	BATTLETANK_API UClass* Z_Construct_UClass_ATankPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_BattleTank();
	BATTLETANK_API UFunction* Z_Construct_UFunction_ATankPlayerController_GetControlledTank();
	BATTLETANK_API UClass* Z_Construct_UClass_ATank_NoRegister();
// End Cross Module References
	void ATankPlayerController::StaticRegisterNativesATankPlayerController()
	{
		UClass* Class = ATankPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetControlledTank", &ATankPlayerController::execGetControlledTank },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATankPlayerController_GetControlledTank_Statics
	{
		struct TankPlayerController_eventGetControlledTank_Parms
		{
			ATank* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATankPlayerController_GetControlledTank_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TankPlayerController_eventGetControlledTank_Parms, ReturnValue), Z_Construct_UClass_ATank_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATankPlayerController_GetControlledTank_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATankPlayerController_GetControlledTank_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATankPlayerController_GetControlledTank_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/TankPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATankPlayerController_GetControlledTank_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankPlayerController, "GetControlledTank", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54080401, sizeof(TankPlayerController_eventGetControlledTank_Parms), Z_Construct_UFunction_ATankPlayerController_GetControlledTank_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATankPlayerController_GetControlledTank_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATankPlayerController_GetControlledTank_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATankPlayerController_GetControlledTank_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATankPlayerController_GetControlledTank()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATankPlayerController_GetControlledTank_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATankPlayerController_NoRegister()
	{
		return ATankPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ATankPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineTraceRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LineTraceRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairYLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrosshairYLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairXLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrosshairXLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATankPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_BattleTank,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATankPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATankPlayerController_GetControlledTank, "GetControlledTank" }, // 3442245297
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TankPlayerController.h" },
		{ "ModuleRelativePath", "Public/TankPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPlayerController_Statics::NewProp_LineTraceRange_MetaData[] = {
		{ "Category", "TankPlayerController" },
		{ "ModuleRelativePath", "Public/TankPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATankPlayerController_Statics::NewProp_LineTraceRange = { UE4CodeGen_Private::EPropertyClass::Float, "LineTraceRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(ATankPlayerController, LineTraceRange), METADATA_PARAMS(Z_Construct_UClass_ATankPlayerController_Statics::NewProp_LineTraceRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATankPlayerController_Statics::NewProp_LineTraceRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPlayerController_Statics::NewProp_CrosshairYLocation_MetaData[] = {
		{ "Category", "TankPlayerController" },
		{ "ModuleRelativePath", "Public/TankPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATankPlayerController_Statics::NewProp_CrosshairYLocation = { UE4CodeGen_Private::EPropertyClass::Float, "CrosshairYLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(ATankPlayerController, CrosshairYLocation), METADATA_PARAMS(Z_Construct_UClass_ATankPlayerController_Statics::NewProp_CrosshairYLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATankPlayerController_Statics::NewProp_CrosshairYLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPlayerController_Statics::NewProp_CrosshairXLocation_MetaData[] = {
		{ "Category", "TankPlayerController" },
		{ "ModuleRelativePath", "Public/TankPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATankPlayerController_Statics::NewProp_CrosshairXLocation = { UE4CodeGen_Private::EPropertyClass::Float, "CrosshairXLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(ATankPlayerController, CrosshairXLocation), METADATA_PARAMS(Z_Construct_UClass_ATankPlayerController_Statics::NewProp_CrosshairXLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATankPlayerController_Statics::NewProp_CrosshairXLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATankPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPlayerController_Statics::NewProp_LineTraceRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPlayerController_Statics::NewProp_CrosshairYLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPlayerController_Statics::NewProp_CrosshairXLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATankPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATankPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATankPlayerController_Statics::ClassParams = {
		&ATankPlayerController::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ATankPlayerController_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ATankPlayerController_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ATankPlayerController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATankPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATankPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATankPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATankPlayerController, 3644234057);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATankPlayerController(Z_Construct_UClass_ATankPlayerController, &ATankPlayerController::StaticClass, TEXT("/Script/BattleTank"), TEXT("ATankPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATankPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
