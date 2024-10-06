#include "script_component.hpp"

#include "XEH_PREP.hpp"

[QUOTE(SPE_105mm_M3_WDC), "init", {_this call FUNC(initArty)}] call CBA_fnc_addClassEventHandler;
[QUOTE(SPE_105mm_M3_WDC), "fired", {_this call FUNC(fired)}] call CBA_fnc_addClassEventHandler;

[QUOTE(wdc_artillery_SPE_M3_M1_HE_PD_box), "init", {_this call FUNC(initShell)}] call CBA_fnc_addClassEventHandler;
[QUOTE(wdc_artillery_SPE_M3_M1_HE_VT_box), "init", {_this call FUNC(initShell)}] call CBA_fnc_addClassEventHandler;
[QUOTE(wdc_artillery_SPE_M3_M60_WP_box), "init", {_this call FUNC(initShell)}] call CBA_fnc_addClassEventHandler;
[QUOTE(wdc_artillery_SPE_M3_M67_HEAT_box), "init", {_this call FUNC(initShell)}] call CBA_fnc_addClassEventHandler;

ADDON = true;

[QGVAR(loadShell),
	{
		params ["_arty", "_shell", "_turret"];
		
		// Remove all mags in given turret
		private _mags = _arty magazinesTurret [_turret];
		{
			_arty removeMagazineTurret [_x, [_turret]];
		} forEach _mags;

		_arty addMagazineTurret [_shell, [_turret], 1];
	}
] call CBA_fnc_addEventHandler;

[QGVAR(unloadShell),
	{
		params ["_arty", "_turret"];
		
		private _mags = _arty magazinesTurret [_turret];
		{
			_arty removeMagazinesTurret [_x, [_turret]];
		} forEach _mags;
	}
] call CBA_fnc_addEventHandler;
