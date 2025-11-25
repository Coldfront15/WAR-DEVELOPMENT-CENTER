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
	class SubmunitionBase;
	class SmokeShell;
	class SPE_TankSmokeShell_Submunition_Base: SmokeShell {};	
	class SPE_ShellSmoke_base: ShellBase {};
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
		deleteParentWhenTriggered = 1;
	};
	class WDC_G_M19WP_OD: SPE_Grenade_base
	{
		cost = 50;
		hit = 6;
		indirectHit = 4;
		indirectHitRange = 1.5;
		warheadName = "WP";
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "64 + 128";
		model = "\x\wdc\addons\items_equipment\wdc_m19_od_ammo.p3d";
		airFriction = -0.009;
		typicalSpeed = 197.51;
		submunitionAmmo = "WDC_G_M19_Instant";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 1;
	};
	class SPE_SmokeShell_base: SmokeShell {};	
	class WDC_G_M22_White_Instant: SPE_SmokeShell_base
	{
		model = "\x\wdc\addons\items_equipment\wdc_m22_white_ammo.p3d";
		smokeColor[] = {1,1,1,1};
		explosionTime = 0.01;
		effectsSmoke = "SPE_SmokeShellWhiteEffect";
	};
	class WDC_G_M22_Red_Instant: SPE_SmokeShell_base
	{
		model = "\x\wdc\addons\items_equipment\wdc_m22_red_ammo.p3d";
		smokeColor[] = {0.8438,0.2383,0.1953,1};
		explosionTime = 0.01;
		effectsSmoke = "SPE_SmokeShellRedEffect";
	};
	class WDC_G_M22_Yellow_Instant: SPE_SmokeShell_base
	{
		model = "\x\wdc\addons\items_equipment\wdc_m22_yellow_ammo.p3d";
		smokeColor[] = {0.9883,0.9606,0.1719,1};
		explosionTime = 0.01;
		effectsSmoke = "SPE_SmokeShellYellowEffect";
	};
	class WDC_G_M22_Green_Instant: SPE_SmokeShell_base
	{
		model = "\x\wdc\addons\items_equipment\wdc_m22_green_ammo.p3d";
		smokeColor[] = {0.0941,0.3882,0.3058,1};
		explosionTime = 0.01;
		effectsSmoke = "SPE_SmokeShellGreenEffect";
	};
	class WDC_G_M22_Violet_Instant: SPE_SmokeShell_base
	{
		model = "\x\wdc\addons\items_equipment\wdc_m22_violet_ammo.p3d";
		smokeColor[] = {0.2341,0.0388,0.21439998,1};
		explosionTime = 0.01;
		effectsSmoke = "SPE_SmokeShellPurpleEffect";
	};
	class SPE_G_ANM8: SPE_Grenade_base {};
	class SPE_G_M18_Green: SPE_Grenade_base {};
	class SPE_G_M18_Yellow: SPE_Grenade_base {};
	class SPE_G_M18_Red: SPE_Grenade_base {};
	class SPE_G_M18_Violet: SPE_Grenade_base {};	
	class WDC_G_M22_White: SPE_G_ANM8 
	{
		submunitionAmmo = "WDC_G_M22_White_Instant";
		model = "\x\wdc\addons\items_equipment\wdc_m22_white_ammo.p3d"; //fix wrong smoke model on ammo
	};
	class WDC_G_M22_Yellow: SPE_G_M18_Yellow 
	{
		submunitionAmmo = "WDC_G_M22_Yellow_Instant";
		model = "\x\wdc\addons\items_equipment\wdc_m22_yellow_ammo.p3d";
	};
	class WDC_G_M22_Red: SPE_G_M18_Red 
	{
		submunitionAmmo = "WDC_G_M22_Red_Instant";
		model = "\x\wdc\addons\items_equipment\wdc_m22_red_ammo.p3d";
	};
	class WDC_G_M22_Green: SPE_G_M18_Green 
	{
		submunitionAmmo = "WDC_G_M22_Green_Instant";
		model = "\x\wdc\addons\items_equipment\wdc_m22_green_ammo.p3d";
	};
	class WDC_G_M22_Violet: SPE_G_M18_Violet 
	{
		submunitionAmmo = "WDC_G_M22_Violet_Instant";
		model = "\x\wdc\addons\items_equipment\wdc_m22_violet_ammo.p3d";
	};
	class WDC_G_M23A1_white_dummy: SubmunitionBase
	{
		triggerTime = 0.05;
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 52;
		submunitionAmmo = "WDC_G_M23A1_white_submunition";
		model = "\x\wdc\addons\items_equipment\wdc_m23a1_white_ammo.p3d";
		timeToLive = 1;
	};
	class WDC_G_M23A1_white_submunition: SPE_TankSmokeShell_Submunition_Base
	{
		explosionTime = 0.01;
		timeToLive = 30;
		simulation = "shotSmokeX";
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 52;
		smokeColor[] = {1,1,1,1};
		effectsSmoke = "WDC_SmokeStreamWhiteEffect";
		model = "\x\wdc\addons\items_equipment\wdc_m23a1_white_ammo.p3d";
	};
	class WDC_G_M23A1_White: SPE_ShellSmoke_base
	{
		hit = 30;
		indirectHit = 0;
		indirectHitRange = 0.1;
		sideAirFriction = 1.5;
		airFriction = -0.00008;
		typicalSpeed = 192;
		whistleDist = 16;
		artilleryLock = 1;
		timeToLive = 30;
		submunitionAmmo = "WDC_G_M23A1_white_dummy";
		model = "\x\wdc\addons\items_equipment\wdc_m23a1_white_ammo.p3d";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 52;
		triggerTime = 0.05;
		triggerOnImpact = 0;
		deleteParentWhenTriggered = 1;
	};
	class WDC_G_M23A1_red_dummy: WDC_G_M23A1_white_dummy
	{
		submunitionAmmo = "WDC_G_M23A1_red_submunition";
		model = "\x\wdc\addons\items_equipment\wdc_m23a1_red_ammo.p3d";
	};
	class WDC_G_M23A1_red_submunition: WDC_G_M23A1_white_submunition
	{
		explosionTime = 0.01;
		timeToLive = 60;
		simulation = "shotSmokeX";
		smokeColor[] = {0.8438,0.2383,0.1953,1};
		effectsSmoke = "WDC_SmokeStreamRedEffect";
		model = "\x\wdc\addons\items_equipment\wdc_m23a1_red_ammo.p3d";
	};
	class WDC_G_M23A1_Red: WDC_G_M23A1_White
	{
		submunitionAmmo = "WDC_G_M23A1_red_dummy";
		model = "\x\wdc\addons\items_equipment\wdc_m23a1_red_ammo.p3d";
	};
	class WDC_G_M23A1_green_dummy: WDC_G_M23A1_white_dummy
	{
		submunitionAmmo = "WDC_G_M23A1_green_submunition";
		model = "\x\wdc\addons\items_equipment\wdc_m23a1_green_ammo.p3d";
	};
	class WDC_G_M23A1_green_submunition: WDC_G_M23A1_white_submunition
	{
		explosionTime = 0.01;
		timeToLive = 60;
		simulation = "shotSmokeX";
		smokeColor[] = {0.0941,0.3882,0.3058,1};
		effectsSmoke = "WDC_SmokeStreamGreenEffect";
		model = "\x\wdc\addons\items_equipment\wdc_m23a1_green_ammo.p3d";
	};
	class WDC_G_M23A1_Green: WDC_G_M23A1_White
	{
		submunitionAmmo = "WDC_G_M23A1_green_dummy";
		model = "\x\wdc\addons\items_equipment\wdc_m23a1_green_ammo.p3d";
	};
	class WDC_G_M23A1_yellow_dummy: WDC_G_M23A1_white_dummy
	{
		submunitionAmmo = "WDC_G_M23A1_yellow_submunition";
		model = "\x\wdc\addons\items_equipment\wdc_m23a1_yellow_ammo.p3d";
	};
	class WDC_G_M23A1_yellow_submunition: WDC_G_M23A1_white_submunition
	{
		explosionTime = 0.01;
		timeToLive = 60;
		simulation = "shotSmokeX";
		smokeColor[] = {0.9883,0.9606,0.1719,1};
		effectsSmoke = "WDC_SmokeStreamYellowEffect";
		model = "\x\wdc\addons\items_equipment\wdc_m23a1_yellow_ammo.p3d";
	};
	class WDC_G_M23A1_Yellow: WDC_G_M23A1_White
	{
		submunitionAmmo = "WDC_G_M23A1_yellow_dummy";
		model = "\x\wdc\addons\items_equipment\wdc_m23a1_yellow_ammo.p3d";
	};
	class WDC_G_M23A1_violet_dummy: WDC_G_M23A1_white_dummy
	{
		submunitionAmmo = "WDC_G_M23A1_violet_submunition";
		model = "\x\wdc\addons\items_equipment\wdc_m23a1_violet_ammo.p3d";
	};
	class WDC_G_M23A1_violet_submunition: WDC_G_M23A1_white_submunition
	{
		explosionTime = 0.01;
		timeToLive = 60;
		simulation = "shotSmokeX";
		smokeColor[] = {0.2341,0.0388,0.21439998,1};
		effectsSmoke = "WDC_SmokeStreamPurpleEffect";
		model = "\x\wdc\addons\items_equipment\wdc_m23a1_violet_ammo.p3d";
	};
	class WDC_G_M23A1_Violet: WDC_G_M23A1_White
	{
		submunitionAmmo = "WDC_G_M23A1_violet_dummy";
		model = "\x\wdc\addons\items_equipment\wdc_m23a1_violet_ammo.p3d";
	};
};


