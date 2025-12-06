#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "A3_Data_F_Tank_Loadorder"
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
		editorSubcategory = "WDC_Forms";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"a3\weapons_f_orange\ammo\data\leaflet_default_co.paa"};
		editorPreview = "\x\wdc\addons\objects\data\ui\wdc_form_a4_400.jpg";
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
		editorPreview = "\x\wdc\addons\objects\data\ui\wdc_form_a4_stack_400.jpg";
		displayName = "Form A4 - Base Form (Stack)";
		model = "\x\wdc\addons\objects\wdc_us_form_a4_stack.p3d";
	};
    class wdc_form_a4_400: wdc_form_a4_base
	{
		author = "Coldfront15";
        editorCategory = "WDC_Items";
		editorSubcategory = "WDC_Forms";
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
		editorPreview = "\x\wdc\addons\objects\data\ui\wdc_form_a4_400.jpg";
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
		editorPreview = "\x\wdc\addons\objects\data\ui\wdc_form_a4_stack_400.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Form 400 - Requisition (Stack)";
	};
	class wdc_form_a4_81: wdc_form_a4_base
	{
		author = "Coldfront15";
        editorCategory = "WDC_Items";
		editorSubcategory = "WDC_Forms";
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
		editorPreview = "\x\wdc\addons\objects\data\ui\wdc_form_a4_81.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Form 81 - Immunizations";
		model = "\x\wdc\addons\objects\wdc_us_form_a4_81.p3d";
	};
	class wdc_form_a4_81_stack: wdc_form_a4_base
	{
		author = "Coldfront15";
        editorCategory = "WDC_Items";
		editorSubcategory = "WDC_Forms";
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
		editorPreview = "\x\wdc\addons\objects\data\ui\wdc_form_a4_81_stack.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Form 81 - Immunizations (Stack)";
		model = "\x\wdc\addons\objects\wdc_us_form_a4_81_stack.p3d";
	};
	class wdc_map_utah: Items_base_F
	{
		author = "Coldfront15";
        editorCategory = "WDC_Items";
		editorSubcategory = "WDC_Intelligence";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.076;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\x\wdc\addons\objects\data\ui\wdc_map_utah.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Map (Utah Beach)";
		model = "\x\wdc\addons\objects\wdc_us_map_utah.p3d";
	}; //diag.exe - diag_exportTerrainSVG ["C:\arma3\terrain\darkestDecember.svg", false, true, true, false, false, false];
	class wdc_map_carentan: Items_base_F
	{
		author = "Coldfront15";
        editorCategory = "WDC_Items";
		editorSubcategory = "WDC_Intelligence";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.076;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\x\wdc\addons\objects\data\ui\wdc_map_carentan.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Map (Carentan)";
		model = "\x\wdc\addons\objects\wdc_us_map_carentan.p3d";
	};
	class wdc_map_lingevres: Items_base_F
	{
		author = "Coldfront15";
        editorCategory = "WDC_Items";
		editorSubcategory = "WDC_Intelligence";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.076;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\x\wdc\addons\objects\data\ui\wdc_map_lingevres.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Map (Lingevres)";
		model = "\x\wdc\addons\objects\wdc_us_map_lingevres.p3d";
	};
	class wdc_map_mortain: Items_base_F
	{
		author = "Coldfront15";
        editorCategory = "WDC_Items";
		editorSubcategory = "WDC_Intelligence";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.076;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\x\wdc\addons\objects\data\ui\wdc_map_mortain.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Map (Mortain)";
		model = "\x\wdc\addons\objects\wdc_us_map_mortain.p3d";
	};
	class wdc_map_normandy: Items_base_F
	{
		author = "Coldfront15";
        editorCategory = "WDC_Items";
		editorSubcategory = "WDC_Intelligence";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.076;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\x\wdc\addons\objects\data\ui\wdc_map_normandy.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Map (Normandy)";
		model = "\x\wdc\addons\objects\wdc_us_map_normandy.p3d";
	};
	class wdc_map_angola: Items_base_F
	{
		author = "Coldfront15";
        editorCategory = "WDC_Items";
		editorSubcategory = "WDC_Intelligence";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.076;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\x\wdc\addons\objects\data\ui\wdc_map_angola.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Map (Algeria)";
		model = "\x\wdc\addons\objects\wdc_us_map_angola.p3d";
	};
	class wdc_map_anizay: Items_base_F
	{
		author = "Coldfront15";
        editorCategory = "WDC_Items";
		editorSubcategory = "WDC_Intelligence";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.076;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\x\wdc\addons\objects\data\ui\wdc_map_anizay.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Map (Tunisia)";
		model = "\x\wdc\addons\objects\wdc_us_map_anizay.p3d";
	};
	class wdc_map_bastogne: Items_base_F
	{
		author = "Coldfront15";
        editorCategory = "WDC_Items";
		editorSubcategory = "WDC_Intelligence";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.076;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\x\wdc\addons\objects\data\ui\wdc_map_bastogne.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Map (Bastogne)";
		model = "\x\wdc\addons\objects\wdc_us_map_bastogne.p3d";
	};
	class wdc_map_benouville: Items_base_F
	{
		author = "Coldfront15";
        editorCategory = "WDC_Items";
		editorSubcategory = "WDC_Intelligence";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.076;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\x\wdc\addons\objects\data\ui\wdc_map_benouville.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Map (Benouville)";
		model = "\x\wdc\addons\objects\wdc_us_map_benouville.p3d";
	};
	class wdc_map_garmanda: Items_base_F
	{
		author = "Coldfront15";
        editorCategory = "WDC_Items";
		editorSubcategory = "WDC_Intelligence";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.076;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\x\wdc\addons\objects\data\ui\wdc_map_garmanda.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Map (Sauerland)";
		model = "\x\wdc\addons\objects\wdc_us_map_garmanda.p3d";
	};
	class wdc_map_sumava: Items_base_F
	{
		author = "Coldfront15";
        editorCategory = "WDC_Items";
		editorSubcategory = "WDC_Intelligence";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.076;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\x\wdc\addons\objects\data\ui\wdc_map_garmanda.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Map (Sauerland)";
		model = "\x\wdc\addons\objects\wdc_us_map_sumava.p3d";
	};
	class wdc_map_henderson: Items_base_F
	{
		author = "Coldfront15";
        editorCategory = "WDC_Items";
		editorSubcategory = "WDC_Intelligence";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.076;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\x\wdc\addons\objects\data\ui\wdc_map_henderson.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Map (Henderson Field)";
		model = "\x\wdc\addons\objects\wdc_us_map_henderson.p3d";
	};
	class wdc_map_holland: Items_base_F
	{
		author = "Coldfront15";
        editorCategory = "WDC_Items";
		editorSubcategory = "WDC_Intelligence";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.076;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\x\wdc\addons\objects\data\ui\wdc_map_holland.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Map (Holland)";
		model = "\x\wdc\addons\objects\wdc_us_map_holland.p3d";
	};
	class wdc_map_iwojima: Items_base_F
	{
		author = "Coldfront15";
        editorCategory = "WDC_Items";
		editorSubcategory = "WDC_Intelligence";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.076;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\x\wdc\addons\objects\data\ui\wdc_map_iwojima.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Map (Iwo Jima)";
		model = "\x\wdc\addons\objects\wdc_us_map_iwojima.p3d";
	};
	class wdc_map_manila: Items_base_F
	{
		author = "Coldfront15";
        editorCategory = "WDC_Items";
		editorSubcategory = "WDC_Intelligence";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.076;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\x\wdc\addons\objects\data\ui\wdc_map_manila.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Map (Manila)";
		model = "\x\wdc\addons\objects\wdc_us_map_manila.p3d";
	};
	class wdc_map_moder: Items_base_F
	{
		author = "Coldfront15";
        editorCategory = "WDC_Items";
		editorSubcategory = "WDC_Intelligence";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.076;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\x\wdc\addons\objects\data\ui\wdc_map_moder.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Map (Moder)";
		model = "\x\wdc\addons\objects\wdc_us_map_moder.p3d";
	};
	class wdc_map_okinawa: Items_base_F
	{
		author = "Coldfront15";
        editorCategory = "WDC_Items";
		editorSubcategory = "WDC_Intelligence";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.076;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\x\wdc\addons\objects\data\ui\wdc_map_okinawa.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Map (Okinawa)";
		model = "\x\wdc\addons\objects\wdc_us_map_okinawa.p3d";
	};
	class wdc_map_omaha: Items_base_F
	{
		author = "Coldfront15";
        editorCategory = "WDC_Items";
		editorSubcategory = "WDC_Intelligence";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.076;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\x\wdc\addons\objects\data\ui\wdc_map_omaha.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Map (Omaha)";
		model = "\x\wdc\addons\objects\wdc_us_map_omaha.p3d";
	};
	class wdc_map_palau: Items_base_F
	{
		author = "Coldfront15";
        editorCategory = "WDC_Items";
		editorSubcategory = "WDC_Intelligence";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.076;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\x\wdc\addons\objects\data\ui\wdc_map_palau.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Map (Peleliu)";
		model = "\x\wdc\addons\objects\wdc_us_map_palau.p3d";
	};
	class wdc_map_rhineland: Items_base_F
	{
		author = "Coldfront15";
        editorCategory = "WDC_Items";
		editorSubcategory = "WDC_Intelligence";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.076;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\x\wdc\addons\objects\data\ui\wdc_map_rhineland.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Map (Rhineland)";
		model = "\x\wdc\addons\objects\wdc_us_map_rhineland.p3d";
	};
	class wdc_map_stvith: Items_base_F
	{
		author = "Coldfront15";
        editorCategory = "WDC_Items";
		editorSubcategory = "WDC_Intelligence";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.076;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\x\wdc\addons\objects\data\ui\wdc_map_stvith.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Map (Saint Vith)";
		model = "\x\wdc\addons\objects\wdc_us_map_stvith.p3d";
	};
	class wdc_map_tarawa: Items_base_F
	{
		author = "Coldfront15";
        editorCategory = "WDC_Items";
		editorSubcategory = "WDC_Intelligence";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.076;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\x\wdc\addons\objects\data\ui\wdc_map_tarawa.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Map (Tarawa)";
		model = "\x\wdc\addons\objects\wdc_us_map_tarawa.p3d";
	};
	class wdc_map_vossenac: Items_base_F
	{
		author = "Coldfront15";
        editorCategory = "WDC_Items";
		editorSubcategory = "WDC_Intelligence";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.076;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\x\wdc\addons\objects\data\ui\wdc_map_vossenac.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Map (Vossenac)";
		model = "\x\wdc\addons\objects\wdc_us_map_vossenac.p3d";
	};
	class wdc_map_wesel: Items_base_F
	{
		author = "Coldfront15";
        editorCategory = "WDC_Items";
		editorSubcategory = "WDC_Intelligence";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.076;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\x\wdc\addons\objects\data\ui\wdc_map_wesel.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Map (Wesel)";
		model = "\x\wdc\addons\objects\wdc_us_map_wesel.p3d";
	};
	class All
    {
		class ViewCargo;
		class ViewOptics;
	};
	class AllVehicles: All
	{
		class NewTurret
		{
			class ViewGunner;
			class ViewOptics;
        };
        class ViewPilot;
		class ViewCargo;
		class ViewOptics;
        class CargoTurret: NewTurret
		{
			class ViewGunner: ViewCargo {};
		};
	};
	class Land: AllVehicles
	{
	};
	class LandVehicle: Land
	{
		class CommanderOptics: NewTurret
		{
			class ViewOptics: ViewOptics {};
			class ViewGunner: ViewCargo {};
		};
	};
	class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret: NewTurret {};
		};
	};
	class wdc_Static_Base: StaticWeapon {};

	class wdc_US_ParaExitTrainer_base: wdc_Static_Base
	{
		scope = 0;
		icon = "iconObject_1x3";
		model = "\x\wdc\addons\objects\wdc_US_ParaExitTrainer.p3d";
		memoryPointsGetInDriver = "pos cargo";
		memoryPointsGetInDriverDir = "pos cargo dir";
		memoryPointsGetInCoDriver = "pos cargo";
		memoryPointsGetInCoDriverDir = "pos cargo dir";
		memoryPointsGetInCommander = "pos cargo";
		memoryPointsGetInCommanderDir = "pos cargo dir";
		memoryPointsGetInCargo = "pos cargo";
		memoryPointsGetInCargoDir = "pos cargo dir";
		memoryPointsGetInGunner = "pos cargo";
		memoryPointsGetInGunnerDir = "pos cargo dir";
		destrType = "DestructNo";
        viewCargoShadow = 1;
		viewCargoShadowDiff = 1.0;
		viewCargoShadowAmb = 1.0;
		canHideDriver = 0;
		castCargoShadow = 1;
		hideProxyInCombat = 1;
		transportSoldier = 18;
		SPE_WP_CargoProtected[] = {1};
		mapSize = 29.01;
		cargoAction[] = {"SPEX_C47_RightSit","SPEX_C47_LeftSit","SPEX_C47_Right3Sit","SPEX_C47_Left2Sit","SPEX_C47_RightSit","SPEX_C47_Left3Sit","SPEX_C47_Right2Sit","SPEX_C47_Left4Sit","SPEX_C47_Right4Sit","SPEX_C47_Left3Sit","SPEX_C47_RightSit","SPEX_C47_LeftSit","SPEX_C47_Right2Sit","SPEX_C47_Left2Sit","SPEX_C47_Right3Sit","SPEX_C47_Left4Sit","SPEX_C47_Right4Sit","SPEX_C47_Left2Sit"};
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment1"};
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsTextures[] = {"\x\wdc\addons\objects\data\wdc_abTrainer1_co.paa","\ww2\spex\addons\assets_t_vehicles_planes_t\c47\dc3_cargo_01_co.paa"};
		armor = 50;
		armorStructural = 1;
		simulation = "tankX";
		SPEX_JumpMasterTurretIndex = 1;
		SPEX_DoorTurretIndex = 2;
		weapons[] = {};
		magazines[] = {};
		class UserActions
		{
			class cargoStandUp
			{
				displayName = "$STR_SPEX_DN_ASSETS_VEHICLES_STAND_UP";
				displayNameDefault = "";
				position = "";
				radius = 20;
				onlyForPlayer = 1;
				condition = "[this,(call SPE_fnc_findPlayer)] call SPEX_fnc_System_Planes_C47_StandUp_Condition";
				statement = "[this,(call SPE_fnc_findPlayer)] call SPEX_fnc_System_Planes_C47_StandUp_Action";
				priority = 0.95;
			};
			class cargoSitDown
			{
				displayName = "$STR_SPEX_DN_ASSETS_VEHICLES_SIT_DOWN";
				displayNameDefault = "";
				position = "";
				radius = 20;
				onlyForPlayer = 1;
				condition = "[this,(call SPE_fnc_findPlayer)] call SPEX_fnc_System_Planes_C47_SitDown_Condition";
				statement = "[this,(call SPE_fnc_findPlayer)] call SPEX_fnc_System_Planes_C47_SitDown_Action";
				priority = 0.6;
			};
		};
		class Turrets
		{
			
			class CargoTurret_01: CargoTurret
			{
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				gunnerAction = "SPEX_C47_Jumpmaster";
				gunnerInAction = "SPEX_C47_Jumpmaster";
				gunnerCompartments = "Compartment1";
				gunnerName = "$STR_SPEX_DN_ASSETS_VEHICLES_JUMPMASTER";
				maxElev = 60;
				minElev = -20;
				maxTurn = 130;
				minTurn = -110;
				isPersonTurret = 2;
				gunnerForceOptics = 0;
				LODTurnedOut = 1;
				SPE_WP_TurretProtected = 1;
				showAsCargo = 1;
				forceHideGunner = 1;
				viewGunnerInExternal = 1;
				disableSoundAttenuation = 0;
				proxyType = "CPGunner";
                weapons[] = {};
				magazines[] = {};
				proxyIndex = 2;
				class ViewGunner: ViewCargo
				{
					minAngleX = -65;
					maxAngleX = 85;
					initAngleX = 0;
					minAngleY = -150;
					maxAngleY = 150;
					initAngleY = 0;
					minFov = 0.25;
					initFov = 0.75;
					maxFov = 1.25;
				};
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerName = "$STR_A3_TURRETS_DOOR_L";
				gunnerInAction = "SPEX_C47_AtDoor_In";
				gunnerAction = "SPEX_C47_AtDoor_Out";
				LODTurnedIn = 1230;
				LODTurnedOut = 1230;
				proxyType = "CPGunner";
				proxyIndex = 3;
				forceHideGunner = 0;
				canHideGunner = 1;
				hideProxyInCombat = 1;
				canEject = 0;
			};
		};
		
		class AnimationSources
		{
			class cargo_rotate_1
			{
				AnimPeriod = 1.9;
				source = "user";
				InitPhase = 0;
			};
			class cargo_rotate_2: cargo_rotate_1{};
			class cargo_rotate_3: cargo_rotate_1{};
			class cargo_rotate_4: cargo_rotate_1{};
			class cargo_rotate_5: cargo_rotate_1{};
			class cargo_rotate_6: cargo_rotate_1{};
			class cargo_rotate_7: cargo_rotate_1{};
			class cargo_rotate_8: cargo_rotate_1{};
			class cargo_rotate_9: cargo_rotate_1{};
			class cargo_rotate_10: cargo_rotate_1{};
			class cargo_rotate_11: cargo_rotate_1{};
			class cargo_rotate_12: cargo_rotate_1{};
			class cargo_rotate_13: cargo_rotate_1{};
			class cargo_rotate_14: cargo_rotate_1{};
			class cargo_rotate_15: cargo_rotate_1{};
			class cargo_rotate_16: cargo_rotate_1{};
			class cargo_rotate_17: cargo_rotate_1{};
			class cargo_rotate_18: cargo_rotate_1{};
			class cargo_rotate_19: cargo_rotate_1{};
			class cargo_rotate_20: cargo_rotate_1{};
			class cargo_rotate_21: cargo_rotate_1{};
			class cargo_rotate_22: cargo_rotate_1{};
			class cargo_rotate_23: cargo_rotate_1{};
			class cargo_rotate_24: cargo_rotate_1{};
			class cargo_rotate_25: cargo_rotate_1{};
			class cargo_rotate_26: cargo_rotate_1{};
			class cargo_rotate_27: cargo_rotate_1{};
		};
	};

	class wdc_US_ParaExitTrainer: wdc_US_ParaExitTrainer_base
	{
		scope = 2;
		side = 2;
		scopeCurator = 2;
		displayName = "Parachute Exit Trainer";
		model = "\x\wdc\addons\objects\wdc_US_ParaExitTrainer.p3d";
		faction = "SPE_US_ARMY";		
		crew = "SPE_US_101AB_rifleman";
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsTextures[] = {"\x\wdc\addons\objects\data\wdc_abTrainer1_co.paa","\ww2\spex\addons\assets_t_vehicles_planes_t\c47\dc3_cargo_01_co.paa"};
		typicalCargo[] = {"SPE_US_101AB_SquadLead","SPE_US_101AB_rifleman_carbine","SPE_US_101AB_Sniper"};
        class textureSources
		{
			class standard
			{
				displayName = "Standard";
				textures[] = {"\x\wdc\addons\objects\data\wdc_abTrainer1_co.paa","\ww2\spex\addons\assets_t_vehicles_planes_t\c47\dc3_cargo_01_co.paa"};
				factions[] = {"SPE_US_ARMY"};
				materials[] = {"\x\wdc\addons\objects\data\wdc_abTrainer.rvmat","WW2\SPEX\addons\Assets_r_Vehicles_Planes_r\C47\DC3_Body_02.rvmat"};
			};
            class coolOne
			{
				displayName = "Chalked Up";
				textures[] = {"\x\wdc\addons\objects\data\wdc_abTrainer2_co.paa","\ww2\spex\addons\assets_t_vehicles_planes_t\c47\dc3_cargo_01_co.paa"};
				factions[] = {"SPE_US_ARMY"};
				materials[] = {"\x\wdc\addons\objects\data\wdc_abTrainer.rvmat","WW2\SPEX\addons\Assets_r_Vehicles_Planes_r\C47\DC3_Body_02.rvmat"};
			};
        };
	};
};
