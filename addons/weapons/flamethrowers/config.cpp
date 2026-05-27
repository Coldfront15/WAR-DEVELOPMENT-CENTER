#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
		name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"cba_main"};
		skipWhenMissingDependencies = 1;
		author = "Coldfront15";
        VERSION_CONFIG;
		addonRootClass = QUOTE(ADDON);
    };
};

class CfgVehicles
{
    class B_SPE_FuelTank_Base;
    class B_WDC_US_M1Flamethrower: B_SPE_FuelTank_Base
	{
		author = "Coldfront15";//"I44 Team"
		scope = 2;
		displayName = "M1 Flamethrower Backpack";
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Backpacks\B_US_M2Flamethrower_ca.paa";
		model = "\x\wdc\addons\weapons\flamethrowers\M1_Flamethrower\wdc_m1_flamepack.p3d";
		SPE_Flamethrower_Magazine = "SPE_M2_Flamethrower_Mag";
		SPE_Flamethrower_Weapon = "WDC_M1_Flamethrower";
		SPE_Flamethrower_HoseTexture[] = {0,"\WW2\SPE_Assets_t\Weapons\FlameThrowers_t\Flamethrower_Hose_co.paa"};
		hiddenSelections[] = {"hose"};
		hiddenSelectionsTextures[] = {""}; //\WW2\SPE_Assets_t\Weapons\FlameThrowers_t\Flamethrower_Hose_co.paa
		maximumLoad = 440.94;
		mass = 110.23;
		class TransportMagazines
		{
			class _xx_SPE_M2_Flamethrower_Mag
			{
				magazine = "SPE_M2_Flamethrower_Mag";
				count = 5;
			};
		};
	};
};



class CfgWeapons
{
    class RifleCore;
    class Rifle: RifleCore
	{
		class WeaponSlotsInfo;
	};
    class Rifle_Base_F: Rifle {};
    class SPE_RIFLE: Rifle_Base_F {};
    class SPE_Flamethrower_base: SPE_RIFLE 
    {
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };
    class WDC_M1_Flamethrower: SPE_Flamethrower_base
	{
		scope = 2;
		author = "Heavy Ordnance Works";//"I44 Team"
		dlc = "SPE";
		displayName = "M1 Flamethrower";
		descriptionShort = "$STR_SPE_DSS_M2_flameThrower";
		model = "\x\wdc\addons\weapons\flamethrowers\M1_Flamethrower\wdc_m1_flamethrower_weapon.p3d";
		picture = "\WW2\SPE_Assets_t\Weapons\Equipment_t\Weapons\Rifles\Gear_M2_Flamethrower_X_ca.paa";
		magazines[] = {"SPE_M2_Flamethrower_Mag","SPE_Flamethrower_Mag_Empty"};
		handAnim[] = {"OFP2_ManSkeleton","\x\wdc\addons\weapons\flamethrowers\M1_Flamethrower\anim\m1_handanim.rtm"};
		class Library
		{
			libTextDesc = "$STR_SPE_DESC_SPE_M2_Flamethrower";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 79.2;
		};
	};
};