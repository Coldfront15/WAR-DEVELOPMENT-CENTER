#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] =
		{
			"ace_cargo",
			"ww2_spex_assets_c_vehicles_planes_c"
		};
        VERSION_CONFIG;
    };
};

class CfgVehicles
{
	class All {};
	class AllVehicles: All {};
	class Land: AllVehicles {};
	class LandVehicle: Land {};
	class StaticWeapon: LandVehicle {};
	class Car: LandVehicle {};
	class Car_F: Car {};
	class SPE_Car_base: Car_F {};
	class SPE_Plane_base;
	class SPEX_StaticTrailer_Base: StaticWeapon {};
	class SPEX_T3_Trailer: SPEX_StaticTrailer_Base {
		ace_cargo_space = 4;
		ace_cargo_hasCargo = 1;
	};
	class SPEX_T3_Trailer_Ammo: SPEX_T3_Trailer {
		ace_rearm_defaultSupply = 1200;
	};
	class SPEX_T3_Trailer_Fuel: SPEX_T3_Trailer {
		ace_refuel_fuelCapacity = 200;
	};
	class SPEX_T3_Trailer_Repair: SPEX_T3_Trailer {
		ace_repair_canRepair = 1;
		ace_repair_spareWheels = 2;
		ace_repair_spareTracks = 2;
	};
	class SPE_US_Plane_base: SPE_Plane_base {};
	class SPEX_C47_Skytrain : SPE_US_Plane_base {
		ace_refuel_fuelCapacity = 3043;
		ace_cargo_loadmasterTurrets[] = {{1}};
		ace_cargo_space=7;
		ace_cargo_hasCargo=1;
	};
	class SPEX_GC4_WACO: SPE_US_Plane_base {
		ace_cargo_space = 12;
		ace_cargo_hasCargo = 1;
	};
	class SPEX_GC4_WACO_Cargo : SPE_US_Plane_base {
		ace_cargo_space = 12;
		ace_cargo_hasCargo = 1;
	};
	class SPE_G503_MB_base: SPE_Car_base
	{
		ace_cargo_space = 4;
		ace_cargo_hasCargo = 1;
	};
};
