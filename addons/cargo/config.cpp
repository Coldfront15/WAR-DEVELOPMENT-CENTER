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
	class SPE_Plane_base;
	class SPE_US_Plane_base: SPE_Plane_base {};
	class SPEX_C47_Skytrain : SPE_US_Plane_base {
		ace_refuel_fuelCapacity = 3043;
		ace_cargo_loadmasterTurrets[] = {{1}};
		ace_cargo_space=7;
		ace_cargo_hasCargo=1;
	};
};