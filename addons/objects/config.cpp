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

class CfgVehicles
{
	class Items_base_F;
    class wdc_form_a4_base: Items_base_F
	{
        scope = 0;
		scopeCurator = 0;
        icon = "iconObject_1x1";
        editorCategory = "WDC_Items";
		editorSubcategory = "WDC_Items";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"a3\weapons_f_orange\ammo\data\leaflet_default_co.paa"};
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Leaflet_05_Stack_F.jpg";
		displayName = "Form A4 - Base Form";
		model = "\x\wdc\addons\objects\wdc_us_form_a4.p3d";
		class Attributes
		{
			class ObjectTextureCustom0
			{
				displayName = "$STR_3den_object_attribute_objecttexturecustom0_displayname";
				tooltip = "$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property = "ObjectTextureCustom0";
				control = "Edit";
				expression = "_this setObjectTextureGlobal [0,_value]";
				defaultValue = "getObjectTextures _this select 0";
			};
			class ObjectMaterialCustom0
			{
				displayName = "$STR_3den_object_attribute_objectmaterialcustom0_displayname";
				tooltip = "$STR_3den_object_attribute_objectmaterialcustom_tooltip";
				property = "ObjectMaterialCustom0";
				control = "Edit";
				expression = "_this setObjectMaterialGlobal [0,_value]";
				defaultValue = "getObjectMaterials _this select 0";
			};
		};
	};
    class wdc_form_a4_stack_base: wdc_form_a4_base
	{
        scope = 0;
		scopeCurator = 0;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"a3\weapons_f_orange\ammo\data\leaflet_default_co.paa"};
		hiddenSelectionsMaterials[] = {""};
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Leaflet_05_Stack_F.jpg";
		displayName = "Form A4 - Base Form (Stack)";
		model = "\x\wdc\addons\objects\wdc_us_form_a4_stack.p3d";
	};
    class wdc_form_a4_400: wdc_form_a4_base
	{
		author = "Coldfront15";
        editorCategory = "WDC_Items";
		editorSubcategory = "WDC_Items";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\x\wdc\addons\objects\data\wdc_us_form_400.paa"};
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.076;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\x\wdc\addons\objects\data\prev\wdc_form_a4_400.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Form 400 - Requisition";
	};
    class wdc_form_a4_stack_400: wdc_form_a4_stack_base
	{
		author = "Coldfront15";
        hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\x\wdc\addons\objects\data\wdc_us_form_400.paa"};
        class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.003;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\x\wdc\addons\objects\data\prev\wdc_form_a4_stack_400.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Form 400 - Requisition (Stack)";
	};
	class wdc_form_a4_81: wdc_form_a4_base
	{
		author = "Coldfront15";
        editorCategory = "WDC_Items";
		editorSubcategory = "WDC_Items";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\x\wdc\addons\objects\data\wdc_us_form_81.paa"};
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.076;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\x\wdc\addons\objects\data\prev\wdc_form_a4_81.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Form 81 - Immunizations";
		model = "\x\wdc\addons\objects\wdc_us_form_a4_81.p3d";
	};
	class wdc_form_a4_81_stack: wdc_form_a4_base
	{
		author = "Coldfront15";
        editorCategory = "WDC_Items";
		editorSubcategory = "WDC_Items";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\x\wdc\addons\objects\data\wdc_us_form_81.paa"};
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.076;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\x\wdc\addons\objects\data\prev\wdc_form_a4_81_stack.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Form 81 - Immunizations (Stack)";
		model = "\x\wdc\addons\objects\wdc_us_form_a4_81_stack.p3d";
	};
	class wdc_map_utah: Items_base_F
	{
		author = "Coldfront15";
        editorCategory = "WDC_Items";
		editorSubcategory = "WDC_Items";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.076;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Leaflet_05_Stack_F.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Map (Utah Beach)";
		model = "\x\wdc\addons\objects\wdc_us_map_utah.p3d";
	}; //diag.exe - diag_exportTerrainSVG ["C:\arma3\terrain\darkestDecember.svg", false, true, true, false, false, false];
	class wdc_map_carentan: Items_base_F
	{
		author = "Coldfront15";
        editorCategory = "WDC_Items";
		editorSubcategory = "WDC_Items";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.076;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Leaflet_05_Stack_F.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Map (Carentan)";
		model = "\x\wdc\addons\objects\wdc_us_map_carentan.p3d";
	};
	class wdc_map_lingevres: Items_base_F
	{
		author = "Coldfront15";
        editorCategory = "WDC_Items";
		editorSubcategory = "WDC_Items";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.076;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Leaflet_05_Stack_F.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Map (Lingevres)";
		model = "\x\wdc\addons\objects\wdc_us_map_lingevres.p3d";
	};
	class wdc_map_mortain: Items_base_F
	{
		author = "Coldfront15";
        editorCategory = "WDC_Items";
		editorSubcategory = "WDC_Items";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.076;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Leaflet_05_Stack_F.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Map (Mortain)";
		model = "\x\wdc\addons\objects\wdc_us_map_mortain.p3d";
	};
	class wdc_map_normandy: Items_base_F
	{
		author = "Coldfront15";
        editorCategory = "WDC_Items";
		editorSubcategory = "WDC_Items";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.076;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Leaflet_05_Stack_F.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Map (Normandy)";
		model = "\x\wdc\addons\objects\wdc_us_map_normandy.p3d";
	};
	class wdc_map_angola: Items_base_F
	{
		author = "Coldfront15";
        editorCategory = "WDC_Items";
		editorSubcategory = "WDC_Items";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.076;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Leaflet_05_Stack_F.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Map (Algeria)";
		model = "\x\wdc\addons\objects\wdc_us_map_angola.p3d";
	};
	class wdc_map_anizay: Items_base_F
	{
		author = "Coldfront15";
        editorCategory = "WDC_Items";
		editorSubcategory = "WDC_Items";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.076;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Leaflet_05_Stack_F.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Map (Tunisia)";
		model = "\x\wdc\addons\objects\wdc_us_map_anizay.p3d";
	};
	class wdc_map_bastogne: Items_base_F
	{
		author = "Coldfront15";
        editorCategory = "WDC_Items";
		editorSubcategory = "WDC_Items";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.076;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Leaflet_05_Stack_F.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Map (Bastogne)";
		model = "\x\wdc\addons\objects\wdc_us_map_bastogne.p3d";
	};
	class wdc_map_benouville: Items_base_F
	{
		author = "Coldfront15";
        editorCategory = "WDC_Items";
		editorSubcategory = "WDC_Items";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.076;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Leaflet_05_Stack_F.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Map (Benouville)";
		model = "\x\wdc\addons\objects\wdc_us_map_benouville.p3d";
	};
	class wdc_map_garmanda: Items_base_F
	{
		author = "Coldfront15";
        editorCategory = "WDC_Items";
		editorSubcategory = "WDC_Items";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.076;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Leaflet_05_Stack_F.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Map (Sauerland)";
		model = "\x\wdc\addons\objects\wdc_us_map_garmanda.p3d";
	};
	class wdc_map_henderson: Items_base_F
	{
		author = "Coldfront15";
        editorCategory = "WDC_Items";
		editorSubcategory = "WDC_Items";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.076;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Leaflet_05_Stack_F.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Map (Henderson Field)";
		model = "\x\wdc\addons\objects\wdc_us_map_henderson.p3d";
	};
	class wdc_map_holland: Items_base_F
	{
		author = "Coldfront15";
        editorCategory = "WDC_Items";
		editorSubcategory = "WDC_Items";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.076;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Leaflet_05_Stack_F.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Map (Holland)";
		model = "\x\wdc\addons\objects\wdc_us_map_holland.p3d";
	};
	class wdc_map_iwojima: Items_base_F
	{
		author = "Coldfront15";
        editorCategory = "WDC_Items";
		editorSubcategory = "WDC_Items";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.076;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Leaflet_05_Stack_F.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Map (Iwo Jima)";
		model = "\x\wdc\addons\objects\wdc_us_map_iwojima.p3d";
	};
	class wdc_map_manila: Items_base_F
	{
		author = "Coldfront15";
        editorCategory = "WDC_Items";
		editorSubcategory = "WDC_Items";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.076;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Leaflet_05_Stack_F.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Map (Manila)";
		model = "\x\wdc\addons\objects\wdc_us_map_manila.p3d";
	};
	class wdc_map_moder: Items_base_F
	{
		author = "Coldfront15";
        editorCategory = "WDC_Items";
		editorSubcategory = "WDC_Items";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.076;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Leaflet_05_Stack_F.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Map (Moder)";
		model = "\x\wdc\addons\objects\wdc_us_map_moder.p3d";
	};
	class wdc_map_okinawa: Items_base_F
	{
		author = "Coldfront15";
        editorCategory = "WDC_Items";
		editorSubcategory = "WDC_Items";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.076;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Leaflet_05_Stack_F.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Map (Okinawa)";
		model = "\x\wdc\addons\objects\wdc_us_map_okinawa.p3d";
	};
	class wdc_map_omaha: Items_base_F
	{
		author = "Coldfront15";
        editorCategory = "WDC_Items";
		editorSubcategory = "WDC_Items";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.076;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Leaflet_05_Stack_F.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Map (Omaha)";
		model = "\x\wdc\addons\objects\wdc_us_map_omaha.p3d";
	};
	class wdc_map_palau: Items_base_F
	{
		author = "Coldfront15";
        editorCategory = "WDC_Items";
		editorSubcategory = "WDC_Items";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.076;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Leaflet_05_Stack_F.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Map (Peleliu)";
		model = "\x\wdc\addons\objects\wdc_us_map_palau.p3d";
	};
	class wdc_map_rhineland: Items_base_F
	{
		author = "Coldfront15";
        editorCategory = "WDC_Items";
		editorSubcategory = "WDC_Items";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.076;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Leaflet_05_Stack_F.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Map (Rhineland)";
		model = "\x\wdc\addons\objects\wdc_us_map_rhineland.p3d";
	};
	class wdc_map_stvith: Items_base_F
	{
		author = "Coldfront15";
        editorCategory = "WDC_Items";
		editorSubcategory = "WDC_Items";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.076;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Leaflet_05_Stack_F.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Map (Saint Vith)";
		model = "\x\wdc\addons\objects\wdc_us_map_stvith.p3d";
	};
	class wdc_map_tarawa: Items_base_F
	{
		author = "Coldfront15";
        editorCategory = "WDC_Items";
		editorSubcategory = "WDC_Items";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.076;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Leaflet_05_Stack_F.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Map (Tarawa)";
		model = "\x\wdc\addons\objects\wdc_us_map_tarawa.p3d";
	};
	class wdc_map_vossenac: Items_base_F
	{
		author = "Coldfront15";
        editorCategory = "WDC_Items";
		editorSubcategory = "WDC_Items";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.076;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Leaflet_05_Stack_F.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Map (Vossenac)";
		model = "\x\wdc\addons\objects\wdc_us_map_vossenac.p3d";
	};
	class wdc_map_wesel: Items_base_F
	{
		author = "Coldfront15";
        editorCategory = "WDC_Items";
		editorSubcategory = "WDC_Items";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.076;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Leaflet_05_Stack_F.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Map (Wesel)";
		model = "\x\wdc\addons\objects\wdc_us_map_wesel.p3d";
	};
};