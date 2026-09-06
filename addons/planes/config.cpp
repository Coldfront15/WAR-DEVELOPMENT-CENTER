class CfgPatches
{
	class wdc_planes
	{
		units[] = {
            "SPE_P47_62"
        };
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
	class SPE_P47_62: SPE_P47
	{
        displayName = "P-47D Thunderbolt (62d Sqdn)";
        author = "Heavy Ordnance Works";//"AWAR"
		dlc = "SPE";
		scope = 2;
        scopeCurator = 2;
		class textureSources
		{
			class ramirez62
			{
				displayName = "62d Fighter Squadron (Ramirez)";
				author = "Mast (M60A3)";//"AWAR"
				dlc = "SPE";
				textures[] = {
                    "x\wdc\addons\planes\62FS\P47\Ramirez\P47_Fuselage_Ramirez_co.paa",
                "x\wdc\addons\planes\62FS\P47\Ramirez\P47_Wings_Ramirez_co.paa",
                "WW2\SPE_Assets_t\Vehicles\Planes_t\P47\P47_Cockpit_1_co.paa",
                "WW2\SPE_Assets_t\Vehicles\Planes_t\P47\P47_Cockpit_2_co.paa",
                "WW2\SPE_Assets_t\Vehicles\Planes_t\P47\P47_Misc_co.paa",
                "WW2\SPE_Assets_t\Vehicles\Planes_t\P47\P47_Exterior_Decals_ca.paa",
                ""
                };
				factions[] = {"SPE_US_ARMY"};
				materials[] = {
                    "x\wdc\addons\planes\62FS\P47\Ramirez\P47_Fuselage_Ramirez.rvmat",
                    "x\wdc\addons\planes\62FS\P47\Ramirez\P47_Wings_Ramirez.rvmat",
                    "WW2\SPE_Assets_r\Vehicles\Planes_r\P47\Cockpit_1.rvmat",
                    "WW2\SPE_Assets_r\Vehicles\Planes_r\P47\Cockpit_2.rvmat",
                    "WW2\SPE_Assets_r\Vehicles\Planes_r\P47\Misc.rvmat"
                };
			};
            class mast62
			{
				displayName = "62d Fighter Squadron (Mast)";
				author = "Mast (M60A3)";//"AWAR"
				dlc = "SPE";
				textures[] = {
                    "x\wdc\addons\planes\62FS\P47\Mast\P47_Fuselage_Mast_co.paa",
                    "x\wdc\addons\planes\62FS\P47\Mast\P47_Wings_Mast_co.paa",
                    "WW2\SPE_Assets_t\Vehicles\Planes_t\P47\P47_Cockpit_1_co.paa",
                    "WW2\SPE_Assets_t\Vehicles\Planes_t\P47\P47_Cockpit_2_co.paa",
                    "WW2\SPE_Assets_t\Vehicles\Planes_t\P47\P47_Misc_co.paa",
                    "WW2\SPE_Assets_t\Vehicles\Planes_t\P47\P47_Exterior_Decals_ca.paa",
                    ""
                    };
				factions[] = {"SPE_US_ARMY"};
				materials[] = {
                    "x\wdc\addons\planes\62FS\P47\Mast\P47_Fuselage_Mast.rvmat",
                    "x\wdc\addons\planes\62FS\P47\Mast\P47_Wings_Mast.rvmat",
                    "WW2\SPE_Assets_r\Vehicles\Planes_r\P47\Cockpit_1.rvmat",
                    "WW2\SPE_Assets_r\Vehicles\Planes_r\P47\Cockpit_2.rvmat",
                    "WW2\SPE_Assets_r\Vehicles\Planes_r\P47\Misc.rvmat"
                    };
			};
		};
		textureList[] = {"mast62", 1, "ramirez62", 1};
	};
};
