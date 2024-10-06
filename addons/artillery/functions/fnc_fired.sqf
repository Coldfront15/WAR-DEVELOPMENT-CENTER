/*
	FILE: fnc_fired.sqf

	Name: wdc_m3_fnc_fired

	Author(s):
		ilbinek

	Description:
		Fired EH for the M3. This script is called when the M3 is fired. It animates the recoil of the M3.

	Parameters:
		_arty	- object	- M3 that fired

	Returns:
		Nothing
	
	Examples:
		> [_arty] call wdc_m3_fnc_fired;

	Public:
		No
*/

#include "..\script_component.hpp"

params ["_arty", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];

_arty animate ["breech_open", 0, true];
_arty animateSource ["recoil_source", 1, 35];
_arty animate ["breech_open", 0, true];

[
	{
	params ["_arty"];
	_arty animateSource ["recoil_source", 0];
	}, 
	[_arty], 
	0.15
] call CBA_fnc_waitAndExecute;

_arty setVariable [QGVAR(fired), true, true];

private _mags = _arty magazinesTurret [0];
{
	_arty removeMagazinesTurret [_x, [0]];
} forEach _mags;

// Server only - TODO Test and move up

// "Temp" fix for cluster and laser guided because BI?
if (_ammo in ["wdc_artillery_SPE_M3_M1_HE_SHELL_VT", "tbd_mortars_105mm_shell_ammo_laser"]) then {
	if (_ammo isEqualTo "tbd_mortars_105mm_shell_ammo_dpicm") then {
		[{
			params ["_projectile"];
			triggerAmmo _projectile;
		},
		[_projectile],
		_arty getVariable [QGVAR(DPICM_FUSE_TIMER), 99999]] call CBA_fnc_waitAndExecute;
	} else {
		// Start projectile height check
		[_projectile] call FUNC(projectileHeightCheck);
	};
};
