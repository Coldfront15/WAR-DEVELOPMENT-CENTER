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


_arty setVariable [QGVAR(fired), true, true];

private _mags = _arty magazinesTurret [0];
{
	_arty removeMagazinesTurret [_x, [0]];
} forEach _mags;

// _arty animateSource ["recoil_source", 1, 3];

// [
// 	{
// 		params ["_arty"]; 
// 		private _phase = _arty animationSourcePhase "recoil_source";
// 		_phase > 0.9;
// 	},
// 	{
// 		params ["_arty"]; 
// 		_arty animateSource ["SPE_M3_105mm_reload_magazine_state", 0.5, 15];
// 	},
// 	[_arty]
// ] call CBA_fnc_waitUntilAndExecute;

// _arty animateSource ["recoil_source", 0, 0.2];

// private _phase1 = _arty animationSourcePhase "recoil_source";
// if ( _phase1 < 0.9) then {
// 	_arty animateSource ["SPE_M3_105mm_reload_magazine_state", 0, 15];
// };

// "Temp" fix for cluster and laser guided because BI?
if (_ammo in ["wdc_artillery_SPE_M3_M1_HE_SHELL_VT", "wdc_artillery_SPE_M3_M1_HE_SHELL_HE"]) then {
	if (_ammo isEqualTo "wdc_artillery_SPE_M3_M1_HE_SHELL_VT") then {
		[_projectile] call FUNC(projectileHeightCheck);

	} else {
		[{
			params ["_projectile"];
			triggerAmmo _projectile;
		},
		[_projectile],
		_arty getVariable [QGVAR(FUSE_TIMER), 99999]] call CBA_fnc_waitAndExecute;
		
	};
};
