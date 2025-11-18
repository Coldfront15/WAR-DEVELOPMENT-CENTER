
#include "script_component.hpp"

class CfgPatches {
    class ADDON {
		name = COMPONENT_NAME;
        units[] = {
			"WDC_ModuleBarrage_Zeus_F",
			"WDC_ModuleOrdnanceLightHowitzerVT_F",
			"WDC_ModuleOrdnanceLightHowitzerWP_F",
			"WDC_ModuleOrdnanceMediumHowitzer_F",
			"WDC_ModuleOrdnanceMediumHowitzerVT_F",
			"WDC_ModuleOrdnanceMediumHowitzerWP_F",
			"WDC_ModuleOrdnanceSuperHowitzer_F",
			"WDC_ModuleOrdnanceSuperHowitzerVT_F"
		};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"cba_main","ace_interact_menu","tbd_mortars_main","ww2_spe_assets_c_vehicles_staticweapons_u1_c"};
		author = "Coldfront15";
        VERSION_CONFIG;
    };
};

class RscControlsGroup;
class RscControlsGroupNoScrollbars;
class RscText;
class RscListNBox;
class RscToolbox;
class ctrlCombo;

class CfgVehicles {
    class Logic;
	class Module_F : Logic
	{
		class AttributesBase
		{
			class Default;
			class Edit;					// Default edit box (i.e. text input field)
			class Combo;				// Default combo box (i.e. drop-down menu)
			class Checkbox;				// Default checkbox (returned value is Boolean)
			class CheckboxNumber;		// Default checkbox (returned value is Number)
			class ModuleDescription;	// Module description
			class Units;				// Selection of units on which the module is applied
		};

