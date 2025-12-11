#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "A3_Data_F_Tank_Loadorder",
            "cba_main",
            "ace_main"
        };
        author = "Coldfront15";
        VERSION_CONFIG;
    };
};


class CfgEditorCategories
{
	class WDC_Items // Category class, you point to it in editorCategory property
	{
		displayName = "War Department Center"; // Name visible in the list
	};
};

class CfgEditorSubcategories
{
	class WDC_ACE_Items // Category class, you point to it in editorSubcategory property
	{
		displayName = "Medical Corps"; // Name visible in the list
	};
    class WDC_Supplies // Category class, you point to it in editorSubcategory property
	{
		displayName = "Supplies"; // Name visible in the list
	};
    class WDC_Items // Category class, you point to it in editorSubcategory property
	{
		displayName = "Items"; // Name visible in the list
	};
    class WDC_Forms // Category class, you point to it in editorSubcategory property
	{
		displayName = "Forms"; // Name visible in the list
	};
     class WDC_Intelligence // Category class, you point to it in editorSubcategory property
	{
		displayName = "Intelligence"; // Name visible in the list
	};
	class WDC_Buildings // Category class, you point to it in editorSubcategory property
	{
		displayName = "Buildings"; // Name visible in the list
	};
};

class CfgUnitInsignia
{
	class WDC_502_HQS_S2
	{
		author = "WDC";
		displayName = "502d HQ, S2";
		texture = "\x\wdc\addons\main\data\US_Badge_502HQS2_mc.paa";
	};
};

class CfgUnitBadges
{
	class WDC_502_HQS_S2
	{
		author = "WDC";
		displayName = "502d HQ, S2";
		texture = "\x\wdc\addons\main\data\US_SubBadge_502HQS2_mc.paa";
        textureVehicle = "";
	};
};
