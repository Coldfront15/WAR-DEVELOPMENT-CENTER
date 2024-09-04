class CfgPatches
{
	class wdc_planes
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"WW2_SPE_Core_c_Core_c","WW2_SPE_Assets_c_Vehicles_Planes_c_P47"};
	};
};

class CfgVehicles
{
	class All;
	class AllVehicles: All
	{
		class NewTurret;
		class ViewCargo;
	};
	class Air: AllVehicles
	{
		class AnimationSources;
	};
	class Plane: Air
	{
		class ViewPilot;
		class HitPoints;
	};
	class Plane_Base_F: Plane
	{
		class Turrets
		{
			class CopilotTurret: NewTurret
			{
				class ViewGunner: ViewPilot
				{
				};
			};
		};
		class HitPoints: HitPoints
		{
		};
	};
	class SPE_Plane_base: Plane_Base_F
	{
		class AnimationSources;
		class HitPoints: HitPoints
		{
		};
		class Turrets: Turrets
		{
			class MainTurret: NewTurret {};
		};
		class CargoTurret;
	};
	class SPE_US_Plane_base: SPE_Plane_base
	{
		class ViewPilot;
		class AnimationSources;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
		};
	};
	class SPE_P47;
	class SPE_P47_335: SPE_P47
	{
		displayName = "P-47D-28 (335th Squadron)";
		hiddenSelections[] = {
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"num_1",
			"num_2",
			"num_3",
			"num_4",
			"num_5",
			"num_6",
			"letter_1",
			"letter_2",
			"letter_3"
		};
		hiddenSelectionsTextures[] = {
			"x\wdc\addons\planes\335FS\P47\P47_Fuselage_335_co.paa",
			"x\wdc\addons\planes\335FS\P47\P47_Wings_335_co.paa",
			"WW2\SPE_Assets_t\Vehicles\Planes_t\P47\P47_Cockpit_1_co.paa",
			"WW2\SPE_Assets_t\Vehicles\Planes_t\P47\P47_Cockpit_2_co.paa",
			"WW2\SPE_Assets_t\Vehicles\Planes_t\P47\P47_Misc_co.paa",
			"WW2\SPE_Assets_t\Vehicles\Planes_t\P47\P47_Exterior_Decals_ca.paa",
			"WW2\SPE_Assets_t\Vehicles\Planes_t\P47\P47_Nose_Checker_ca.paa"
		};
		class textureSources
		{
			class standard335
			{
				displayName = "335th Fighter Squadron (Red Chief)";
				author = "Heavy Ordnance Works";//"AWAR"
				dlc = "SPE";
				textures[] = {"x\wdc\addons\planes\335FS\P47\P47_Fuselage_335_co.paa","x\wdc\addons\planes\335FS\P47\P47_Wings_335_co.paa","WW2\SPE_Assets_t\Vehicles\Planes_t\P47\P47_Cockpit_1_co.paa","WW2\SPE_Assets_t\Vehicles\Planes_t\P47\P47_Cockpit_2_co.paa","WW2\SPE_Assets_t\Vehicles\Planes_t\P47\P47_Misc_co.paa","WW2\SPE_Assets_t\Vehicles\Planes_t\P47\P47_Exterior_Decals_ca.paa","WW2\SPE_Assets_t\Vehicles\Planes_t\P47\P47_Nose_Checker_ca.paa"};
				factions[] = {"SPE_US_ARMY"};
				materials[] = {"x\wdc\addons\planes\335FS\P47\Fuselage_335.rvmat","x\wdc\addons\planes\335FS\P47\Wings_335.rvmat","WW2\SPE_Assets_r\Vehicles\Planes_r\P47\Cockpit_1.rvmat","WW2\SPE_Assets_r\Vehicles\Planes_r\P47\Cockpit_2.rvmat","WW2\SPE_Assets_r\Vehicles\Planes_r\P47\Misc.rvmat"};
			};
			class cooper335
			{
				displayName = "335th Fighter Squadron (Cooper)";
				author = "Heavy Ordnance Works";//"AWAR"
				dlc = "SPE";
				textures[] = {"x\wdc\addons\planes\335FS\P47\P47_Fuselage_Cooper_co.paa","x\wdc\addons\planes\335FS\P47\P47_Wings_335_co.paa","WW2\SPE_Assets_t\Vehicles\Planes_t\P47\P47_Cockpit_1_co.paa","WW2\SPE_Assets_t\Vehicles\Planes_t\P47\P47_Cockpit_2_co.paa","WW2\SPE_Assets_t\Vehicles\Planes_t\P47\P47_Misc_co.paa","WW2\SPE_Assets_t\Vehicles\Planes_t\P47\P47_Exterior_Decals_ca.paa","WW2\SPE_Assets_t\Vehicles\Planes_t\P47\P47_Nose_Checker_ca.paa"};
				factions[] = {"SPE_US_ARMY"};
				materials[] = {"x\wdc\addons\planes\335FS\P47\Fuselage_Cooper.rvmat","x\wdc\addons\planes\335FS\P47\Wings_335.rvmat","WW2\SPE_Assets_r\Vehicles\Planes_r\P47\Cockpit_1.rvmat","WW2\SPE_Assets_r\Vehicles\Planes_r\P47\Cockpit_2.rvmat","WW2\SPE_Assets_r\Vehicles\Planes_r\P47\Misc.rvmat"};
			};
		};
		textureList[] = {"standard335", 1, "cooper335", 1};
	};
};
