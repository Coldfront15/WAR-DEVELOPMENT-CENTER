/*
	FILE: fnc_unload.sqf

	Name: wdc_m3_fnc_unload

	Author(s):
		ilbinek

	Description:
		Fired EH for the M3. This script is called when the M3 is fired. It animates the recoil of the M3.

	Parameters:
		_arty	- object	- M3 that fired

	Returns:
		Nothing
	
	Examples:
		> [_arty] call wdc_m3_fnc_unload;

	Public:
		No
*/

#include "..\script_component.hpp"

params ["_arty", "_turret"];

if !([_arty] call FUNC(canUnload)) exitWith {};

private _mags = _arty magazinesTurret [_turret];
[QGVAR(unloadShell), [_arty, _turret], _arty, [-1]] call CBA_fnc_turretEvent;

private _veh = "";

switch (_mags#0) do {
	case QUOTE(wdc_artillery_SPE_M3_M1_HE_CHARGE_MAG_1): {_veh = QUOTE(wdc_artillery_SPE_M3_M1_HE_CHARGE_1)};
	case QUOTE(wdc_artillery_SPE_M3_M1_HE_CHARGE_MAG_2): {_veh = QUOTE(wdc_artillery_SPE_M3_M1_HE_CHARGE_2)};
	case QUOTE(wdc_artillery_SPE_M3_M1_HE_CHARGE_MAG_3): {_veh = QUOTE(wdc_artillery_SPE_M3_M1_HE_CHARGE_3)};
	case QUOTE(wdc_artillery_SPE_M3_M1_HE_CHARGE_MAG_4): {_veh = QUOTE(wdc_artillery_SPE_M3_M1_HE_CHARGE_4)};
	case QUOTE(wdc_artillery_SPE_M3_M1_HE_CHARGE_MAG_5): {_veh = QUOTE(wdc_artillery_SPE_M3_M1_HE_CHARGE_5)};

	case QUOTE(wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_MAG_1): {_veh = QUOTE(wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_1)};
	case QUOTE(wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_MAG_2): {_veh = QUOTE(wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_2)};
	case QUOTE(wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_MAG_3): {_veh = QUOTE(wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_3)};
	case QUOTE(wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_MAG_4): {_veh = QUOTE(wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_4)};
	case QUOTE(wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_MAG_5): {_veh = QUOTE(wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_5)};

	
	case QUOTE(wdc_artillery_SPE_M3_M67_HEAT_CHARGE_MAG_5): {_veh = QUOTE(wdc_artillery_SPE_M3_M67_HEAT_CHARGE_5)};

	case QUOTE(wdc_artillery_SPE_M3_M60_WP_CHARGE_MAG_1): {_veh = QUOTE(wdc_artillery_SPE_M3_M60_WP_CHARGE_1)};
	case QUOTE(wdc_artillery_SPE_M3_M60_WP_CHARGE_MAG_2): {_veh = QUOTE(wdc_artillery_SPE_M3_M60_WP_CHARGE_2)};
	case QUOTE(wdc_artillery_SPE_M3_M60_WP_CHARGE_MAG_3): {_veh = QUOTE(wdc_artillery_SPE_M3_M60_WP_CHARGE_3)};
	case QUOTE(wdc_artillery_SPE_M3_M60_WP_CHARGE_MAG_4): {_veh = QUOTE(wdc_artillery_SPE_M3_M60_WP_CHARGE_4)};
	case QUOTE(wdc_artillery_SPE_M3_M60_WP_CHARGE_MAG_5): {_veh = QUOTE(wdc_artillery_SPE_M3_M60_WP_CHARGE_5)};
};

_arty animate ["breech_lever_close_reload", 0.3];
_arty animate ["breech_close_reload", 0.3];
_arty animate ["breech_open_bullet_move", 0.07];
_arty animate ["breech_open_bullet_hide", 0.2];

private _s = _veh createVehicle (getPos player);
[player, _s] call ace_dragging_fnc_startCarry;
