/*
	FILE: fnc_init.sqf

	Name: wdc_m3_fnc_init

	Author(s):
		ilbinek

	Description:
		Init all variables for the M3

	Parameters:
		_arty	- object	- M3 to be inited

	Returns:
		Nothing
	
	Examples:
		> [_arty] call wdc_m3_fnc_init;

	Public:
		No
*/

#include "..\script_component.hpp"

params ["_arty"];

// Set the state variables
_arty setVariable [QGVAR(breech), false, true];
_arty setVariable [QGVAR(loaded), false, true];
_arty setVariable [QGVAR(fired), false, true];

_arty animate ["breech_open_bullet_hide", 0.2];

_arty enableRopeAttach true;

_arty addAction [
    "",
    {},
    nil,
    -1e10,
    false,
    false,
    "defaultAction",
    '_target getVariable [(QGVAR(breech)),false] && vehicle player == _target'
];
