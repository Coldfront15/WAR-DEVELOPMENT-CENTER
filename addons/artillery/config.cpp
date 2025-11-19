#include "script_component.hpp"

class CfgPatches {
    class ADDON {
		name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"cba_main","ace_interact_menu","tbd_mortars_main","ww2_spe_assets_c_vehicles_staticweapons_u1_c"};
		author = "Coldfront15";
        VERSION_CONFIG;
    };
};
class RscText;
class RscEdit;
class RscButton;
class RscWDCTimer
{
	idd = 67419;
	onLoad = "['init', _this] call wdc_artillery_fnc_timerHandler";
	onUnload = "['close', _this] call wdc_artillery_fnc_timerHandler";
	class ControlsBackground
	{
		class Background: RscText
		{
			x = "safeZoneX + safeZoneW * 0.45";
			y = "safeZoneY + safeZoneH * 0.45";
			w = "safeZoneW * 0.1";
			h = "safeZoneH * 0.1";
			colorBackground[] = {0,0,0,1};
		};
	};
	class Controls
	{
		class Timer: RscEdit
		{
			idc = 67420;
			x = "safeZoneX + safeZoneW * 0.45";
			y = "safeZoneY + safeZoneH * 0.45";
			w = "safeZoneW * 0.1";
			h = "safeZoneH * 0.05";
			colorBackground[] = {0,0,0,1};
			colorBorder[] = {0.543,0.5742,0.4102,1.0};
			text = "";
			tooltip = "Time to dispense shells submunition in seconds.";
		};
		class Save: RscButton
		{
			x = "safeZoneX + safeZoneW * 0.45";
			y = "safeZoneY + safeZoneH * 0.5";
			w = "safeZoneW * 0.1";
			h = "safeZoneH * 0.05";
			colorBackground[] = {0,0,0,1};
			colorBorder[] = {0.543,0.5742,0.4102,1.0};
			text = "Save";
			action = "['save', _this] call wdc_artillery_fnc_timerHandler";
		};
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
