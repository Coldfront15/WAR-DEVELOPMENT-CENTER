#include "script_component.hpp"

class CfgPatches {
	class ADDON {
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {
            "ace_flashlights",
            "ace_trenches",
            "ace_explosives",
			"WW2_SPE_Assets_c_Weapons_InfantryWeapons_c"
        };
        VERSION_CONFIG;
	};
};



#include "CfgEventHandlers.hpp"
class CfgAmmo
{
	
	class BombCore;
	class SPE_Bomb_base: BombCore {};
	class SPE_US_500lb_Bomb: SPE_Bomb_base {};
	class SPE_M47_Bomb_WP: SPE_US_500lb_Bomb
	{
		SPE_Fire_Range = 15;
		SPE_Fire_BurnTime= 10;
		class EventHandlers
		{
			class WDC_Fire
			{
				init = "_this call wdc_medical_equipment_fnc_WPFire";
			};
		};
	};
	class GrenadeHand;
	class SPE_GrenadeHand_base: GrenadeHand {};
	class GrenadeBase;
	class SPE_Grenade_base: GrenadeBase {};
	class SPE_US_M15: SPE_GrenadeHand_base
	{
		ACE_damageType = "ace_compat_spe_explosive_wp";
		ace_grenades_incendiary = 1;
		SPE_Fire_Range = 3;
		SPE_Fire_BurnTime= 3;
		class EventHandlers
		{
			class WDC_Fire
			{
				init = "_this call wdc_medical_equipment_fnc_WPFire";
			};
		};
	};
	class ShellCore;
	class ShellBase: ShellCore {};
	class SPE_ShellHE_base : ShellBase {};
	class SPE_M48_HE: SPE_ShellHE_base {};	
	class SPE_M64_WP: SPE_M48_HE
	{
		SPE_Fire_Range = 6;
		SPE_Fire_BurnTime= 6;
		class EventHandlers
		{
			class WDC_Fire
			{
				init = "_this call wdc_medical_equipment_fnc_WPFire";
			};
		};
	};
	class WDC_G_M19_Instant: SPE_US_M15 
	{
		explosionTime = 0.01;
	};
	class WDC_G_M19WP: SPE_Grenade_base
	{
		cost = 50;
		hit = 6;
		indirectHit = 4;
		indirectHitRange = 1.5;
		warheadName = "WP";
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "64 + 128";
		model = "\x\wdc\addons\items_equipment\wdc_m19_ammo.p3d";
		airFriction = -0.009;
		typicalSpeed = 197.51;
		submunitionAmmo = "WDC_G_M19_Instant";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
};

class CfgMagazines
{
	class CA_Magazine;
	class SPE_BaseRifleGrenade: CA_Magazine	{};

