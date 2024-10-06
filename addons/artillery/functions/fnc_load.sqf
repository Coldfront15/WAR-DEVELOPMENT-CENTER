/*
	FILE: fnc_load.sqf

	Name: wdc_m3_fnc_load

	Author(s):
		ilbinek

	Description:
		Load the round into the M3

	Parameters:
		_arty	- object	- M3 to be loaded
		_shell  - string	- type of round to be loaded
		_turret - number	- path to turret

	Returns:
		Nothing
	
	Examples:
		> [_arty, tbd_mortars_105mm_he_round_1, 0] call wdc_m3_fnc_load;

	Public:
		No
*/

#include "..\script_component.hpp"

params ["_arty", "_shell", "_turret"];

if !([_arty, _shell] call FUNC(canLoad)) exitWith {};

private _mag = "";

switch (_shell) do {
	case QUOTE(wdc_artillery_SPE_M3_M1_HE_CHARGE_1): {_mag = QUOTE(wdc_artillery_SPE_M3_M1_HE_CHARGE_MAG_1)};
	case QUOTE(wdc_artillery_SPE_M3_M1_HE_CHARGE_2): {_mag = QUOTE(wdc_artillery_SPE_M3_M1_HE_CHARGE_MAG_2)};
	case QUOTE(wdc_artillery_SPE_M3_M1_HE_CHARGE_3): {_mag = QUOTE(wdc_artillery_SPE_M3_M1_HE_CHARGE_MAG_3)};
	case QUOTE(wdc_artillery_SPE_M3_M1_HE_CHARGE_4): {_mag = QUOTE(wdc_artillery_SPE_M3_M1_HE_CHARGE_MAG_4)};
	case QUOTE(wdc_artillery_SPE_M3_M1_HE_CHARGE_5): {_mag = QUOTE(wdc_artillery_SPE_M3_M1_HE_CHARGE_MAG_5)};

	case QUOTE(wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_1): {_mag = QUOTE(wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_MAG_1)};
	case QUOTE(wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_2): {_mag = QUOTE(wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_MAG_2)};
	case QUOTE(wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_3): {_mag = QUOTE(wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_MAG_3)};
	case QUOTE(wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_4): {_mag = QUOTE(wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_MAG_4)};
	case QUOTE(wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_5): {_mag = QUOTE(wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_MAG_5)};

	case QUOTE(wdc_artillery_SPE_M3_M67_HEAT_CHARGE_5): {_mag = QUOTE(wdc_artillery_SPE_M3_M67_HEAT_CHARGE_MAG_5)};

	case QUOTE(wdc_artillery_SPE_M3_M60_WP_CHARGE_1): {_mag = QUOTE(wdc_artillery_SPE_M3_M60_WP_CHARGE_MAG_1)};
	case QUOTE(wdc_artillery_SPE_M3_M60_WP_CHARGE_2): {_mag = QUOTE(wdc_artillery_SPE_M3_M60_WP_CHARGE_MAG_2)};
	case QUOTE(wdc_artillery_SPE_M3_M60_WP_CHARGE_3): {_mag = QUOTE(wdc_artillery_SPE_M3_M60_WP_CHARGE_MAG_3)};
	case QUOTE(wdc_artillery_SPE_M3_M60_WP_CHARGE_4): {_mag = QUOTE(wdc_artillery_SPE_M3_M60_WP_CHARGE_MAG_4)};
	case QUOTE(wdc_artillery_SPE_M3_M60_WP_CHARGE_5): {_mag = QUOTE(wdc_artillery_SPE_M3_M60_WP_CHARGE_MAG_5)};
};

[QGVAR(loadShell), [_arty, _mag, _turret], _arty, [-1]] call CBA_fnc_turretEvent;

// Delete closest
private _veh = nearestObjects [player, [_shell], 3];
{
	if (typeOf _x == _shell) exitWith {
		if (_x isKindOf QUOTE(TBD_MORTARS_105mm_ROUND_DPICM_CHARGE_1)) then {
			private _timer = _x getVariable ["tbd_mortars_105mm_dpicm_fuse_timer", 99999];
			_arty setVariable [QGVAR(DPICM_FUSE_TIMER), _timer, true];
		};
		deleteVehicle _x
	};
} forEach _veh;

_arty animate ["breech_open_bullet_hide", 1, true];
_arty animate ["breech_open_bullet_move", 0.3, true];
_arty animate ["breech_open_bullet_move", 0, false];


["cba_xeh_deleted","ace_dragging_candrag","ace_common_effect_blockdamage","ace_interact_menu_atcache_ace_mainactions","cba_xeh_incomingmissile","cba_xeh_getin","ace_dragging_carryposition","ace_dragging_originalmass","ace_common_statuseffect_object","ace_dragging_carrydirection_temp","cba_xeh_local","cba_xeh_isprocessed","cba_xeh_init","cba_xeh_initpost","cba_xeh_fired","ace_dragging_dragposition","cba_xeh_engine","cba_xeh_respawn","ace_dragging_dragdirection","ace_dragging_cancarry","ace_interact_menu_atcache_ace_dragging_drop","ace_common_lockstatus","cba_xeh_killed","ace_dragging_carrydirection","ace_interact_menu_atcache_ace_dragging_drop_carry","cba_xeh_getout","cba_xeh_isinitialized","ace_dragging_ignoreweightdrag","ace_common_owner","tbd_mortars_105mm_dpicm_fuse_timer","ace_dragging_ignoreweightcarry"]