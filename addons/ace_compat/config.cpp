#include "script_component.hpp"

class CfgPatches {
    class ADDON {
		name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"cba_main","ace_interact_menu","ww2_spe_assets_c_vehicles_staticweapons_u1_c"};
		author = "Coldfront15";
        VERSION_CONFIG;
    };
};

class Extended_PreInit_EventHandlers
{
	class wdc_ace_compat
	{
		init = "call compile preprocessFileLineNumbers '\x\wdc\addons\ace_compat\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class wdc_ace_compat
	{
		init = "call compile preprocessFileLineNumbers '\x\wdc\addons\ace_compat\XEH_postInit.sqf'";
	};
};
class Extended_PreStart_EventHandlers
{
	class wdc_ace_compat
	{
		init = "call compile preprocessFileLineNumbers '\x\wdc\addons\ace_compat\XEH_preStart.sqf'";
	};
};