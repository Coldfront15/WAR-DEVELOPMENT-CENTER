
/*
	FILE: fnc_closeBreech.sqf

	Name: wdc_m3_fnc_closeBreech

	Author(s):
		ilbinek

	Description:
		Close the M3 breech

	Parameters:
		_arty	- object	- M3 to be canCloseBreeched

	Returns:
		Nothing
	
	Examples:
		> [_arty] call wdc_m3_fnc_closeBreech;

	Public:
		No
*/

#include "..\script_component.hpp"

params ["_arty"];

if !([_arty] call FUNC(canCloseBreech)) exitWith {};

_arty animate ["breech_lever_close_reload", 0];
_arty animate ["breech_close_reload", 0];

_arty setVariable [QGVAR(breech), false, true];
