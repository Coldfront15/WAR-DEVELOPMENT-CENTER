////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.98
//https://mikero.bytex.digital/Downloads
//'now' is Wed Jul 09 13:30:40 2025 : 'file' last modified on Wed Dec 31 17:00:00 1969
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class wdc_helemts
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"WW2_SPE_Assets_c_Characters_Americans_c_US_Army_Gear"};
	};
};
class cfgWeapons
{
	class U_BasicBody;
	class U_SPE_BasicBody: U_BasicBody
	{
		class ItemInfo;
	};
	class ItemCore;
	class H_HelmetB: ItemCore
	{
		class ItemInfo;
	};
	class H_SPE_HelmetB: H_HelmetB{};
	class H_SPE_US_Helmet: H_SPE_HelmetB
	{
		class ItemInfo;
	};
	class H_SPE_US_AB_Helmet: H_SPE_US_Helmet
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		scope = 2;
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet";
		model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS.p3d";
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_ca.paa";
		hiddenSelections[] = {"camo","camo0","camo1","joke"};
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","","","","",""};
		class ItemInfo: ItemInfo
		{
			mass = 30;
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo","camo0","camo1"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 5;
					passThrough = 0.8;
				};
			};
		};
	};
	class H_SPE_US_AB_Helmet_ns: H_SPE_US_AB_Helmet
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_ns";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Alt_co.paa","","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_os: H_SPE_US_AB_Helmet
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_os";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_os_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_Net: H_SPE_US_AB_Helmet
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_Net";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_Net_ns: H_SPE_US_AB_Helmet_ns
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_Net_ns";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_Net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_Net_up: H_SPE_US_AB_Helmet_ns
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_Net_up";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_Net_up_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_up.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_Net_os: H_SPE_US_AB_Helmet_os
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_Net_os";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_Net_os_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_Scrim: H_SPE_US_AB_Helmet
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_Scrim";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_Scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_Scrim_ns: H_SPE_US_AB_Helmet_ns
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_Scrim_ns";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_Scrim_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_Scrim_up: H_SPE_US_AB_Helmet_ns
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_Scrim_up";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_Scrim_up_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_up.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_Scrim_os: H_SPE_US_AB_Helmet_os
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_Scrim_os";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_Scrim_os_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_polar: H_SPE_US_AB_Helmet
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		scope = 2;
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_polar";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","","","","",""};
		model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_CS.p3d";
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_polar_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_polar_ns: H_SPE_US_AB_Helmet_polar
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_polar_ns";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Alt_co.paa","","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_polar_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_NS.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_polar_os: H_SPE_US_AB_Helmet_polar
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_polar_os";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_polar_os_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_OS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_polar_net: H_SPE_US_AB_Helmet_polar
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_polar_net";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_polar_net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_polar_net_ns: H_SPE_US_AB_Helmet_polar_ns
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_polar_net_ns";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Alt_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_polar_net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_NS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_polar_net_os: H_SPE_US_AB_Helmet_polar_os
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_polar_net_os";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_polar_net_os_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_OS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_polar_Scrim: H_SPE_US_AB_Helmet_polar
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_polar_Scrim";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_polar_Scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_polar_Scrim_ns: H_SPE_US_AB_Helmet_polar_ns
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_polar_Scrim_ns";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Alt_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_polar_Scrim_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_NS.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_polar_Scrim_os: H_SPE_US_AB_Helmet_polar_os
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_polar_Scrim_os";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_polar_Scrim_os_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_OS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_NCO: H_SPE_US_AB_Helmet
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_NCO";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Alt_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"WW2\SPE_Assets_r\Characters\Americans_r\US_Army\US_Pot_NCO.rvmat","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_NCO_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_NCO_ns: H_SPE_US_AB_Helmet_NCO
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_NCO_ns";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_NCO_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_NCO_Net: H_SPE_US_AB_Helmet_NCO
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_NCO_Net";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_NCO_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_NCO_Net_ns: H_SPE_US_AB_Helmet_NCO
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_NCO_Net_ns";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_NCO_Net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_NCO_Scrim: H_SPE_US_AB_Helmet_NCO
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_NCO_Scrim";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_NCO_Scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_NCO_Scrim_ns: H_SPE_US_AB_Helmet_NCO_Scrim
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_NCO_Scrim_ns";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_NCO_Scrim_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_CO: H_SPE_US_AB_Helmet
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_CO";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Alt_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"WW2\SPE_Assets_r\Characters\Americans_r\US_Army\US_Pot_CO.rvmat","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_CO_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_CO_ns: H_SPE_US_AB_Helmet_CO
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_CO_ns";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_CO_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_CO_Net: H_SPE_US_AB_Helmet_CO
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_CO_Net";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_CO_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_CO_Net_ns: H_SPE_US_AB_Helmet_CO
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_CO_Net_ns";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_CO_Net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_CO_Scrim: H_SPE_US_AB_Helmet_CO
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_CO_Scrim";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_CO_Scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_CO_Scrim_ns: H_SPE_US_AB_Helmet_CO_Scrim
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_CO_Scrim_ns";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_CO_Scrim_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_502: H_SPE_US_AB_Helmet
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_502";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Alt_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"WW2\SPE_Assets_r\Characters\Americans_U1_r\Badges\US_Pot_502.rvmat","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_ns: H_SPE_US_AB_Helmet_502
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_502_ns";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Alt_co.paa","","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_os: H_SPE_US_AB_Helmet_502
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_502_os";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_os_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_Net: H_SPE_US_AB_Helmet_502
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_502_Net";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_Net_ns: H_SPE_US_AB_Helmet_502_ns
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_502_Net_ns";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_Net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_502_Net_up: H_SPE_US_AB_Helmet_502_ns
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_502_Net_up";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_Net_up_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_up.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_Net_os: H_SPE_US_AB_Helmet_502_os
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_502_Net_os";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_Net_os_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_ShrimpNet: H_SPE_US_AB_Helmet_502
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (1/4 Net)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_ShrimpNet_ns: H_SPE_US_AB_Helmet_502_ns
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (1/4 Net, Folded)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_Net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_502_ShrimpNet_os: H_SPE_US_AB_Helmet_502_os
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (1/4 Net, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_Net_os_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_ShrimpNet_up: H_SPE_US_AB_Helmet_502_ns
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (1/4 Net, Hooked)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_Net_up_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_up.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_Scrim: H_SPE_US_AB_Helmet_502
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_502_Scrim";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_Scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_Scrim_ns: H_SPE_US_AB_Helmet_502_ns
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_502_Scrim_ns";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_Scrim_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_502_Scrim_up: H_SPE_US_AB_Helmet_502_ns
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_502_Scrim_up";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_Scrim_up_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_up.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_502_Scrim_os: H_SPE_US_AB_Helmet_502_os
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_502_Scrim_os";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_Scrim_os_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_polar: H_SPE_US_AB_Helmet_502
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		scope = 2;
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_502_polar";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","","","","",""};
		model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_NS.p3d";
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_polar_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_polar_ns: H_SPE_US_AB_Helmet_502_polar
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_502_polar_ns";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Alt_co.paa","","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_polar_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_NS.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_502_polar_os: H_SPE_US_AB_Helmet_502_polar
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_502_polar_os";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_polar_os_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_OS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_polar_net: H_SPE_US_AB_Helmet_502_polar
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_502_polar_net";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_polar_net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_polar_net_ns: H_SPE_US_AB_Helmet_502_polar_ns
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_502_polar_net_ns";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Alt_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_polar_net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_NS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_polar_net_os: H_SPE_US_AB_Helmet_502_polar_os
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_502_polar_net_os";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_polar_net_os_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_OS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_polar_Shrimpnet: H_SPE_US_AB_Helmet_502_polar
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (No. 1021, 1/4 Net)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_polar_net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_polar_Shrimpnet_ns: H_SPE_US_AB_Helmet_502_polar_ns
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (No. 1021, 1/4 Net, Folded)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Alt_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_polar_net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_NS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_polar_Shrimpnet_os: H_SPE_US_AB_Helmet_502_polar_os
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (No. 1021, 1/4 Net, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_polar_net_os_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_OS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_polar_Scrim: H_SPE_US_AB_Helmet_502_polar
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_502_polar_Scrim";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_polar_Scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_polar_Scrim_ns: H_SPE_US_AB_Helmet_502_polar_ns
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_502_polar_Scrim_ns";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Alt_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_polar_Scrim_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_NS.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_502_polar_Scrim_os: H_SPE_US_AB_Helmet_502_polar_os
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_502_polar_Scrim_os";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_polar_Scrim_os_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_OS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO: H_SPE_US_AB_Helmet_502
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_502_NCO";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Alt_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"WW2\SPE_Assets_r\Characters\Americans_U1_r\Badges\US_Pot_502_NCO.rvmat","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_ns: H_SPE_US_AB_Helmet_502_NCO
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_502_NCO_ns";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Net: H_SPE_US_AB_Helmet_502_NCO
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_502_NCO_Net";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Net_ns: H_SPE_US_AB_Helmet_502_NCO
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_502_NCO_Net_ns";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_ShrimpNet: H_SPE_US_AB_Helmet_502_NCO
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (1/4 Net, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_ShrimpNet_ns: H_SPE_US_AB_Helmet_502_NCO
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (1/4 Net, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Scrim: H_SPE_US_AB_Helmet_502_NCO
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_502_NCO_Scrim";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Scrim_ns: H_SPE_US_AB_Helmet_502_NCO_Scrim
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_502_NCO_Scrim_ns";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Scrim_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_502_CO: H_SPE_US_AB_Helmet_502
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_502_CO";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Alt_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"WW2\SPE_Assets_r\Characters\Americans_U1_r\Badges\US_Pot_502_CO.rvmat","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_CO_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_CO_ns: H_SPE_US_AB_Helmet_502_CO
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_502_CO_ns";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_CO_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_CO_Net: H_SPE_US_AB_Helmet_502_CO
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_502_CO_Net";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_CO_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_CO_Net_ns: H_SPE_US_AB_Helmet_502_CO
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_502_CO_Net_ns";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_CO_Net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_502_CO_ShrimpNet: H_SPE_US_AB_Helmet_502_CO
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (1/4 Net, CO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_CO_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_CO_ShrimpNet_ns: H_SPE_US_AB_Helmet_502_CO
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (1/4 Net, CO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_CO_Net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_502_CO_Scrim: H_SPE_US_AB_Helmet_502_CO
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_502_CO_Scrim";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_CO_Scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_CO_Scrim_ns: H_SPE_US_AB_Helmet_502_CO_Scrim
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_502_CO_Scrim_ns";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_CO_Scrim_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_321: H_SPE_US_AB_Helmet
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Alt_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"x\wdc\addons\helmets\US_Airborne\US_Pot_321.rvmat","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_ns: H_SPE_US_AB_Helmet_321
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Folded)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Alt_co.paa","","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_os: H_SPE_US_AB_Helmet_321
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_os_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_ShrimpNet: H_SPE_US_AB_Helmet_321
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (1/4 Net)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_ShrimpNet_ns: H_SPE_US_AB_Helmet_321_ns
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (1/4 Net, Folded)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_Net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_321_ShrimpNet_up: H_SPE_US_AB_Helmet_321_ns
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (1/4 Net, Hooked)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_Net_up_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_up.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_ShrimpNet_os: H_SPE_US_AB_Helmet_321_os
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (1/4 Net, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_Net_os_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_Scrim: H_SPE_US_AB_Helmet_321
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Scrim)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_Scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_Scrim_ns: H_SPE_US_AB_Helmet_321_ns
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Scrim, Folded)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_Scrim_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_321_Scrim_up: H_SPE_US_AB_Helmet_321_ns
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Scrim, Hooked)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_Scrim_up_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_up.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_321_Scrim_os: H_SPE_US_AB_Helmet_321_os
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Scrim, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_Scrim_os_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_polar: H_SPE_US_AB_Helmet_321
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		scope = 2;
		displayName = "US AB Helmet, M2 321st (No. 1021)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","","","","",""};
		model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_NS.p3d";
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_polar_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_polar_ns: H_SPE_US_AB_Helmet_321_polar
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (No. 1021, Folded)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Alt_co.paa","","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_polar_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_NS.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_321_polar_os: H_SPE_US_AB_Helmet_321_polar
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (No. 1021, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_polar_os_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_OS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_polar_net: H_SPE_US_AB_Helmet_321_polar
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (No. 1021, Net)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_polar_net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_polar_net_ns: H_SPE_US_AB_Helmet_321_polar_ns
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (No. 1021, Net, Folded)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Alt_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_polar_net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_NS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_polar_net_os: H_SPE_US_AB_Helmet_321_polar_os
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (No. 1021, Net, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_polar_net_os_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_OS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_polar_Shrimpnet: H_SPE_US_AB_Helmet_321_polar
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (No. 1021, 1/4 Net)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_polar_net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_polar_Shrimpnet_ns: H_SPE_US_AB_Helmet_321_polar_ns
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (No. 1021, 1/4 Net, Folded)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Alt_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_polar_net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_NS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_polar_Shrimpnet_os: H_SPE_US_AB_Helmet_321_polar_os
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (No. 1021, 1/4 Net, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_polar_net_os_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_OS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_polar_Scrim: H_SPE_US_AB_Helmet_321_polar
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (No. 1021, Scrim)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_polar_Scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_polar_Scrim_ns: H_SPE_US_AB_Helmet_321_polar_ns
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (No. 1021, Scrim, Folded)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Alt_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_polar_Scrim_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_NS.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_321_polar_Scrim_os: H_SPE_US_AB_Helmet_321_polar_os
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (No. 1021, Scrim, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_polar_Scrim_os_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_OS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO: H_SPE_US_AB_Helmet_321
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Alt_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"x\wdc\addons\helmets\US_Airborne\US_Pot_321_NCO.rvmat","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_ns: H_SPE_US_AB_Helmet_321_NCO
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_Net: H_SPE_US_AB_Helmet_321_NCO
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Net, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_Net_ns: H_SPE_US_AB_Helmet_321_NCO
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Net, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_ShrimpNet: H_SPE_US_AB_Helmet_321_NCO
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (1/4 Net, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_ShrimpNet_ns: H_SPE_US_AB_Helmet_321_NCO
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (1/4 Net, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_Scrim: H_SPE_US_AB_Helmet_321_NCO
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Scrim, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_Scrim_ns: H_SPE_US_AB_Helmet_321_NCO_Scrim
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Scrim, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Scrim_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_321_CO: H_SPE_US_AB_Helmet_321
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (CO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Alt_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"x\wdc\addons\helmets\US_Airborne\US_Pot_321_CO.rvmat","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_CO_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_CO_ns: H_SPE_US_AB_Helmet_321_CO
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (CO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_CO_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_CO_Net: H_SPE_US_AB_Helmet_321_CO
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Net, CO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_CO_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_CO_Net_ns: H_SPE_US_AB_Helmet_321_CO
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Net, CO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_CO_Net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_321_CO_ShrimpNet: H_SPE_US_AB_Helmet_321_CO
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (1/4 Net, CO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_CO_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_CO_ShrimpNet_ns: H_SPE_US_AB_Helmet_321_CO
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (1/4 Net, CO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_CO_Net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_321_CO_Scrim: H_SPE_US_AB_Helmet_321_CO
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Scrim, CO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_CO_Scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_CO_Scrim_ns: H_SPE_US_AB_Helmet_321_CO_Scrim
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Scrim, CO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_CO_Scrim_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_briel: H_SPE_US_AB_Helmet_321
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Briel, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Alt_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"x\wdc\addons\helmets\US_Airborne\US_Pot_321_NCO_briel.rvmat","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_ns_briel: H_SPE_US_AB_Helmet_321_NCO_briel
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Briel, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_Net_briel: H_SPE_US_AB_Helmet_321_NCO_briel
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Briel, Net, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_Net_ns_briel: H_SPE_US_AB_Helmet_321_NCO_briel
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Briel, Net, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_ShrimpNet_briel: H_SPE_US_AB_Helmet_321_NCO_briel
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Briel, 1/4 Net, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_ShrimpNet_ns_briel: H_SPE_US_AB_Helmet_321_NCO_briel
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Briel, 1/4 Net, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_Scrim_briel: H_SPE_US_AB_Helmet_321_NCO_briel
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Briel, Scrim, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_Scrim_ns_briel: H_SPE_US_AB_Helmet_321_NCO_Scrim
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Briel, Scrim, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Scrim_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_molohon: H_SPE_US_AB_Helmet_321
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Molohon, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Alt_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"x\wdc\addons\helmets\US_Airborne\US_Pot_321_NCO_molohon.rvmat","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_ns_molohon: H_SPE_US_AB_Helmet_321_NCO_molohon
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Molohon, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_Net_molohon: H_SPE_US_AB_Helmet_321_NCO_molohon
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Molohon, Net, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_Net_ns_molohon: H_SPE_US_AB_Helmet_321_NCO_molohon
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Molohon, Net, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_ShrimpNet_molohon: H_SPE_US_AB_Helmet_321_NCO_molohon
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Molohon, 1/4 Net, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_ShrimpNet_ns_molohon: H_SPE_US_AB_Helmet_321_NCO_molohon
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Molohon, 1/4 Net, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_Scrim_molohon: H_SPE_US_AB_Helmet_321_NCO_molohon
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Molohon, Scrim, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_Scrim_ns_molohon: H_SPE_US_AB_Helmet_321_NCO_Scrim
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Molohon, Scrim, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Scrim_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_mordica: H_SPE_US_AB_Helmet_321
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Mordica, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Alt_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"x\wdc\addons\helmets\US_Airborne\US_Pot_321_NCO_mordica.rvmat","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_ns_mordica: H_SPE_US_AB_Helmet_321_NCO_mordica
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Mordica, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_Net_mordica: H_SPE_US_AB_Helmet_321_NCO_mordica
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Mordica, Net, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_Net_ns_mordica: H_SPE_US_AB_Helmet_321_NCO_mordica
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Mordica, Net, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_ShrimpNet_mordica: H_SPE_US_AB_Helmet_321_NCO_mordica
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Mordica, 1/4 Net, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_ShrimpNet_ns_mordica: H_SPE_US_AB_Helmet_321_NCO_mordica
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Mordica, 1/4 Net, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_Scrim_mordica: H_SPE_US_AB_Helmet_321_NCO_mordica
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Mordica, Scrim, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_Scrim_ns_mordica: H_SPE_US_AB_Helmet_321_NCO_Scrim
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Mordica, Scrim, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Scrim_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_smith: H_SPE_US_AB_Helmet_321
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Smith, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Alt_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"x\wdc\addons\helmets\US_Airborne\US_Pot_321_NCO_smith.rvmat","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_ns_smith: H_SPE_US_AB_Helmet_321_NCO_smith
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Smith, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_Net_smith: H_SPE_US_AB_Helmet_321_NCO_smith
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Smith, Net, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_Net_ns_smith: H_SPE_US_AB_Helmet_321_NCO_smith
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Smith, Net, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_ShrimpNet_smith: H_SPE_US_AB_Helmet_321_NCO_smith
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Smith, 1/4 Net, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_ShrimpNet_ns_smith: H_SPE_US_AB_Helmet_321_NCO_smith
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Smith, 1/4 Net, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_Scrim_smith: H_SPE_US_AB_Helmet_321_NCO_smith
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Smith, Scrim, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_Scrim_ns_smith: H_SPE_US_AB_Helmet_321_NCO_Scrim
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Smith, Scrim, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Scrim_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_huot: H_SPE_US_AB_Helmet_502
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Huot, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Alt_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"x\wdc\addons\helmets\US_Airborne\US_Pot_502_NCO_huot.rvmat","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_ns_huot: H_SPE_US_AB_Helmet_502_NCO_huot
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Huot, NCO, Opened";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Net_huot: H_SPE_US_AB_Helmet_502_NCO_huot
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Huot, Net, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Net_ns_huot: H_SPE_US_AB_Helmet_502_NCO_huot
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Huot, Net, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_ShrimpNet_huot: H_SPE_US_AB_Helmet_502_NCO_huot
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Huot, 1/4 Net, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_ShrimpNet_ns_huot: H_SPE_US_AB_Helmet_502_NCO_huot
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Huot, 1/4 Net, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Scrim_huot: H_SPE_US_AB_Helmet_502_NCO_huot
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Huot, Scrim, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Scrim_ns_huot: H_SPE_US_AB_Helmet_502_NCO_Scrim_huot
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Huot, Scrim, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Scrim_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_archer: H_SPE_US_AB_Helmet_502
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Archer, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Alt_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"x\wdc\addons\helmets\US_Airborne\US_Pot_502_NCO_archer.rvmat","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_ns_archer: H_SPE_US_AB_Helmet_502_NCO_archer
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Archer, NCO, Opened";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Net_archer: H_SPE_US_AB_Helmet_502_NCO_archer
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Archer, Net, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Net_ns_archer: H_SPE_US_AB_Helmet_502_NCO_archer
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Archer, Net, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_ShrimpNet_archer: H_SPE_US_AB_Helmet_502_NCO_archer
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Archer, 1/4 Net, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_ShrimpNet_ns_archer: H_SPE_US_AB_Helmet_502_NCO_archer
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Archer, 1/4 Net, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Scrim_archer: H_SPE_US_AB_Helmet_502_NCO_archer
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Archer, Scrim, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Scrim_ns_archer: H_SPE_US_AB_Helmet_502_NCO_Scrim_archer
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Archer, Scrim, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Scrim_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_briel: H_SPE_US_AB_Helmet_502
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Briel, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Alt_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"x\wdc\addons\helmets\US_Airborne\US_Pot_502_NCO_briel.rvmat","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_ns_briel: H_SPE_US_AB_Helmet_502_NCO_briel
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Briel, NCO, Opened";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Net_briel: H_SPE_US_AB_Helmet_502_NCO_briel
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Briel, Net, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Net_ns_briel: H_SPE_US_AB_Helmet_502_NCO_briel
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Briel, Net, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_ShrimpNet_briel: H_SPE_US_AB_Helmet_502_NCO_briel
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Briel, 1/4 Net, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_ShrimpNet_ns_briel: H_SPE_US_AB_Helmet_502_NCO_briel
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Briel, 1/4 Net, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Scrim_briel: H_SPE_US_AB_Helmet_502_NCO_briel
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Briel, Scrim, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Scrim_ns_briel: H_SPE_US_AB_Helmet_502_NCO_Scrim_briel
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Briel, Scrim, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Scrim_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_hardy: H_SPE_US_AB_Helmet_502
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Hardy, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Alt_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"x\wdc\addons\helmets\US_Airborne\US_Pot_502_NCO_hardy.rvmat","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_ns_hardy: H_SPE_US_AB_Helmet_502_NCO_hardy
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Hardy, NCO, Opened";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Net_hardy: H_SPE_US_AB_Helmet_502_NCO_hardy
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Hardy, Net, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Net_ns_hardy: H_SPE_US_AB_Helmet_502_NCO_hardy
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Hardy, Net, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_ShrimpNet_hardy: H_SPE_US_AB_Helmet_502_NCO_hardy
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Hardy, 1/4 Net, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_ShrimpNet_ns_hardy: H_SPE_US_AB_Helmet_502_NCO_hardy
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Hardy, 1/4 Net, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Scrim_hardy: H_SPE_US_AB_Helmet_502_NCO_hardy
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Hardy, Scrim, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Scrim_ns_hardy: H_SPE_US_AB_Helmet_502_NCO_Scrim_hardy
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Hardy, Scrim, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Scrim_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_ledford: H_SPE_US_AB_Helmet_502
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Ledford, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Alt_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"x\wdc\addons\helmets\US_Airborne\US_Pot_502_NCO_ledford.rvmat","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_ns_ledford: H_SPE_US_AB_Helmet_502_NCO_ledford
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Ledford, NCO, Opened";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Net_ledford: H_SPE_US_AB_Helmet_502_NCO_ledford
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Ledford, Net, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Net_ns_ledford: H_SPE_US_AB_Helmet_502_NCO_ledford
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Ledford, Net, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_ShrimpNet_ledford: H_SPE_US_AB_Helmet_502_NCO_ledford
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Ledford, 1/4 Net, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_ShrimpNet_ns_ledford: H_SPE_US_AB_Helmet_502_NCO_ledford
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Ledford, 1/4 Net, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Scrim_ledford: H_SPE_US_AB_Helmet_502_NCO_ledford
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Ledford, Scrim, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Scrim_ns_ledford: H_SPE_US_AB_Helmet_502_NCO_Scrim_ledford
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Ledford, Scrim, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Scrim_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_mantle: H_SPE_US_AB_Helmet_502
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Mantle, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Alt_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"x\wdc\addons\helmets\US_Airborne\US_Pot_502_NCO_mantle.rvmat","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_ns_mantle: H_SPE_US_AB_Helmet_502_NCO_mantle
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Mantle, NCO, Opened";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Net_mantle: H_SPE_US_AB_Helmet_502_NCO_mantle
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Mantle, Net, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Net_ns_mantle: H_SPE_US_AB_Helmet_502_NCO_mantle
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Mantle, Net, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_ShrimpNet_mantle: H_SPE_US_AB_Helmet_502_NCO_mantle
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Mantle, 1/4 Net, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_ShrimpNet_ns_mantle: H_SPE_US_AB_Helmet_502_NCO_mantle
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Mantle, 1/4 Net, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Scrim_mantle: H_SPE_US_AB_Helmet_502_NCO_mantle
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Mantle, Scrim, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Scrim_ns_mantle: H_SPE_US_AB_Helmet_502_NCO_Scrim_mantle
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Mantle, Scrim, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Scrim_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_marshall: H_SPE_US_AB_Helmet_502
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Marshall, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Alt_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"x\wdc\addons\helmets\US_Airborne\US_Pot_502_NCO_marshall.rvmat","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_ns_marshall: H_SPE_US_AB_Helmet_502_NCO_marshall
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Marshall, NCO, Opened";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Net_marshall: H_SPE_US_AB_Helmet_502_NCO_marshall
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Marshall, Net, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Net_ns_marshall: H_SPE_US_AB_Helmet_502_NCO_marshall
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Marshall, Net, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_ShrimpNet_marshall: H_SPE_US_AB_Helmet_502_NCO_marshall
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Marshall, 1/4 Net, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_ShrimpNet_ns_marshall: H_SPE_US_AB_Helmet_502_NCO_marshall
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Marshall, 1/4 Net, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Scrim_marshall: H_SPE_US_AB_Helmet_502_NCO_marshall
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Marshall, Scrim, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Scrim_ns_marshall: H_SPE_US_AB_Helmet_502_NCO_Scrim_marshall
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Marshall, Scrim, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Scrim_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_molohon: H_SPE_US_AB_Helmet_502
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Molohon, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Alt_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"x\wdc\addons\helmets\US_Airborne\US_Pot_502_NCO_molohon.rvmat","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_ns_molohon: H_SPE_US_AB_Helmet_502_NCO_molohon
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Molohon, NCO, Opened";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Net_molohon: H_SPE_US_AB_Helmet_502_NCO_molohon
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Molohon, Net, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Net_ns_molohon: H_SPE_US_AB_Helmet_502_NCO_molohon
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Molohon, Net, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_ShrimpNet_molohon: H_SPE_US_AB_Helmet_502_NCO_molohon
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Molohon, 1/4 Net, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_ShrimpNet_ns_molohon: H_SPE_US_AB_Helmet_502_NCO_molohon
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Molohon, 1/4 Net, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Scrim_molohon: H_SPE_US_AB_Helmet_502_NCO_molohon
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Molohon, Scrim, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Scrim_ns_molohon: H_SPE_US_AB_Helmet_502_NCO_Scrim_molohon
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Molohon, Scrim, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Scrim_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_mordica: H_SPE_US_AB_Helmet_502
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Mordica, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Alt_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"x\wdc\addons\helmets\US_Airborne\US_Pot_502_NCO_mordica.rvmat","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_ns_mordica: H_SPE_US_AB_Helmet_502_NCO_mordica
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Mordica, NCO, Opened";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Net_mordica: H_SPE_US_AB_Helmet_502_NCO_mordica
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Mordica, Net, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Net_ns_mordica: H_SPE_US_AB_Helmet_502_NCO_mordica
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Mordica, Net, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_ShrimpNet_mordica: H_SPE_US_AB_Helmet_502_NCO_mordica
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Mordica, 1/4 Net, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_ShrimpNet_ns_mordica: H_SPE_US_AB_Helmet_502_NCO_mordica
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Mordica, 1/4 Net, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Scrim_mordica: H_SPE_US_AB_Helmet_502_NCO_mordica
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Mordica, Scrim, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Scrim_ns_mordica: H_SPE_US_AB_Helmet_502_NCO_Scrim_mordica
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Mordica, Scrim, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Scrim_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_smith: H_SPE_US_AB_Helmet_502
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Smith, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Alt_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"x\wdc\addons\helmets\US_Airborne\US_Pot_502_NCO_smith.rvmat","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_ns_smith: H_SPE_US_AB_Helmet_502_NCO_smith
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Smith, NCO, Opened";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Net_smith: H_SPE_US_AB_Helmet_502_NCO_smith
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Smith, Net, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Net_ns_smith: H_SPE_US_AB_Helmet_502_NCO_smith
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Smith, Net, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_ShrimpNet_smith: H_SPE_US_AB_Helmet_502_NCO_smith
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Smith, 1/4 Net, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_ShrimpNet_ns_smith: H_SPE_US_AB_Helmet_502_NCO_smith
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Smith, 1/4 Net, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Scrim_smith: H_SPE_US_AB_Helmet_502_NCO_smith
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Smith, Scrim, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Scrim_ns_smith: H_SPE_US_AB_Helmet_502_NCO_Scrim_smith
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Smith, Scrim, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Scrim_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_randazzo: H_SPE_US_AB_Helmet_502
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Randazzo, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Alt_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"x\wdc\addons\helmets\US_Airborne\US_Pot_502_NCO_randazzo.rvmat","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_ns_randazzo: H_SPE_US_AB_Helmet_502_NCO_randazzo
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Randazzo, NCO, Opened";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Net_randazzo: H_SPE_US_AB_Helmet_502_NCO_randazzo
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Randazzo, Net, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Net_ns_randazzo: H_SPE_US_AB_Helmet_502_NCO_randazzo
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Randazzo, Net, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_ShrimpNet_randazzo: H_SPE_US_AB_Helmet_502_NCO_randazzo
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Randazzo, 1/4 Net, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_ShrimpNet_ns_randazzo: H_SPE_US_AB_Helmet_502_NCO_randazzo
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Randazzo, 1/4 Net, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Scrim_randazzo: H_SPE_US_AB_Helmet_502_NCO_randazzo
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Randazzo, Scrim, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Scrim_ns_randazzo: H_SPE_US_AB_Helmet_502_NCO_Scrim_randazzo
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Randazzo, Scrim, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Scrim_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_robinson: H_SPE_US_AB_Helmet_502
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Robinson, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Alt_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"x\wdc\addons\helmets\US_Airborne\US_Pot_502_NCO_robinson.rvmat","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_ns_robinson: H_SPE_US_AB_Helmet_502_NCO_robinson
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Robinson, NCO, Opened";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Net_robinson: H_SPE_US_AB_Helmet_502_NCO_robinson
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Robinson, Net, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Net_ns_robinson: H_SPE_US_AB_Helmet_502_NCO_robinson
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Robinson, Net, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_ShrimpNet_robinson: H_SPE_US_AB_Helmet_502_NCO_robinson
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Robinson, 1/4 Net, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_ShrimpNet_ns_robinson: H_SPE_US_AB_Helmet_502_NCO_robinson
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Robinson, 1/4 Net, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Scrim_robinson: H_SPE_US_AB_Helmet_502_NCO_robinson
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Robinson, Scrim, NCO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Scrim_ns_robinson: H_SPE_US_AB_Helmet_502_NCO_Scrim_robinson
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Robinson, Scrim, NCO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Scrim_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_502_CO_cooper: H_SPE_US_AB_Helmet_502
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Cooper, CO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Alt_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"x\wdc\addons\helmets\US_Airborne\US_Pot_502_CO_cooper.rvmat","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_CO_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_CO_ns_cooper: H_SPE_US_AB_Helmet_502_CO_cooper
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Cooper, CO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_CO_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_CO_Net_cooper: H_SPE_US_AB_Helmet_502_CO_cooper
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Cooper, Net, CO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_CO_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_CO_Net_ns_cooper: H_SPE_US_AB_Helmet_502_CO_cooper
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Cooper, Net, CO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_CO_Net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_502_CO_ShrimpNet_cooper: H_SPE_US_AB_Helmet_502_CO_cooper
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Cooper, 1/4 Net, CO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_CO_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_CO_ShrimpNet_ns_cooper: H_SPE_US_AB_Helmet_502_CO_cooper
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Cooper, 1/4 Net, CO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_CO_Net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_502_CO_Scrim_cooper: H_SPE_US_AB_Helmet_502_CO_cooper
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Cooper, Scrim, CO)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Dunkel_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_CO_Scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_CO_Scrim_ns_cooper: H_SPE_US_AB_Helmet_502_CO_Scrim
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US AB Helmet, M2 502d (Cooper, Scrim, CO, Opened)";
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Scrim_mc.paa","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_CO_Scrim_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
};
