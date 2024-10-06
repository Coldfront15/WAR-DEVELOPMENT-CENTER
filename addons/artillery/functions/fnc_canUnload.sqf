/*
	FILE: fnc_canUnload.sqf

	Name: wdc_m3_fnc_canUnload

	Author(s):
		ilbinek

	Description:
		Check if the M3 can be unloaded

	Parameters:
		_arty	- object	- M3 to be checked

	Returns:
		bool - true if the M3 can be unloaded, false otherwise
	
	Examples:
		> [_arty] call wdc_m3_fnc_canUnload;

	Public:
		No
*/

#include "..\script_component.hpp"

params ["_arty"];

if !(_arty getVariable[QGVAR(breech), false]) exitWith {false};


// Check if the mortar is empty
private _mags = _arty magazinesTurret [0];
if (count _mags == 0) exitWith {false};
true

