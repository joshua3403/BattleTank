// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTankBarrel;
class UTankTurret;
#ifdef BATTLETANK_TankAmingComponent_generated_h
#error "TankAmingComponent.generated.h already included, missing '#pragma once' in TankAmingComponent.h"
#endif
#define BATTLETANK_TankAmingComponent_generated_h

#define BattleTank_Source_BattleTank_Public_TankAmingComponent_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInitialise) \
	{ \
		P_GET_OBJECT(UTankBarrel,Z_Param_BarrelToSet); \
		P_GET_OBJECT(UTankTurret,Z_Param_TurretToSet); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Initialise(Z_Param_BarrelToSet,Z_Param_TurretToSet); \
		P_NATIVE_END; \
	}


#define BattleTank_Source_BattleTank_Public_TankAmingComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInitialise) \
	{ \
		P_GET_OBJECT(UTankBarrel,Z_Param_BarrelToSet); \
		P_GET_OBJECT(UTankTurret,Z_Param_TurretToSet); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Initialise(Z_Param_BarrelToSet,Z_Param_TurretToSet); \
		P_NATIVE_END; \
	}


#define BattleTank_Source_BattleTank_Public_TankAmingComponent_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTankAmingComponent(); \
	friend struct Z_Construct_UClass_UTankAmingComponent_Statics; \
public: \
	DECLARE_CLASS(UTankAmingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BattleTank"), NO_API) \
	DECLARE_SERIALIZER(UTankAmingComponent)


#define BattleTank_Source_BattleTank_Public_TankAmingComponent_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUTankAmingComponent(); \
	friend struct Z_Construct_UClass_UTankAmingComponent_Statics; \
public: \
	DECLARE_CLASS(UTankAmingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BattleTank"), NO_API) \
	DECLARE_SERIALIZER(UTankAmingComponent)


#define BattleTank_Source_BattleTank_Public_TankAmingComponent_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTankAmingComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTankAmingComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTankAmingComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTankAmingComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTankAmingComponent(UTankAmingComponent&&); \
	NO_API UTankAmingComponent(const UTankAmingComponent&); \
public:


#define BattleTank_Source_BattleTank_Public_TankAmingComponent_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTankAmingComponent(UTankAmingComponent&&); \
	NO_API UTankAmingComponent(const UTankAmingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTankAmingComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTankAmingComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTankAmingComponent)


#define BattleTank_Source_BattleTank_Public_TankAmingComponent_h_28_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FiringState() { return STRUCT_OFFSET(UTankAmingComponent, FiringState); }


#define BattleTank_Source_BattleTank_Public_TankAmingComponent_h_25_PROLOG
#define BattleTank_Source_BattleTank_Public_TankAmingComponent_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleTank_Source_BattleTank_Public_TankAmingComponent_h_28_PRIVATE_PROPERTY_OFFSET \
	BattleTank_Source_BattleTank_Public_TankAmingComponent_h_28_RPC_WRAPPERS \
	BattleTank_Source_BattleTank_Public_TankAmingComponent_h_28_INCLASS \
	BattleTank_Source_BattleTank_Public_TankAmingComponent_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BattleTank_Source_BattleTank_Public_TankAmingComponent_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleTank_Source_BattleTank_Public_TankAmingComponent_h_28_PRIVATE_PROPERTY_OFFSET \
	BattleTank_Source_BattleTank_Public_TankAmingComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	BattleTank_Source_BattleTank_Public_TankAmingComponent_h_28_INCLASS_NO_PURE_DECLS \
	BattleTank_Source_BattleTank_Public_TankAmingComponent_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BattleTank_Source_BattleTank_Public_TankAmingComponent_h


#define FOREACH_ENUM_EFIRINGSTATE(op) \
	op(EFiringState::Locked) \
	op(EFiringState::Aiming) \
	op(EFiringState::Reloading) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