		// Description base classes (for more information see below):
		class ModuleDescription
		{
			class AnyPlayer;
			class AnyBrain;
			class EmptyDetector;
		};
	};
    class ModuleOrdnance_F: Module_F
	{
		class ModuleDescription;
	};
    class SPE_ModuleOrdnance_F: ModuleOrdnance_F {};
    class SPE_ModuleOrdnanceMortar_F: SPE_ModuleOrdnance_F{};
    class SPE_ModuleOrdnanceLightHowitzer_F: SPE_ModuleOrdnanceMortar_F {};
    class WDC_ModuleBarrage_F: Module_F
	{
		author = "Heavy Ordnance Works";//"IFA3 Team";
		dlc = "SPE";
		scope = 2;
		scopeCurator = 1;
		isGlobal = 1;
		isTriggerActivated = 1;
		simulation = "invisible";
		category = "SPE_Ordnance";
		displayName = "[WDC] Artillery Barrage";
		icon = "\a3\Modules_F_Curator\Data\portraitOrdnanceHowitzer_ca.paa";
		portrait = "\a3\Modules_F_Curator\Data\portraitOrdnanceHowitzer_ca.paa";
		function = "SPE_fnc_moduleBarrage";
		model = "\A3\Weapons_f\empty";
		curatorInfoType = "WDC_RscDisplayAttributesModuleBarrage";
		curatorCost = 12;
		class Arguments
		{
			class Type
			{
				displayName = "$STR_A3_CfgVehicles_ModuleOrdnance_F_Arguments_Type";
				description = "";
				class values
				{
                    class LightHowitzer_VT
					{
						icon = "\WW2\SPE_Core_t\Data_t\Factions\US_Army.paa";
						name = "[WDC] 105 mm Howitzer (VT)";
						value = "wdc_artillery_SPE_M3_M1_HE_SHELL_VT";
						count = 36;
						firingData[] = {"howitzer",4,6,240};
					};
                    class LightHowitzer_WP
					{
						icon = "\WW2\SPE_Core_t\Data_t\Factions\US_Army.paa";
						name = "[WDC] 105 mm Howitzer (WP)";
						value = "wdc_artillery_SPE_M3_M60_WP_SHELL_WP";
						count = 12;
						firingData[] = {"howitzer",4,6,240};
					};
					class MediumHowitzer
					{
						icon = "\WW2\SPE_Core_t\Data_t\Factions\US_Army.paa";
						name = "[WDC] 155 mm Howitzer";
						value = "wdc_artillery_SPE_M1_M102_HE_SHELL_HE";
						count = 24;
						firingData[] = {"howitzer",4,8,240};
					};
                    class MediumHowitzer_VT
					{
						icon = "\WW2\SPE_Core_t\Data_t\Factions\US_Army.paa";
						name = "[WDC] 155 mm Howitzer (VT)";
						value = "wdc_artillery_SPE_M1_M102_HE_SHELL_VT";
						count = 24;
						firingData[] = {"howitzer",4,8,240};
					};
                     class MediumHowitzer_WP
					{
						icon = "\WW2\SPE_Core_t\Data_t\Factions\US_Army.paa";
						name = "[WDC] 155 mm Howitzer (WP)";
						value = "wdc_artillery_SPE_M1_M110_WP_SHELL_WP";
						count = 8;
						firingData[] = {"howitzer",4,8,240};
					};
					class HeavyHowitzer
					{
						icon = "\WW2\SPE_Core_t\Data_t\Factions\US_Army.paa";
						name = "[WDC] 8-Inch Howitzer";
						value = "wdc_artillery_SPE_M1_M106_HE_SHELL_HE";
						count = 16;
						firingData[] = {"howitzer",4,12,360};
					};
                    class HeavyHowitzer_VT
					{
						icon = "\WW2\SPE_Core_t\Data_t\Factions\US_Army.paa";
						name = "[WDC] 8-Inch Howitzer (VT)";
						value = "wdc_artillery_SPE_M1_M106_HE_SHELL_VT";
						count = 16;
						firingData[] = {"howitzer",4,12,360};
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description = "$STR_A3_CfgVehicles_ModuleOrdnance_F_ModuleDescription";
			position = 1;
			direction = 1;
		};
	};
    class WDC_ModuleBarrage_Zeus_F: WDC_ModuleBarrage_F
	{
		author = "Heavy Ordnance Works";//"IFA3 Team";
		dlc = "SPE";
		scope = 1;
		scopeCurator = 2;
		simulation = "house";
	};
    class WDC_ModuleOrdnanceLightHowitzerVT_F: SPE_ModuleOrdnanceLightHowitzer_F
	{
		author = "Heavy Ordnance Works";//"IFA3 Team";
		dlc = "SPE";
		displayName = "[WDC] M1 HEVT (105mm)";
		portrait = "\a3\Modules_F_Curator\Data\portraitOrdnanceHowitzer_ca.paa";
		ammo = "wdc_artillery_SPE_M3_M1_HE_SHELL_VT";
		model = "\a3\Modules_F_Curator\Ordnance\surfaceHowitzer.p3d";
		curatorCost = 6;
	};
    class WDC_ModuleOrdnanceLightHowitzerWP_F: SPE_ModuleOrdnanceLightHowitzer_F
	{
		author = "Heavy Ordnance Works";//"IFA3 Team";
		dlc = "SPE";
		displayName = "[WDC] M60 WP (105mm)";
		portrait = "\a3\Modules_F_Curator\Data\portraitOrdnanceHowitzer_ca.paa";
		ammo = "wdc_artillery_SPE_M3_M60_WP_SHELL_WP";
		model = "\a3\Modules_F_Curator\Ordnance\surfaceHowitzer.p3d";
		curatorCost = 6;
	};
    class WDC_ModuleOrdnanceMediumHowitzer_F: SPE_ModuleOrdnanceLightHowitzer_F
	{
		author = "Heavy Ordnance Works";//"IFA3 Team";
		dlc = "SPE";
		displayName = "[WDC] M102 HE (155mm)";
		portrait = "\a3\Modules_F_Curator\Data\portraitOrdnanceHowitzer_ca.paa";
		ammo = "wdc_artillery_SPE_M1_M102_HE_SHELL_HE";
		model = "\a3\Modules_F_Curator\Ordnance\surfaceHowitzer.p3d";
		curatorCost = 6;
	};
    class WDC_ModuleOrdnanceMediumHowitzerVT_F: SPE_ModuleOrdnanceLightHowitzer_F
	{
		author = "Heavy Ordnance Works";//"IFA3 Team";
		dlc = "SPE";
		displayName = "[WDC] M102 HEVT (155mm)";
		portrait = "\a3\Modules_F_Curator\Data\portraitOrdnanceHowitzer_ca.paa";
		ammo = "wdc_artillery_SPE_M1_M102_HE_SHELL_VT";
		model = "\a3\Modules_F_Curator\Ordnance\surfaceHowitzer.p3d";
		curatorCost = 6;
	};
    class WDC_ModuleOrdnanceMediumHowitzerWP_F: SPE_ModuleOrdnanceLightHowitzer_F
	{
		author = "Heavy Ordnance Works";//"IFA3 Team";
		dlc = "SPE";
		displayName = "[WDC] M110 WP (155mm)";
		portrait = "\a3\Modules_F_Curator\Data\portraitOrdnanceHowitzer_ca.paa";
		ammo = "wdc_artillery_SPE_M1_M110_WP_SHELL_WP";
		model = "\a3\Modules_F_Curator\Ordnance\surfaceHowitzer.p3d";
		curatorCost = 6;
	};
    class WDC_ModuleOrdnanceSuperHowitzer_F: SPE_ModuleOrdnanceLightHowitzer_F
	{
		author = "Heavy Ordnance Works";//"IFA3 Team";
		dlc = "SPE";
		displayName = "[WDC] M106 HE (203mm)";
		portrait = "\a3\Modules_F_Curator\Data\portraitOrdnanceHowitzer_ca.paa";
		ammo = "wdc_artillery_SPE_M1_M106_HE_SHELL_HE";
		model = "\a3\Modules_F_Curator\Ordnance\surfaceHowitzer.p3d";
		curatorCost = 12;
	};
    class WDC_ModuleOrdnanceSuperHowitzerVT_F: SPE_ModuleOrdnanceLightHowitzer_F
	{
		author = "Heavy Ordnance Works";//"IFA3 Team";
		dlc = "SPE";
		displayName = "[WDC] M106 HEVT (203mm)";
		portrait = "\a3\Modules_F_Curator\Data\portraitOrdnanceHowitzer_ca.paa";
		ammo = "wdc_artillery_SPE_M1_M106_HE_SHELL_VT";
		model = "\a3\Modules_F_Curator\Ordnance\surfaceHowitzer.p3d";
		curatorCost = 12;
	};
};

class Extended_PreInit_EventHandlers
{
	class wdc_artillery
	{
		init = "call compile preprocessFileLineNumbers '\x\wdc\addons\artillery\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class wdc_artillery
	{
		init = "call compile preprocessFileLineNumbers '\x\wdc\addons\artillery\XEH_postInit.sqf'";
	};
};
class Extended_PreStart_EventHandlers
{
	class wdc_artillery
	{
		init = "call compile preprocessFileLineNumbers '\x\wdc\addons\artillery\XEH_preStart.sqf'";
	};
};
