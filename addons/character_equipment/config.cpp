#include "script_component.hpp"

class CfgPatches {
	class ADDON {
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        ammo[] = {};
        units[] = {};
		magazines[] = {};
		weapons[] = {};
		requiredAddons[] = {};
        VERSION_CONFIG;
	};
};

class CfgGlasses
{
	class None;
    class wdc_armband_blufor: None
    {
        scope = 2;
        author = "Coldfront15";
        displayname = "Armband (Blufor)";
        model = "x\wdc\addons\character_equipment\wdc_armband.p3d";
        picture = "";
        hiddenSelections[] = {"falg_left"};
        hiddenSelectionsTextures[] = {"x\wdc\addons\character_equipment\data\wdc_armband_blue_co.paa"};
        identityTypes[] = {};
        mass = 2;
    };
    class wdc_armband_redfor: None
    {
        scope = 2;
        author = "Coldfront15";
        displayname = "Armband (Redfor)";
        model = "x\wdc\addons\character_equipment\wdc_armband.p3d";
        picture = "";
        hiddenSelections[] = {"falg_left"};
        hiddenSelectionsTextures[] = {"x\wdc\addons\character_equipment\data\wdc_armband_red_co.paa"};
        identityTypes[] = {};
        mass = 2;
    };
};