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
};