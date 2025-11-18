class CfgPatches
{
	class wdc_ace_compat
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"ace_compat_spe",
			"ace_csw",
			"ace_cargo",
			"ace_explosives",
			"ace_fire",
			"ace_flashlights",
			"ace_minedetector"};
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