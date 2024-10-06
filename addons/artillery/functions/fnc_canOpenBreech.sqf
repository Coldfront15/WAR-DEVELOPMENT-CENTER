
/*
	FILE: fnc_canOpenBreech.sqf

	Name: wdc_m3_fnc_canOpenBreech

	Author(s):
		ilbinek

	Description:
		Checks if the M3 can open the breech

	Parameters:
		_arty	- object	- M3 to be canCloseBreeched

	Returns:
		bool - true if the breech can be opened, false otherwise
	
	Examples:
		> [_arty] call wdc_m3_fnc_canOpenBreech;

	Public:
		Yes
*/


#include "..\script_component.hpp"

params ["_arty"];

private _ret = (!(_arty getVariable [QGVAR(breech), false]) && 
_arty animationPhase "breech_close_reload" == 0 );
_ret
