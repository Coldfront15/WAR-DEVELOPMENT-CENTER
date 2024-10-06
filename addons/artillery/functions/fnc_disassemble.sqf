/*
	FILE: fnc_disassemble.sqf
	
	name: tbd_mortars_120_fnc_disassemble
	
	Author(s):
	ilbinek
	
	Description:
	Initializes the 120 box
	
	Parameters:
	        _shell   - object    - The shell
	
	Returns:
	Nothing
	
	Examples:
	> [_this] call tbd_mortars_120_fnc_disassemble;
	
	Public:
	No
*/

#include "..\script_component.hpp"

params ["_shell"];

[
	LLSTRING(105mm_disassembling),
	tbd_mortars_main_disassemble105Time,
	{ true },
	{
		params ["_args"];
		_args params ["_shell"];

		switch (typeOf _shell) do {
			// HE PD
			case QUOTE(wdc_artillery_SPE_M3_M1_HE_CHARGE_1): {
				[QUOTE(wdc_artillery_SPE_M3_M1_HE_SHELL_HE)] call tbd_mortars_main_fnc_addNearbyShell;
				[QUOTE(wdc_artillery_SPE_M3_CASING_CHARGE_1)] call tbd_mortars_main_fnc_addNearbyShell;
			};
			case QUOTE(wdc_artillery_SPE_M3_M1_HE_CHARGE_2): {
				[QUOTE(wdc_artillery_SPE_M3_M1_HE_SHELL_HE)] call tbd_mortars_main_fnc_addNearbyShell;
				[QUOTE(wdc_artillery_SPE_M3_CASING_CHARGE_2)] call tbd_mortars_main_fnc_addNearbyShell;
			};
			case QUOTE(wdc_artillery_SPE_M3_M1_HE_CHARGE_3): {
				[QUOTE(wdc_artillery_SPE_M3_M1_HE_SHELL_HE)] call tbd_mortars_main_fnc_addNearbyShell;
				[QUOTE(wdc_artillery_SPE_M3_CASING_CHARGE_3)] call tbd_mortars_main_fnc_addNearbyShell;
			};
			case QUOTE(wdc_artillery_SPE_M3_M1_HE_CHARGE_4): {
				[QUOTE(wdc_artillery_SPE_M3_M1_HE_SHELL_HE)] call tbd_mortars_main_fnc_addNearbyShell;
				[QUOTE(wdc_artillery_SPE_M3_CASING_CHARGE_4)] call tbd_mortars_main_fnc_addNearbyShell;
			};
			case QUOTE(wdc_artillery_SPE_M3_M1_HE_CHARGE_5): {
				[QUOTE(wdc_artillery_SPE_M3_M1_HE_SHELL_HE)] call tbd_mortars_main_fnc_addNearbyShell;
				[QUOTE(wdc_artillery_SPE_M3_CASING_CHARGE_5)] call tbd_mortars_main_fnc_addNearbyShell;
			};

			// HE VT
			case QUOTE(wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_1): {
				[QUOTE(wdc_artillery_SPE_M3_M1_HE_SHELL_VT)] call tbd_mortars_main_fnc_addNearbyShell;
				[QUOTE(wdc_artillery_SPE_M3_CASING_CHARGE_1)] call tbd_mortars_main_fnc_addNearbyShell;
			};
			case QUOTE(wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_2): {
				[QUOTE(wdc_artillery_SPE_M3_M1_HE_SHELL_VT)] call tbd_mortars_main_fnc_addNearbyShell;
				[QUOTE(wdc_artillery_SPE_M3_CASING_CHARGE_2)] call tbd_mortars_main_fnc_addNearbyShell;
			};
			case QUOTE(wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_3): {
				[QUOTE(wdc_artillery_SPE_M3_M1_HE_SHELL_VT)] call tbd_mortars_main_fnc_addNearbyShell;
				[QUOTE(wdc_artillery_SPE_M3_CASING_CHARGE_3)] call tbd_mortars_main_fnc_addNearbyShell;
			};
			case QUOTE(wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_4): {
				[QUOTE(wdc_artillery_SPE_M3_M1_HE_SHELL_VT)] call tbd_mortars_main_fnc_addNearbyShell;
				[QUOTE(wdc_artillery_SPE_M3_CASING_CHARGE_4)] call tbd_mortars_main_fnc_addNearbyShell;
			};
			case QUOTE(wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_5): {
				[QUOTE(wdc_artillery_SPE_M3_M1_HE_SHELL_VT)] call tbd_mortars_main_fnc_addNearbyShell;
				[QUOTE(wdc_artillery_SPE_M3_CASING_CHARGE_5)] call tbd_mortars_main_fnc_addNearbyShell;
			};

			// SMOKE
			case QUOTE(wdc_artillery_SPE_M3_M60_WP_CHARGE_1): {
				[QUOTE(wdc_artillery_SPE_M3_M60_WP_SHELL_WP)] call tbd_mortars_main_fnc_addNearbyShell;
				[QUOTE(wdc_artillery_SPE_M3_CASING_CHARGE_1)] call tbd_mortars_main_fnc_addNearbyShell;
			};
			case QUOTE(wdc_artillery_SPE_M3_M60_WP_CHARGE_2): {
				[QUOTE(wdc_artillery_SPE_M3_M60_WP_SHELL_WP)] call tbd_mortars_main_fnc_addNearbyShell;
				[QUOTE(wdc_artillery_SPE_M3_CASING_CHARGE_2)] call tbd_mortars_main_fnc_addNearbyShell;
			};
			case QUOTE(wdc_artillery_SPE_M3_M60_WP_CHARGE_3): {
				[QUOTE(wdc_artillery_SPE_M3_M60_WP_SHELL_WP)] call tbd_mortars_main_fnc_addNearbyShell;
				[QUOTE(wdc_artillery_SPE_M3_CASING_CHARGE_3)] call tbd_mortars_main_fnc_addNearbyShell;
			};
			case QUOTE(wdc_artillery_SPE_M3_M60_WP_CHARGE_4): {
				[QUOTE(wdc_artillery_SPE_M3_M60_WP_SHELL_WP)] call tbd_mortars_main_fnc_addNearbyShell;
				[QUOTE(wdc_artillery_SPE_M3_CASING_CHARGE_4)] call tbd_mortars_main_fnc_addNearbyShell;
			};
			case QUOTE(wdc_artillery_SPE_M3_M60_WP_CHARGE_5): {
				[QUOTE(wdc_artillery_SPE_M3_M60_WP_SHELL_WP)] call tbd_mortars_main_fnc_addNearbyShell;
				[QUOTE(wdc_artillery_SPE_M3_CASING_CHARGE_5)] call tbd_mortars_main_fnc_addNearbyShell;
			};

			// HEAT
			case QUOTE(wdc_artillery_SPE_M3_M67_HEAT_CHARGE_5): {
				[QUOTE(wdc_artillery_SPE_M3_M67_HEAT_SHELL_HEAT)] call tbd_mortars_main_fnc_addNearbyShell;
				[QUOTE(wdc_artillery_SPE_M3_CASING_CHARGE_5)] call tbd_mortars_main_fnc_addNearbyShell;
			};
		};

		deleteVehicle _shell;
	},
	{},
	[_shell]
] call CBA_fnc_progressBar;