	class WDC_1Rnd_G_M19WP: SPE_BaseRifleGrenade
	{
		scope = 2;
		type = 16;
		author = "Heavy Ordnance Works";//"Crotmoul"
		dlc = "SPE";
		displayName = "$STR_SPE_DN_ASSETS_WEAPONS_M19_RIFLE_GRENADE";
		displayNameShort = "$STR_WDC_Assets_Weapons_InfantryWeapons_displayNameShort_WP";
		picture = "\x\wdc\addons\items_equipment\data\UI\wdc_m19_ui_ca.paa";
		model = "\x\wdc\addons\items_equipment\wdc_m19.p3d";
		ammo = "WDC_G_M19WP";
		initSpeed = 197.51;
		nameSound = "grenadelauncher";
		descriptionShort = "$STR_WDC_DSS_ASSETS_WEAPONS_M19_RIFLE_GRENADE";
		mass = 14.8;
		modelSpecial = "\x\wdc\addons\items_equipment\wdc_m19.p3d";
		modelSpecialIsProxy = 1;
	};
};

class CfgMagazineWells
{
	class SPE_22mm_US_Riflegrenade
	{
		SPE_Magazines[] =
		{
			"SPE_1Rnd_G_Mk2",
			"SPE_1Rnd_G_M9A1",
			"SPE_1Rnd_G_M2_AN_M14",
			"SPE_1Rnd_G_M2_ANM8",
			"SPE_1Rnd_G_M2_M18_Red",
			"SPE_1Rnd_G_M2_M18_Green",
			"SPE_1Rnd_G_M2_M18_Yellow",
			"SPE_1Rnd_G_M2_M18_Violet",
			"SPE_1Rnd_G_M17A1",
			"SPE_1Rnd_G_M19A1",
			"SPE_1Rnd_G_M21A1",
			"SPE_1Rnd_G_M51A1",
			"WDC_1Rnd_G_M19WP"
		};
	};
};

class CfgWeapons
{
	class ACE_ItemCore;
	class ACE_EntrenchingTool;
	class ACE_Clacker;
	class ACE_Flashlight_XL50;
	class CBA_MiscItem_ItemInfo;
	class wdc_EntrenchingTool_m28: ACE_EntrenchingTool
	{
		author = "Letlev";
		displayName = "US M1928 Entrenching Tool";
		descriptionShort = "US Early WWII E-T17469515984ool";
		picture = "\x\wdc\addons\items_equipment\data\UI\m1928_etool_ui_ca.paa";
		model = "\WW2\SPE_Assets_m\Characters\Americans_m\US_Army\SPE_US_Assault_Vest.p3d";
		hiddenSelections[] = {"camo","camo2","camo4","camo5","camo7"};
		hiddenSelectionsTextures[] = {"","","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\M1928_Haversack_co.paa","",""};
	};
	class wdc_EntrenchingTool_m43: wdc_EntrenchingTool_m28
	{
		displayName = "US M1943 Entrenching Tool";
		descriptionShort = "US Late WWII E-Tool";
		picture = "\x\wdc\addons\items_equipment\data\UI\m1943_etool_ui_ca.paa";
		model = "\WW2\SPE_Assets_m\Characters\Americans_m\US_Army\SPE_US_Vest_Garand_M43.p3d";
		hiddenSelections[] = {"camo","camo2","camo5"};
		hiddenSelectionsTextures[] = {"","","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Sekop_43_co.paa"};
	};
	class ACE_M26_Clacker: ACE_Clacker
	{
		displayName = "US 10 Cap Blasting Machine";
		picture = "\x\wdc\addons\items_equipment\data\UI\blasting_machine_ui_ca.paa";
		model = "\x\wdc\addons\items_equipment\wdc_us_detonator.p3d";
		descriptionShort = "Standard US Handheld detonator";
	};
	class wdc_flastlight_tl22: ACE_Flashlight_XL50
	{
		author = "Letlev";
		displayName = "US TL-122 Flashlight";
		descriptionShort = "Standard US flashlight (Map Flashlight)";
		model = "\WW2\SPE_Assets_m\Misc\Items_m\SPE_US_Flashlight_Ground.p3d";
		picture = "\WW2\SPE_Assets_t\Weapons\Equipment_U1_t\Weapons\Items\Gear_US_FL_TL122_X_ca.paa";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 4;
			class FlashLight
			{
				ACE_Flashlight_Colour = "white";
				ACE_Flashlight_Beam = "\z\ace\addons\flashlights\UI\Flashlight_beam_white_ca.paa";
				ACE_Flashlight_Size = 1.75;
			};
		};
	};
	class ACE_Flashlight_KSF1: ACE_ItemCore
	{
		displayName = "GER 2213 Signallampe";
		descriptionShort = "Standard WWII German flashlight (Map Flashlight)";
		model = "\WW2\SPE_Assets_m\Misc\Items_m\SPE_GER_Flashlight_Ground.p3d";
		picture = "\WW2\SPE_Assets_t\Weapons\Equipment_U1_t\Weapons\Items\Gear_GER_FL_Signal_Flashlight_X_ca.paa";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 4;
			class FlashLight
			{
				ACE_Flashlight_Colour = "white";
				ACE_Flashlight_Beam = "\z\ace\addons\flashlights\UI\Flashlight_beam_white_ca.paa";
				ACE_Flashlight_Size = 1.5;
			};
		};
	};
	class ACE_CableTie: ACE_ItemCore
	{
		displayName = "Binding Rope";
		descriptionShort = "Rope used to restrain prisoners.";
		picture = "\x\wdc\addons\items_equipment\data\UI\rope_ui_ca.paa";
		model = "\A3\Structures_F_Heli\Items\Tools\Rope_01_F.p3d";
		hiddenSelections[] = {"Camo_1"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(1.0,1.0,1.0,1.0,co)"};
	};
	class wdc_EntrenchingTool_schanzzeug: wdc_EntrenchingTool_m43
	{
		author = "Letlev";
		displayName = "GER Schanzzeug E-Tool";
		descriptionShort = "German WWII E-Tool";
		picture = "\x\wdc\addons\items_equipment\data\UI\Schanzzeug_etool_ui_ca.paa";
		model = "\A3\Structures_F_EPA\Items\Tools\Shovel_F.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
	};
};
class ACE_Triggers
{
	class Command;
	class MK16_Transmitter: Command
	{
		displayName = "10 Cap Blasting Machine";
		picture = "\x\wdc\addons\items_equipment\data\UI\blasting_machine_ui_ca.paa";
	};
};
class CfgVehicles
{
	class ACE_RepairItem_Base;
	class ACE_Track: ACE_RepairItem_Base
	{
		model = "\a3\Props_F_Tank\Military\TankAcc\TankTracks_01_short_F.p3d";
	};
};
