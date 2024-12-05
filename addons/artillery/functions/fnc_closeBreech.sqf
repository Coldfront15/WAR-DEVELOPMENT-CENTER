
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

_arty animateSource ["SPE_M3_105mm_reload_magazine_state", 0];
playSound3D [QPATHTOF(SPE_M3\sounds\close.ogg), _arty];
_arty setVariable [QGVAR(breech), false, true];
