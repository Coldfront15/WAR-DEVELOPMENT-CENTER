#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
		name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {
            "cba_main",
            "ace_interact_menu",
            "ww2_spe_assets_c_vehicles_staticweapons_u1_c",
            "WW2_SPEX_Core_c_ace_compat_spex_c_csw"
            };
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
