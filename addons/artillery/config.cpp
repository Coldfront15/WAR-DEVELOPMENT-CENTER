
#include "script_component.hpp"

class CfgPatches {
    class ADDON {
		name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"cba_main","ace_interact_menu","tbd_mortars_main","ww2_spe_assets_c_vehicles_staticweapons_u1_c"};
		author = "Coldfront15";
		skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
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
