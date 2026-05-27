////////////////////////////////////////////////////////////////////
//DeRap: stretcher\config.bin
//Produced from mikero's Dos Tools Dll version 9.98
//https://mikero.bytex.digital/Downloads
//'now' is Wed Apr 08 11:19:19 2026 : 'file' last modified on Wed Apr 08 11:19:19 2026
////////////////////////////////////////////////////////////////////

#include "script_component.hpp"

class cfgPatches
{
	class wdc_Items_Patch_medical_stretcher
	{
		Name = "WDC - Medical - Stretcher";
		requiredAddons[] = {"ace_interaction","ace_medical_treatment"};
		units[] = {};
        requiredVersion = REQUIRED_VERSION;
		weapons[] = {"WW2_ACE_Items_Stretcher_Carry"};
		skipWhenMissingDependencies = 1;
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Tank: LandVehicle
	{
		class ACE_Actions
		{
			class ACE_MainActions;
		};
	};
	class Tank_F: Tank
	{
		class ACE_Actions: ACE_Actions
		{
			class ACE_MainActions: ACE_MainActions{};
		};
	};
	class vurtual_stretcher: Tank_F
	{
		TFAR_hasIntercom = 0;
		tf_hasLRradio = 0;
		tf_isolatedAmount = 0;
		model = "\x\wdc\addons\stretcher\WW2_stretcher.p3d";
	};
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class ACE_Equipment
			{
				class rr_stretcher
				{
					displayName = "$STR_RR_UNFOLD";
					icon = "rr_stretch\gui\deploy.paa";
					condition = "'WW2_ACE_Items_Stretcher_Carry' in weapons ACE_player";
					statement = "ACE_player playAction 'TakeFlag'; createVehicle ['vurtual_stretcher', getPosATL ACE_player, [], 0, 'CAN_COLLIDE']; ACE_player removeWeapon 'WW2_ACE_Items_Stretcher_Carry';";
				};
			};
		};
	};
};
class CfgWeapons
{
	class Launcher_Base_F;
	class WW2_ACE_Items_Stretcher_Carry: Launcher_Base_F
	{
		scope = 2;
		scopearsenal = 2;
		displayName = "Litter";
		author = "Letlev";
		picture = "\x\wdc\addons\stretcher\textures\UI\WW2_Stretcher_UI_X_ca.paa";
		model = "\x\wdc\addons\stretcher\WW2_stretcher_folded.p3d";
		mass = 450;
	};
};
class Extended_PostInit_EventHandlers
{
	class rr_stretch_init
	{
		init = "['CBA_settingsInitialized', {[] spawn compileScript ['\x\wdc\addons\stretcher\init.sqf']}] call CBA_fnc_addEventHandler;";
	};
};
