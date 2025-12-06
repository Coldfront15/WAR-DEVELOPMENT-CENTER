
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

class CfgFactionClasses
{
    class WarDevelopmentCenter
	{
		displayName = "War Development Center";
		priority = 8;
		side = 7;
	};
};

class CfgVehicles 
{
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
		category = "WarDevelopmentCenter";
		displayName = "[WDC] Artillery Barrage";
		icon = "\a3\Modules_F_Curator\Data\portraitOrdnanceHowitzer_ca.paa";
		portrait = "\a3\Modules_F_Curator\Data\portraitOrdnanceHowitzer_ca.paa";
		function = "SPE_fnc_moduleBarrage";
		model = "\A3\Weapons_f\empty";
		curatorInfoType = "SPE_RscDisplayAttributesModuleOrdnance";
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
    class All;
    class Sound: All {};
	class SPE_SFX_Ambient_Animals_Seagul: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Ambient_Animals_Seagul";
	};
	class SPE_SFX_Ambient_Rain_Rain_New1: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Ambient_Rain_Rain_New1";
	};
	class SPE_SFX_Ambient_Rain_Rain_New2: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Ambient_Rain_Rain_New2";
	};
	class SPE_SFX_Ambient_Sea_1_Sand_Beach_Stereo: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Ambient_Sea_1_Sand_Beach_Stereo";
	};
	class SPE_SFX_Ambient_Waves_Sea_1_Sand_Beach_Stereo: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Ambient_Waves_Sea_1_Sand_Beach_Stereo";
	};
	class SPE_SFX_Environment_Ambient_Redesigned_Crickets_Day: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Ambient_Redesigned_Crickets_Day";
	};
	class SPE_SFX_Environment_Ambient_Redesigned_Crickets_Night: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Ambient_Redesigned_Crickets_Night";
	};
	class SPE_SFX_Environment_Ambient_Redesigned_Forest_Birds: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Ambient_Redesigned_Forest_Birds";
	};
	class SPE_SFX_Environment_Ambient_Redesigned_Forest_High: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Ambient_Redesigned_Forest_High";
	};
	class SPE_SFX_Environment_Ambient_Redesigned_Forest_Low1: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Ambient_Redesigned_Forest_Low1";
	};
	class SPE_SFX_Environment_Ambient_Redesigned_Forest_Low2: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Ambient_Redesigned_Forest_Low2";
	};
	class SPE_SFX_Environment_Ambient_Redesigned_Forest_Low3: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Ambient_Redesigned_Forest_Low3";
	};
	class SPE_SFX_Environment_Ambient_Redesigned_Forest_Rattles: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Ambient_Redesigned_Forest_Rattles";
	};
	class SPE_SFX_Environment_Ambient_Redesigned_Meadows_Birds: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Ambient_Redesigned_Meadows_Birds";
	};
	class SPE_SFX_Environment_Ambient_Redesigned_Meadows_High: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Ambient_Redesigned_Meadows_High";
	};
	class SPE_SFX_Environment_Ambient_Redesigned_Meadows_Low: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Ambient_Redesigned_Meadows_Low";
	};
	class SPE_SFX_Environment_Ambient_Redesigned_Rain_Houses_High: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Ambient_Redesigned_Rain_Houses_High";
	};
	class SPE_SFX_Environment_Ambient_Redesigned_Rain_Meadows_High: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Ambient_Redesigned_Rain_Meadows_High";
	};
	class SPE_SFX_Environment_Ambient_Redesigned_Rain_Meadows_Low: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Ambient_Redesigned_Rain_Meadows_Low";
	};
	class SPE_SFX_Environment_Ambient_Redesigned_Rain_Meadows_Medium: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Ambient_Redesigned_Rain_Meadows_Medium";
	};
	class SPE_SFX_Environment_Animals_Birds_Bird_Pheasant: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Animals_Birds_Bird_Pheasant";
	};
	class SPE_SFX_Environment_Animals_Birds_Seagul: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Animals_Birds_Seagul";
	};
	class SPE_SFX_Environment_Sfx_Falling_Trees_Falling_Broadleaf_Tree_Big: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Sfx_Falling_Trees_Falling_Broadleaf_Tree_Big";
	};
	class SPE_SFX_Environment_Sfx_Falling_Trees_Falling_Broadleaf_Tree_Small: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Sfx_Falling_Trees_Falling_Broadleaf_Tree_Small";
	};
	class SPE_SFX_Environment_Sfx_Falling_Trees_Falling_Palm_Big: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Sfx_Falling_Trees_Falling_Palm_Big";
	};
	class SPE_SFX_Environment_Sfx_Falling_Trees_Falling_Palm_Small: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Sfx_Falling_Trees_Falling_Palm_Small";
	};
	class SPE_SFX_Environment_Structures_Church_Worship: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Structures_Church_Worship";
	};
	class SPE_SFX_Environment_Structures_Windturbine_Windturbine: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Structures_Windturbine_Windturbine";
	};
	class SPE_SFX_Environment_Ambient_Forest_Forest_Afternoon: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Ambient_Forest_Forest_Afternoon";
	};
	class SPE_SFX_Environment_Ambient_Forest_Forest_Morning: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Ambient_Forest_Forest_Morning";
	};
	class SPE_SFX_Environment_Ambient_Forest_Forest_Night: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Ambient_Forest_Forest_Night";
	};
	class SPE_SFX_Environment_Ambient_Houses_Houses_Day: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Ambient_Houses_Houses_Day";
	};
	class SPE_SFX_Environment_Ambient_Houses_Houses_Night: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Ambient_Houses_Houses_Night";
	};
	class SPE_SFX_Environment_Ambient_Meadows_Meadows_Day: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Ambient_Meadows_Meadows_Day";
	};
	class SPE_SFX_Environment_Ambient_Meadows_Meadows_Night: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Ambient_Meadows_Meadows_Night";
	};
	class SPE_SFX_Environment_Ambient_Sea_Coast: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Ambient_Sea_Coast";
	};
	class SPE_SFX_Environment_Ambient_Sea_Sea: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Ambient_Sea_Sea";
	};
	class SPE_SFX_Environment_Animals_Birds_Meadows_Bird_2: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Animals_Birds_Meadows_Bird_2";
	};
	class SPE_SFX_Environment_Elements_Rains_Rain_Forest_High: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Elements_Rains_Rain_Forest_High";
	};
	class SPE_SFX_Environment_Elements_Rains_Rain_Forest_Low: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Elements_Rains_Rain_Forest_Low";
	};
	class SPE_SFX_Environment_Elements_Rains_Rain_Forest_Medium: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Elements_Rains_Rain_Forest_Medium";
	};
	class SPE_SFX_Environment_Elements_Rains_Rain_Houses_High: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Elements_Rains_Rain_Houses_High";
	};
	class SPE_SFX_Environment_Elements_Rains_Rain_Meadows_High: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Elements_Rains_Rain_Meadows_High";
	};
	class SPE_SFX_Environment_Elements_Rains_Rain_Meadows_Low: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Elements_Rains_Rain_Meadows_Low";
	};
	class SPE_SFX_Environment_Elements_Rains_Rain_Meadows_Medium: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Elements_Rains_Rain_Meadows_Medium";
	};
	class SPE_SFX_Environment_Elements_Winds_Wind_Forest_High: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Elements_Winds_Wind_Forest_High";
	};
	class SPE_SFX_Environment_Elements_Winds_Wind_Forest_Low: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Elements_Winds_Wind_Forest_Low";
	};
	class SPE_SFX_Environment_Elements_Winds_Wind_Generic_High: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Elements_Winds_Wind_Generic_High";
	};
	class SPE_SFX_Environment_Elements_Winds_Wind_Generic_Low: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Elements_Winds_Wind_Generic_Low";
	};
	class SPE_SFX_Environment_Elements_Winds_Wind_Houses_High: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Elements_Winds_Wind_Houses_High";
	};
	class SPE_SFX_Environment_Elements_Winds_Wind_Houses_Low: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Elements_Winds_Wind_Houses_Low";
	};
	class SPE_SFX_Environment_Elements_Winds_Wind_Meadows_High: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Elements_Winds_Wind_Meadows_High";
	};
	class SPE_SFX_Environment_Elements_Winds_Wind_Meadows_Low: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Elements_Winds_Wind_Meadows_Low";
	};
	class SPE_SFX_Environment_Sfx_Clothes_Flapping: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Sfx_Clothes_Flapping";
	};
	class SPE_SFX_Environment_Sfx_Metal_Fence_Rattling: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Sfx_Metal_Fence_Rattling";
	};
	class SPE_SFX_Environment_Ambient_Day_Insects_Birds_Winds: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Ambient_Day_Insects_Birds_Winds";
	};
	class SPE_SFX_ambient_battlefield_battlefield_explosions_mono: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_ambient_battlefield_battlefield_explosions_mono";
	};
	class SPE_SFX_Ambient_Battlefield_Battlefield_Firefight_Mono: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Ambient_Battlefield_Battlefield_Firefight_Mono";
	};
	class SPE_SFX_Ambient_Battlefield_Battlefield_Heli_Mono: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Ambient_Battlefield_Battlefield_Heli_Mono";
	};
	class SPE_SFX_Ambient_Battlefield_Battlefield_Jet_Mono: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Ambient_Battlefield_Battlefield_Jet_Mono";
	};
	class SPE_SFX_Ambient_Single_Sfx_Forest_Single: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Ambient_Single_Sfx_Forest_Single";
	};
	class SPE_SFX_Ambient_Single_Sfx_Housest_Single: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Ambient_Single_Sfx_Housest_Single";
	};
	class SPE_SFX_Ambient_Waves_Beach_Pabble_Big_Waves: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Ambient_Waves_Beach_Pabble_Big_Waves";
	};
	class SPE_SFX_Ambient_Waves_Beach_Sand_Medium_Waves: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Ambient_Waves_Beach_Sand_Medium_Waves";
	};
	class SPE_SFX_Ambient_Waves_Rocky_Coast_Middle_Waves: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Ambient_Waves_Rocky_Coast_Middle_Waves";
	};
	class SPE_SFX_Ambient_Winds_Wind_synth_fast: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Ambient_Winds_Wind_synth_fast";
	};
	class SPE_SFX_Environment_Ambient_Battlefield_Battlefield_Explosions: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Ambient_Battlefield_Battlefield_Explosions";
	};
	class SPE_SFX_Environment_Ambient_Battlefield_Battlefield_Firefight: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Ambient_Battlefield_Battlefield_Firefight";
	};
	class SPE_SFX_Environment_Ambient_Battlefield_Battlefield_Heli: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Ambient_Battlefield_Battlefield_Heli";
	};
	class SPE_SFX_Environment_Ambient_Battlefield_Battlefield_Jet: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Ambient_Battlefield_Battlefield_Jet";
	};
	class SPE_SFX_Environment_Ambient_Day_Insects_Winds: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Ambient_Day_Insects_Winds";
	};
	class SPE_SFX_Environment_Ambient_Night_Insects: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Ambient_Night_Insects";
	};
	class SPE_SFX_Environment_Ambient_Quakes_Earthquake: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Ambient_Quakes_Earthquake";
	};
	class SPE_SFX_Environment_Ambient_Thunders_Thunder: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Ambient_Thunders_Thunder";
	};
	class SPE_SFX_Environment_Animals_Birds_Bird: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Animals_Birds_Bird";
	};
	class SPE_SFX_Environment_Animals_Birds_Bird_Night: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Animals_Birds_Bird_Night";
	};
	class SPE_SFX_Environment_Animals_Birds_Forest_Day_Close_Bird: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Animals_Birds_Forest_Day_Close_Bird";
	};
	class SPE_SFX_Environment_Animals_Birds_Forest_Day_Mid_Bird1: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Animals_Birds_Forest_Day_Mid_Bird1";
	};
	class SPE_SFX_Environment_Animals_Birds_Forest_Night_Close_Bird: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Animals_Birds_Forest_Night_Close_Bird";
	};
	class SPE_SFX_Environment_Animals_Birds_Forest_Night_Mid_Bird1: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Animals_Birds_Forest_Night_Mid_Bird1";
	};
	class SPE_SFX_Environment_Animals_Birds_Meadows_Day_Bird1: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Animals_Birds_Meadows_Day_Bird1";
	};
	class SPE_SFX_Environment_Animals_Chicken_Grill: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Animals_Chicken_Grill";
	};
	class SPE_SFX_Environment_Animals_Chickens_Chicken: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Animals_Chickens_Chicken";
	};
	class SPE_SFX_Environment_Animals_Dog: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Animals_Dog";
	};
	class SPE_SFX_Environment_Animals_Goats_Goat: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Animals_Goats_Goat";
	};
	class SPE_SFX_Environment_Animals_Hen: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Animals_Hen";
	};
	class SPE_SFX_Environment_Animals_Insect_Cricket: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Animals_Insect_Cricket";
	};
	class SPE_SFX_Environment_Animals_Insect_Fly: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Animals_Insect_Fly";
	};
	class SPE_SFX_Environment_Animals_Insect_Insect: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Animals_Insect_Insect";
	};
	class SPE_SFX_Environment_Animals_Insect_Meadow_Single: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Animals_Insect_Meadow_Single";
	};
	class SPE_SFX_Environment_Animals_Insect_Redesigned_Crickets_Group: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Animals_Insect_Redesigned_Crickets_Group";
	};
	class SPE_SFX_Environment_Animals_Scared_Animal: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Animals_Scared_Animal";
	};
	class SPE_SFX_Environment_Sfx_Tree_Creaking_Creacking: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Sfx_Tree_Creaking_Creacking";
	};
	class SPE_SFX_Environment_Animals_Birds_Forest_Day_Dist_Bird: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Animals_Birds_Forest_Day_Dist_Bird";
	};
	class SPE_SFX_Environment_Animals_Birds_Forest_Day_Mid_Bird2: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Animals_Birds_Forest_Day_Mid_Bird2";
	};
	class SPE_SFX_Environment_Animals_Birds_Forest_Night_Dist_Bird: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Animals_Birds_Forest_Night_Dist_Bird";
	};
	class SPE_SFX_Environment_Animals_Birds_Forest_Night_Mid_Bird2: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Animals_Birds_Forest_Night_Mid_Bird2";
	};
	class SPE_SFX_Environment_Animals_Birds_Meadows_Day_Bird2: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Animals_Birds_Meadows_Day_Bird2";
	};
	class SPE_SFX_Environment_Animals_Frogs_Forest_Close_Frog: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Animals_Frogs_Forest_Close_Frog";
	};
	class SPE_SFX_Environment_Animals_Frogs_Forest_Dist_Frog: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Animals_Frogs_Forest_Dist_Frog";
	};
	class SPE_SFX_Environment_Animals_Frogs_Forest_Mid_Frog: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Animals_Frogs_Forest_Mid_Frog";
	};
	class SPE_SFX_Environment_Animals_Insect_Insect_Day: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Animals_Insect_Insect_Day";
	};
	class SPE_SFX_Environment_Animals_Insect_Insect_Night: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Animals_Insect_Insect_Night";
	};
	class SPE_SFX_Environment_Elements_Rains_Rain_MetalA_Heavy: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Elements_Rains_Rain_MetalA_Heavy";
	};
	class SPE_SFX_Environment_Elements_Rains_Rain_Tree_Heavy: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Elements_Rains_Rain_Tree_Heavy";
	};
	class SPE_SFX_Environment_Elements_Rains_Water_Gutter: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Elements_Rains_Water_Gutter";
	};
	class SPE_SFX_Environment_Elements_Thunders_Thunder_Heavy: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Elements_Thunders_Thunder_Heavy";
	};
	class SPE_SFX_Environment_Elements_Thunders_Thunder_Normal: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Elements_Thunders_Thunder_Normal";
	};
	class SPE_SFX_Environment_Elements_Winds_Wind_LeavesA: Sound
	{   
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Elements_Winds_Wind_LeavesA";
	};
	class SPE_SFX_Environment_Sfx_Metal_Debris_Metal_Debris: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Sfx_Metal_Debris_Metal_Debris";
	};
	class SPE_SFX_Environment_Sfx_Metal_Stress_Metal_Stress: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Sfx_Metal_Stress_Metal_Stress";
	};
	class SPE_SFX_Environment_Sfx_Rock_Debris_Rock_Debris: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Sfx_Rock_Debris_Rock_Debris";
	};
	class SPE_SFX_Environment_Sfx_Small_Debris_Glass_Debris: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Sfx_Small_Debris_Glass_Debris";
	};
	class SPE_SFX_Environment_Sfx_Small_Debris_Rock_Debris: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Sfx_Small_Debris_Rock_Debris";
	};
	class SPE_SFX_Environment_Sfx_Small_Debris_Wood_Debris: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Sfx_Small_Debris_Wood_Debris";
	};
	class SPE_SFX_Environment_Structures_Air_Condition_Aircondition: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Structures_Air_Condition_Aircondition";
	};
	class SPE_SFX_Environment_Structures_Electric_Box_Electric_Box: Sound
	{
		side = -1;
		scope = 2;
		sound = "SPE_SFX_Environment_Structures_Electric_Box_Electric_Box";
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
