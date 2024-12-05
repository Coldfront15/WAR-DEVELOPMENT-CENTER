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

_arty animateSource ["SPE_M3_105mm_reload_magazine_state", 0.5];
playSound3D [QPATHTOF(SPE_M3\sounds\close.ogg), _arty];

_arty setVariable [QGVAR(breech), true, true];

if (_arty getVariable [QGVAR(fired), false]) then {
	[_arty] call FUNC(eject);
	_arty setVariable [QGVAR(fired), false, true];
};
