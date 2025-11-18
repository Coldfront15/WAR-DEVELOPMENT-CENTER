#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] =
		{
			"ace_minedetector",
			"ww2_spex_assets_c_vehicles_planes_c"
		};
        VERSION_CONFIG;
    };
};

class CfgAmmo
{
	class MineCore;
	class PipeBombBase;
	class SPE_MAIN_mine: MineCore
	{
		ace_minedetector_detectable = 1;
	};
	class SPE_MAIN_pipebomb: PipeBombBase
	{
		ace_minedetector_detectable = 1;
	};
};