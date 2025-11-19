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

#include "CfgMagazineGroups.hpp"
#include "CfgAmmo.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"