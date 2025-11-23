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

class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
			class ACE_Equipment {
				class probeForMines {
					displayName = "Probe for Mines";
					condition = "[_player] call wdc_compat_fnc_canDetectMine";
					exceptions[] = {};
					statement = "[_player] call wdc_compat_fnc_detectMine";
					icon = "";
				};
			};
        };
    };
};