class CfgMagazines
{
	class CA_Magazine;
	class SPE_BaseRifleGrenade: CA_Magazine	{};
	class SPE_1Rnd_G_M2_ANM8: SPE_BaseRifleGrenade {};
	class SPE_1Rnd_G_M2_M18_Red: SPE_BaseRifleGrenade {};
	class SPE_1Rnd_G_M2_M18_Green: SPE_BaseRifleGrenade {};
	class SPE_1Rnd_G_M2_M18_Yellow: SPE_BaseRifleGrenade {};
	class SPE_1Rnd_G_M2_M18_Violet: SPE_BaseRifleGrenade {};

	class WDC_1Rnd_G_M19WP: SPE_BaseRifleGrenade
	{
		scope = 2;
		type = 16;
		author = "Heavy Ordnance Works";//"Crotmoul"
		dlc = "SPE";
		displayName = "$STR_WDC_DN_ASSETS_WEAPONS_M19_RIFLE_GRENADE";
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
	class WDC_1Rnd_G_M19WP_OD: SPE_BaseRifleGrenade
	{
		scope = 2;
		type = 16;
		author = "Heavy Ordnance Works";//"Crotmoul"
		dlc = "SPE";
		displayName = "$STR_WDC_DN_ASSETS_WEAPONS_M19_OD_RIFLE_GRENADE";
		displayNameShort = "$STR_WDC_Assets_Weapons_InfantryWeapons_displayNameShort_WP";
		picture = "\x\wdc\addons\items_equipment\data\UI\wdc_m19od_ui_ca.paa";
		model = "\x\wdc\addons\items_equipment\wdc_m19_od.p3d";
		ammo = "WDC_G_M19WP_OD";
		initSpeed = 197.51;
		nameSound = "grenadelauncher";
		descriptionShort = "$STR_WDC_DSS_ASSETS_WEAPONS_M19_RIFLE_GRENADE";
		mass = 14.8;
		modelSpecial = "\x\wdc\addons\items_equipment\wdc_m19_od.p3d";
		modelSpecialIsProxy = 1;
	};
	class WDC_1Rnd_G_M22_White: SPE_1Rnd_G_M2_ANM8
	{
		scope = 2;
		type = 16;
		author = "Heavy Ordnance Works";//"Crotmoul"
		dlc = "SPE";
		displayName = "$STR_WDC_DN_ASSETS_WEAPONS_M22_WHITE_RIFLE_SMOKE";
		displayNameShort = "$STR_WDC_Assets_Weapons_InfantryWeapons_displayNameShort_WSMK";
		picture = "\x\wdc\addons\items_equipment\data\UI\wdc_m22white_ui_ca.paa";
		model = "\x\wdc\addons\items_equipment\wdc_m22_white.p3d";
		initSpeed = 197.51;
		ammo = "WDC_G_M22_White";
		nameSound = "grenadelauncher";
		descriptionShort = "$STR_WDC_DSS_ASSETS_WEAPONS_M22_WHITE_RIFLE_SMOKE";
		mass = 14.8;
		modelSpecial = "\x\wdc\addons\items_equipment\wdc_m22_white.p3d";
		modelSpecialIsProxy = 1;
	};
	class WDC_1Rnd_G_M22_Red: SPE_1Rnd_G_M2_M18_Red
	{
		scope = 2;
		type = 16;
		author = "Heavy Ordnance Works";//"Crotmoul"
		dlc = "SPE";
		displayName = "$STR_WDC_DN_ASSETS_WEAPONS_M22_RED_RIFLE_SMOKE";
		displayNameShort = "$STR_WDC_Assets_Weapons_InfantryWeapons_displayNameShort_RSMK";
		picture = "\x\wdc\addons\items_equipment\data\UI\wdc_m22red_ui_ca.paa";
		model = "\x\wdc\addons\items_equipment\wdc_m22_red.p3d";
		initSpeed = 197.51;
		ammo = "WDC_G_M22_Red";
		nameSound = "grenadelauncher";
		descriptionShort = "$STR_WDC_DSS_ASSETS_WEAPONS_M22_RED_RIFLE_SMOKE";
		mass = 14.8;
		modelSpecial = "\x\wdc\addons\items_equipment\wdc_m22_red.p3d";
		modelSpecialIsProxy = 1;
	};
	class WDC_1Rnd_G_M22_Green: SPE_1Rnd_G_M2_M18_Green
	{
		scope = 2;
		type = 16;
		author = "Heavy Ordnance Works";//"Crotmoul"
		dlc = "SPE";
		displayName = "$STR_WDC_DN_ASSETS_WEAPONS_M22_GREEN_RIFLE_SMOKE";
		displayNameShort = "$STR_WDC_Assets_Weapons_InfantryWeapons_displayNameShort_GSMK";
		picture = "\x\wdc\addons\items_equipment\data\UI\wdc_m22green_ui_ca.paa";
		model = "\x\wdc\addons\items_equipment\wdc_m22_green.p3d";
		initSpeed = 197.51;
		ammo = "WDC_G_M22_Green";
		nameSound = "grenadelauncher";
		descriptionShort = "$STR_WDC_DSS_ASSETS_WEAPONS_M22_GREEN_RIFLE_SMOKE";
		mass = 14.8;
		modelSpecial = "\x\wdc\addons\items_equipment\wdc_m22_green.p3d";
		modelSpecialIsProxy = 1;
	};
	class WDC_1Rnd_G_M22_Yellow: SPE_1Rnd_G_M2_M18_Yellow
	{
		scope = 2;
		type = 16;
		author = "Heavy Ordnance Works";//"Crotmoul"
		dlc = "SPE";
		displayName = "$STR_WDC_DN_ASSETS_WEAPONS_M22_YELLOW_RIFLE_SMOKE";
		displayNameShort = "$STR_WDC_Assets_Weapons_InfantryWeapons_displayNameShort_YSMK";
		picture = "\x\wdc\addons\items_equipment\data\UI\wdc_m22yellow_ui_ca.paa";
		model = "\x\wdc\addons\items_equipment\wdc_m22_yellow.p3d";
		initSpeed = 197.51;
		ammo = "WDC_G_M22_Yellow";
		nameSound = "grenadelauncher";
		descriptionShort = "$STR_WDC_DSS_ASSETS_WEAPONS_M22_YELLOW_RIFLE_SMOKE";
		mass = 14.8;
		modelSpecial = "\x\wdc\addons\items_equipment\wdc_m22_yellow.p3d";
		modelSpecialIsProxy = 1;
	};
	class WDC_1Rnd_G_M22_Violet: SPE_1Rnd_G_M2_M18_Violet
	{
		scope = 2;
		type = 16;
		author = "Heavy Ordnance Works";//"Crotmoul"
		dlc = "SPE";
		displayName = "$STR_WDC_DN_ASSETS_WEAPONS_M22_VIOLET_RIFLE_SMOKE";
		displayNameShort = "$STR_WDC_Assets_Weapons_InfantryWeapons_displayNameShort_VSMK";
		picture = "\x\wdc\addons\items_equipment\data\UI\wdc_m22violet_ui_ca.paa";
		model = "\x\wdc\addons\items_equipment\wdc_m22_violet.p3d";
		initSpeed = 197.51;
		ammo = "WDC_G_M22_Violet";
		nameSound = "grenadelauncher";
		descriptionShort = "$STR_WDC_DSS_ASSETS_WEAPONS_M22_VIOLET_RIFLE_SMOKE";
		mass = 14.8;
		modelSpecial = "\x\wdc\addons\items_equipment\wdc_m22_violet.p3d";
		modelSpecialIsProxy = 1;
	};
	class WDC_1Rnd_G_M23A1_White: SPE_1Rnd_G_M2_ANM8
	{
		scope = 2;
		type = 16;
		author = "Heavy Ordnance Works";//"Crotmoul"
		dlc = "SPE";
		displayName = "$STR_WDC_DN_ASSETS_WEAPONS_M23A1_WHITE_RIFLE_STREAMER";
		displayNameShort = "$STR_WDC_Assets_Weapons_InfantryWeapons_displayNameShort_WSTR";
		picture = "\x\wdc\addons\items_equipment\data\UI\wdc_m23a1white_ui_ca.paa";
		model = "\x\wdc\addons\items_equipment\wdc_m23a1_white.p3d";
		airFriction = -0.0080;
		typicalSpeed = 192;
		initSpeed = 100;
		ammo = "WDC_G_M23A1_White";
		nameSound = "grenadelauncher";
		descriptionShort = "$STR_WDC_DSS_ASSETS_WEAPONS_M23A1_WHITE_RIFLE_STREAMER";
		mass = 14.8;
		modelSpecial = "\x\wdc\addons\items_equipment\wdc_m23a1_white.p3d";
		modelSpecialIsProxy = 1;
	};
	class WDC_1Rnd_G_M23A1_Red: SPE_1Rnd_G_M2_M18_Red
	{
		scope = 2;
		type = 16;
		author = "Heavy Ordnance Works";//"Crotmoul"
		dlc = "SPE";
		displayName = "$STR_WDC_DN_ASSETS_WEAPONS_M23A1_RED_RIFLE_STREAMER";
		displayNameShort = "$STR_WDC_Assets_Weapons_InfantryWeapons_displayNameShort_RSTR";
		picture = "\x\wdc\addons\items_equipment\data\UI\wdc_m23a1red_ui_ca.paa";
		model = "\x\wdc\addons\items_equipment\wdc_m23a1_red.p3d";
		airFriction = -0.0080;
		typicalSpeed = 192;
		initSpeed = 100;
		ammo = "WDC_G_M23A1_Red";
		nameSound = "grenadelauncher";
		descriptionShort = "$STR_WDC_DSS_ASSETS_WEAPONS_M23A1_RED_RIFLE_STREAMER";
		mass = 14.8;
		modelSpecial = "\x\wdc\addons\items_equipment\wdc_m23a1_red.p3d";
		modelSpecialIsProxy = 1;
	};
	class WDC_1Rnd_G_M23A1_Green: SPE_1Rnd_G_M2_M18_Green
	{
		scope = 2;
		type = 16;
		author = "Heavy Ordnance Works";//"Crotmoul"
		dlc = "SPE";
		displayName = "$STR_WDC_DN_ASSETS_WEAPONS_M23A1_GREEN_RIFLE_STREAMER";
		displayNameShort = "$STR_WDC_Assets_Weapons_InfantryWeapons_displayNameShort_GSTR";
		picture = "\x\wdc\addons\items_equipment\data\UI\wdc_m23a1green_ui_ca.paa";
		model = "\x\wdc\addons\items_equipment\wdc_m23a1_green.p3d";
		airFriction = -0.0080;
		typicalSpeed = 192;
		initSpeed = 100;
		ammo = "WDC_G_M23A1_Green";
		nameSound = "grenadelauncher";
		descriptionShort = "$STR_WDC_DSS_ASSETS_WEAPONS_M23A1_GREEN_RIFLE_STREAMER";
		mass = 14.8;
		modelSpecial = "\x\wdc\addons\items_equipment\wdc_m23a1_green.p3d";
		modelSpecialIsProxy = 1;
	};
	class WDC_1Rnd_G_M23A1_Yellow: SPE_1Rnd_G_M2_M18_Yellow
	{
		scope = 2;
		type = 16;
		author = "Heavy Ordnance Works";//"Crotmoul"
		dlc = "SPE";
		displayName = "$STR_WDC_DN_ASSETS_WEAPONS_M23A1_YELLOW_RIFLE_STREAMER";
		displayNameShort = "$STR_WDC_Assets_Weapons_InfantryWeapons_displayNameShort_YSTR";
		picture = "\x\wdc\addons\items_equipment\data\UI\wdc_m23a1yellow_ui_ca.paa";
		model = "\x\wdc\addons\items_equipment\wdc_m23a1_yellow.p3d";
		airFriction = -0.0080;
		typicalSpeed = 192;
		initSpeed = 100;
		ammo = "WDC_G_M23A1_Yellow";
		nameSound = "grenadelauncher";
		descriptionShort = "$STR_WDC_DSS_ASSETS_WEAPONS_M23A1_YELLOW_RIFLE_STREAMER";
		mass = 14.8;
		modelSpecial = "\x\wdc\addons\items_equipment\wdc_m23a1_yellow.p3d";
		modelSpecialIsProxy = 1;
	};
	class WDC_1Rnd_G_M23A1_Violet: SPE_1Rnd_G_M2_M18_Violet
	{
		scope = 2;
		type = 16;
		author = "Heavy Ordnance Works";//"Crotmoul"
		dlc = "SPE";
		displayName = "$STR_WDC_DN_ASSETS_WEAPONS_M23A1_VIOLET_RIFLE_STREAMER";
		displayNameShort = "$STR_WDC_Assets_Weapons_InfantryWeapons_displayNameShort_VSTR";
		picture = "\x\wdc\addons\items_equipment\data\UI\wdc_m23a1violet_ui_ca.paa";
		model = "\x\wdc\addons\items_equipment\wdc_m23a1_violet.p3d";
		airFriction = -0.0080;
		typicalSpeed = 192;
		initSpeed = 100;
		ammo = "WDC_G_M23A1_Violet";
		nameSound = "grenadelauncher";
		descriptionShort = "$STR_WDC_DSS_ASSETS_WEAPONS_M23A1_VIOLET_RIFLE_STREAMER";
		mass = 14.8;
		modelSpecial = "\x\wdc\addons\items_equipment\wdc_m23a1_violet.p3d";
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
			"WDC_1Rnd_G_M19WP",
			"WDC_1Rnd_G_M19WP_OD",
			"WDC_1Rnd_G_M22_White",
			"WDC_1Rnd_G_M22_Yellow",
			"WDC_1Rnd_G_M22_Red",
			"WDC_1Rnd_G_M22_Green",
			"WDC_1Rnd_G_M22_Violet",
			"WDC_1Rnd_G_M23A1_White",
			"WDC_1Rnd_G_M23A1_Yellow",
			"WDC_1Rnd_G_M23A1_Red",
			"WDC_1Rnd_G_M23A1_Green",
			"WDC_1Rnd_G_M23A1_Violet"
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
	class Items_base_F;
	class ACE_RepairItem_Base;
	class ACE_Track: ACE_RepairItem_Base
	{
		model = "\a3\Props_F_Tank\Military\TankAcc\TankTracks_01_short_F.p3d";
	};
};

class CfgCloudlets
{
	class Default;
	class SPE_SmokeShellWhite: Default {};
	class WDC_SmokeShellWhite: 	SPE_SmokeShellWhite 
	{
		interval = 0.03;
		lifeTime = 1;
		size[] = {1,2,3.5};
	};
	class SPE_SmokeShellWhite2: Default {};
	class WDC_SmokeShellWhite2: 	SPE_SmokeShellWhite2 
	{
		interval = 0.05;
		lifeTime = 2.5;
		size[] = {1,2,3.5,5};
	};
	class SPE_SmokeShellWhite3: Default {};
	class WDC_SmokeShellWhite3: 	SPE_SmokeShellWhite3 
	{
		interval = 0.05;
		lifeTime = 3.25;
		size[] = {1,3,5,8};
	};
};


class WDC_SmokeStreamWhiteEffect
{
	class SmokeShell
	{
		simulation = "particles";
		type = "WDC_SmokeShellWhite";
		position[] = {0,0,0};
		intensity = 1;
		interval = 0.1;
	};
	class SmokeShell2
	{
		simulation = "particles";
		type = "WDC_SmokeShellWhite2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 0.1;
	};
	class SmokeShell3
	{
		simulation = "particles";
		type = "WDC_SmokeShellWhite3";
		position[] = {0,0,0};
		intensity = 1;
		interval = 0.1;
	};
	class SmokeShellUW
	{
		simulation = "particles";
		type = "SPE_SmokeShellWhiteUW";
		position[] = {0,0,0};
		intensity = 1;
		interval = 0.1;
	};
	class SmokeShell2UW
	{
		simulation = "particles";
		type = "SPE_SmokeShellWhite2UW";
		position[] = {0,0,0};
		intensity = 1;
		interval = 0.1;
	};
};
class WDC_SmokeStreamRedEffect: WDC_SmokeStreamWhiteEffect
{
	class SmokeShell: SmokeShell{};
	class SmokeShell2: SmokeShell2{};
	class SmokeShell3: SmokeShell3{};
	class SmokeShellUW
	{
		simulation = "particles";
		type = "SPE_SmokeShellRedUW";
		position[] = {0,0,0};
		intensity = .6;
		interval = 0.05;
	};
	class SmokeShell2UW
	{
		simulation = "particles";
		type = "SPE_SmokeShellRed2UW";
		position[] = {0,0,0};
		intensity = .6;
		interval = 0.05;
	};
};
class WDC_SmokeStreamGreenEffect: WDC_SmokeStreamWhiteEffect
{
	class SmokeShell: SmokeShell{};
	class SmokeShell2: SmokeShell2{};
	class SmokeShell3: SmokeShell3{};
	class SmokeShellUW
	{
		simulation = "particles";
		type = "SPE_SmokeShellGreenUW";
		position[] = {0,0,0};
		intensity = .6;
		interval = 0.05;
	};
	class SmokeShell2UW
	{
		simulation = "particles";
		type = "SPE_SmokeShellGreen2UW";
		position[] = {0,0,0};
		intensity = .6;
		interval = 0.05;
	};
};
class WDC_SmokeStreamYellowEffect: WDC_SmokeStreamWhiteEffect
{
	class SmokeShell: SmokeShell{};
	class SmokeShell2: SmokeShell2{};
	class SmokeShell3: SmokeShell3{};
	class SmokeShellUW
	{
		simulation = "particles";
		type = "SPE_SmokeShellYellowUW";
		position[] = {0,0,0};
		intensity = .6;
		interval = 0.05;
	};
	class SmokeShell2UW
	{
		simulation = "particles";
		type = "SPE_SmokeShellYellow2UW";
		position[] = {0,0,0};
		intensity = .6;
		interval = 0.05;
	};
};
class WDC_SmokeStreamPurpleEffect: WDC_SmokeStreamWhiteEffect
{
	class SmokeShell: SmokeShell{};
	class SmokeShell2: SmokeShell2{};
	class SmokeShell3: SmokeShell3{};
	class SmokeShellUW
	{
		simulation = "particles";
		type = "SPE_SmokeShellPurpleUW";
		position[] = {0,0,0};
		intensity = .6;
		interval = 0.05;
	};
	class SmokeShell2UW
	{
		simulation = "particles";
		type = "SPE_SmokeShellPurple2UW";
		position[] = {0,0,0};
		intensity = .6;
		interval = 0.05;
	};
};
