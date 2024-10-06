/*
	FILE: fnc_canLoad.sqf

	Name: wdc_m3_fnc_canLoad

	Author(s):
		ilbinek

	Description:
		Check if the M3 can be loaded with this type of round

	Parameters:
		_arty	- object	- M3 to be loaded
		_shell  - string	- type of round to be loaded

	Returns:
		bool - true if the M3 can be loaded, false otherwise
	
	Examples:
		> [_arty, tbd_mortars_105mm_he_round_1] call wdc_m3_fnc_canLoad;

	Public:
		No
*/

#include "..\script_component.hpp"

params ["_arty", "_shell"];

if !(_arty getVariable[QGVAR(breech), false]) exitWith {false};

// Check of the mortar is empty
private _mags = _arty magazinesTurret [0];
if (count _mags != 0) exitWith {false};

// Check if this shell is nearby
private _veh = nearestObjects [player, [_shell], 3];

private _ret = false;
{
	if (typeOf _x == _shell) exitWith {_ret = true;};
} forEach _veh;

_ret
