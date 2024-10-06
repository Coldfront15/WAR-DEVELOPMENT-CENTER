/*
	FILE: fnc_openBreech.sqf

	Name: wdc_m3_fnc_openBreech

	Author(s):
		ilbinek

	Description:
		Open the M3 breech

	Parameters:
		_arty	- object	- M3 to be canCloseBreeched

	Returns:
		Nothing
	
	Examples:
		> [_arty] call wdc_m3_fnc_openBreech;

	Public:
		No
*/

#include "..\script_component.hpp"

params ["_arty"];

if !([_arty] call FUNC(canOpenBreech)) exitWith {};

_arty animate ["breech_lever_close_reload", 0.3];
_arty animate ["breech_close_reload", 0.3];

_arty setVariable [QGVAR(breech), true, true];

if (_arty getVariable [QGVAR(fired), false]) then {
	[_arty] call FUNC(eject);
	_arty setVariable [QGVAR(fired), false, true];
};
