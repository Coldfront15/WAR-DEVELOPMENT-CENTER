/*
	FILE: fnc_addInventoryActions.sqf

	Name: tbd_mortars_105mm_fnc_addInventoryActions

	Author(s):
		ilbinek

	Description:
		Adds inventory actions for 105mm stuff

	Parameters:
		Nothing

	Returns:
		Nothing

	Examples:
		> call tbd_mortars_105mm_fnc_addInventoryActions;

	Public:
		No
*/

#include "..\script_component.hpp"

#define ADD_ACTION(var1,var2) [\
	_class,\
	"CONTAINER",\
	LLSTRING(DOUBLES(105mm_charge_change,var1)),\
	nil,\
	"\a3\ui_f\data\igui\cfg\simpletasks\types\destroy_ca.paa",\
	{true},\
	{\
		params ["_unit", "", "_item", "_slot"];\
		switch _slot do {\
			case "UNIFORM_CONTAINER": {\
				[LLSTRING(105mm_charge_change), tbd_mortars_main_chargeChangeTime, {true}, {params ["_args"]; _args params ["_unit"]; _unit addItemToUniform QUOTE(DOUBLES(var2,var1));}, {params ["_args"]; _args params ["_unit", "_item"]; _unit addItemToUniform _item;}, [_unit, _item]] call CBA_fnc_progressBar;\
			};\
			case "VEST_CONTAINER": {\
				[LLSTRING(105mm_charge_change), tbd_mortars_main_chargeChangeTime, {true}, {params ["_args"]; _args params ["_unit"]; _unit addItemToVest QUOTE(DOUBLES(var2,var1));}, {params ["_args"]; _args params ["_unit", "_item"]; _unit addItemToVest _item;}, [_unit, _item]] call CBA_fnc_progressBar;\
			};\
			case "BACKPACK_CONTAINER": {\
				[LLSTRING(105mm_charge_change), tbd_mortars_main_chargeChangeTime, {true}, {params ["_args"]; _args params ["_unit"]; _unit addItemToBackpack QUOTE(DOUBLES(var2,var1));}, {params ["_args"]; _args params ["_unit", "_item"]; _unit addItemToBackpack _item;}, [_unit, _item]] call CBA_fnc_progressBar;\
			};\
		};\
	},\
	true,\
	[]\
] call CBA_fnc_addItemContextMenuOption;

#define ADD_ACTION_CREATE_SHELL(var1,var2,var3) [\
	_class,\
	"CONTAINER",\
	LLSTRING(DOUBLES(105mm_assemble,var1)),\
	nil,\
	"\a3\ui_f\data\igui\cfg\simpletasks\types\destroy_ca.paa",\
	[\
		{true},\
		{\
			params ["_unit", "_container", "_item", "_slot", "_params"];\
			private _ret = false;\
			switch _slot do {\
				case "UNIFORM_CONTAINER": {\
					if (QUOTE(var2) in uniformItems _unit) then {\
						_ret = true;\
					};\
				};\
				case "VEST_CONTAINER": {\
					if (QUOTE(var2) in vestItems _unit) then {\
						_ret = true;\
					};\
				};\
				case "BACKPACK_CONTAINER": {\
					if (QUOTE(var2) in backPackItems _unit) then {\
						_ret = true;\
					};\
				};\
			};\
			_ret\
		}\
	],\
	{\
		params ["_unit", "", "_item", "_slot"];\
		playSound3D [QPATHTOF(SPE_M3\sounds\create_round.ogg), _unit];\
		switch _slot do {\
			case "UNIFORM_CONTAINER": {\
				[LLSTRING(105mm_assembling), tbd_mortars_main_assemble105time, {true}, {params ["_args"]; _args params ["_unit"]; _unit removeItemFromUniform QUOTE(var2); private _shell = QUOTE(DOUBLES(var3,var1)) createVehicle (getPos _unit); [_unit, _shell] call ace_dragging_fnc_startCarry;}, {params ["_args"]; _args params ["_unit", "_item"]; _unit addItemToUniform _item}, [_unit, _item]] call CBA_fnc_progressBar;\
			};\
			case "VEST_CONTAINER": {\
				[LLSTRING(105mm_assembling), tbd_mortars_main_assemble105time, {true}, {params ["_args"]; _args params ["_unit"]; _unit removeItemFromVest QUOTE(var2); private _shell = QUOTE(DOUBLES(var3,var1)) createVehicle (getPos _unit); [_unit, _shell] call ace_dragging_fnc_startCarry;}, {params ["_args"]; _args params ["_unit", "_item"]; _unit addItemToVest _item}, [_unit, _item]] call CBA_fnc_progressBar;\
			};\
			case "BACKPACK_CONTAINER": {\
				[LLSTRING(105mm_assembling), tbd_mortars_main_assemble105time, {true}, {params ["_args"]; _args params ["_unit"]; _unit removeItemFromBackpack QUOTE(var2); private _shell = QUOTE(DOUBLES(var3,var1)) createVehicle (getPos _unit); [_unit, _shell] call ace_dragging_fnc_startCarry;}, {params ["_args"]; _args params ["_unit", "_item"]; _unit addItemToBackpack _item}, [_unit, _item]] call CBA_fnc_progressBar;\
			};\
		};\
	},\
	true,\
	[]\
] call CBA_fnc_addItemContextMenuOption;

#define ADD_ACTION_PACK(var1,var2) [\
	_class,\
	"CONTAINER",\
	LLSTRING(DOUBLES(105mm_pack,var1)),\
	nil,\
	"\a3\ui_f\data\igui\cfg\simpletasks\types\box_ca.paa",\
	[\
		{true},\
		{\
			[QUOTE(DOUBLES(wdc_artillery_SPE_M3_CASING_CHARGE,var1))] call tbd_mortars_main_fnc_isMineNearby;\
		}\
	],\
	{\
		params ["_unit", "", "_item", "_slot"];\
		playSound3D [QPATHTOF(SPE_M3\sounds\pack_tube.ogg), _unit];\
		switch _slot do {\
			case "UNIFORM_CONTAINER": {\
				[LLSTRING(105mm_pack), tbd_mortars_main_pack105Time, {true}, {params ["_args"]; _args params ["_unit"]; if !([QUOTE(DOUBLES(wdc_artillery_SPE_M3_CASING_CHARGE,var1))] call tbd_mortars_main_fnc_isMineNearby) exitWith {}; [QUOTE(DOUBLES(wdc_artillery_SPE_M3_CASING_CHARGE,var1))] call tbd_mortars_main_fnc_removeNearbyShell; [QUOTE(var2)] call tbd_mortars_main_fnc_addNearbyShell;}, {params ["_args"]; _args params ["_unit", "_item"]; _unit addItemToUniform _item;}, [_unit, _item]] call CBA_fnc_progressBar;\
			};\
			case "VEST_CONTAINER": {\
				[LLSTRING(105mm_pack), tbd_mortars_main_pack105Time, {true}, {params ["_args"]; _args params ["_unit"]; if !([QUOTE(DOUBLES(wdc_artillery_SPE_M3_CASING_CHARGE,var1))] call tbd_mortars_main_fnc_isMineNearby) exitWith {}; [QUOTE(DOUBLES(wdc_artillery_SPE_M3_CASING_CHARGE,var1))] call tbd_mortars_main_fnc_removeNearbyShell; [QUOTE(var2)] call tbd_mortars_main_fnc_addNearbyShell}, {params ["_args"]; _args params ["_unit", "_item"]; _unit addItemToVest _item;}, [_unit, _item]] call CBA_fnc_progressBar;\
			};\
			case "BACKPACK_CONTAINER": {\
				[LLSTRING(105mm_pack), tbd_mortars_main_pack105Time, {true}, {params ["_args"]; _args params ["_unit"]; if !([QUOTE(DOUBLES(wdc_artillery_SPE_M3_CASING_CHARGE,var1))] call tbd_mortars_main_fnc_isMineNearby) exitWith {}; [QUOTE(DOUBLES(wdc_artillery_SPE_M3_CASING_CHARGE,var1))] call tbd_mortars_main_fnc_removeNearbyShell; [QUOTE(var2)] call tbd_mortars_main_fnc_addNearbyShell;}, {params ["_args"]; _args params ["_unit", "_item"]; _unit addItemToBackpack _item;}, [_unit, _item]] call CBA_fnc_progressBar;\
			};\
		};\
	},\
	true,\
	[]\
] call CBA_fnc_addItemContextMenuOption;

#define ADD_ACTION_UNPACK(var1,var2) [\
	_class,\
	"CONTAINER",\
	LLSTRING(105mm_unpack),\
	nil,\
	"\a3\ui_f\data\igui\cfg\simpletasks\types\rearm_ca.paa",\
	{true},\
	{\
		params ["_unit", "", "_item", "_slot"];\
		switch _slot do {\
			case "UNIFORM_CONTAINER": {\
				[LLSTRING(105mm_unpacking), tbd_mortars_main_unpack105Time, {true}, {\
					params ["_args"];\
					_args params ["_unit"];\
					_unit addItemToUniform QUOTE(var1);\
					_unit addItemToUniform QUOTE(var2);\
					playSound3D [QPATHTOF(SPE_M3\sounds\unpack_tube.ogg), player];\
				}, {\
					params ["_args"];\
					_args params ["_unit", "_item"];\
					_unit addItemToUniform _item;\
				}, [_unit, _item]] call CBA_fnc_progressBar;\
			};\
			case "VEST_CONTAINER": {\
				[LLSTRING(105mm_unpack), tbd_mortars_main_unpack105Time, {true}, {\
					params ["_args"];\
					_args params ["_unit"];\
					_unit addItemToVest QUOTE(var1);\
					_unit addItemToVest QUOTE(var2);\
					playSound3D [QPATHTOF(SPE_M3\sounds\unpack_tube.ogg), player];\
				}, {\
					params ["_args"];\
					_args params ["_unit", "_item"];\
					_unit addItemToVest _item;\
				}, [_unit, _item]] call CBA_fnc_progressBar;\
			};\
			case "BACKPACK_CONTAINER": {\
				[LLSTRING(105mm_unpack), tbd_mortars_main_unpack105Time, {true}, {\
					params ["_args"];\
					_args params ["_unit"];\
					_unit addItemToBackpack QUOTE(var1);\
					_unit addItemToBackpack QUOTE(var2);\
					playSound3D [QPATHTOF(SPE_M3\sounds\unpack_tube.ogg), player];\
				}, {\
					params ["_args"];\
					_args params ["_unit", "_item"];\
					_unit addItemToBackpack _item;\
				}, [_unit, _item]] call CBA_fnc_progressBar;\
			};\
		};\
	},\
	true,\
	[]\
] call CBA_fnc_addItemContextMenuOption;

private _class = QUOTE(wdc_artillery_SPE_M3_CASING_CHARGE_1);
ADD_ACTION(1,wdc_artillery_SPE_M3_CASING_CHARGE)
ADD_ACTION(2,wdc_artillery_SPE_M3_CASING_CHARGE)
ADD_ACTION(3,wdc_artillery_SPE_M3_CASING_CHARGE)
ADD_ACTION(4,wdc_artillery_SPE_M3_CASING_CHARGE)
ADD_ACTION(5,wdc_artillery_SPE_M3_CASING_CHARGE)

// HE PD
_class = QUOTE(wdc_artillery_SPE_M3_M1_HE_Tube);
ADD_ACTION_UNPACK(wdc_artillery_SPE_M3_M1_HE_SHELL_HE,wdc_artillery_SPE_M3_CASING_CHARGE_5)
_class = QUOTE(wdc_artillery_SPE_M3_M1_HE_SHELL_HE);

// HE PD loadable shell creation
ADD_ACTION_CREATE_SHELL(1,wdc_artillery_SPE_M3_CASING_CHARGE_1,wdc_artillery_SPE_M3_M1_HE_CHARGE)
ADD_ACTION_CREATE_SHELL(2,wdc_artillery_SPE_M3_CASING_CHARGE_2,wdc_artillery_SPE_M3_M1_HE_CHARGE)
ADD_ACTION_CREATE_SHELL(3,wdc_artillery_SPE_M3_CASING_CHARGE_3,wdc_artillery_SPE_M3_M1_HE_CHARGE)
ADD_ACTION_CREATE_SHELL(4,wdc_artillery_SPE_M3_CASING_CHARGE_4,wdc_artillery_SPE_M3_M1_HE_CHARGE)
ADD_ACTION_CREATE_SHELL(5,wdc_artillery_SPE_M3_CASING_CHARGE_5,wdc_artillery_SPE_M3_M1_HE_CHARGE)

// HE PD packing
ADD_ACTION_PACK(1,wdc_artillery_SPE_M3_M1_HE_Tube)
ADD_ACTION_PACK(2,wdc_artillery_SPE_M3_M1_HE_Tube)
ADD_ACTION_PACK(3,wdc_artillery_SPE_M3_M1_HE_Tube)
ADD_ACTION_PACK(4,wdc_artillery_SPE_M3_M1_HE_Tube)
ADD_ACTION_PACK(5,wdc_artillery_SPE_M3_M1_HE_Tube)

// HE VT
_class = QUOTE(wdc_artillery_SPE_M3_M1_HE_VT_Tube);
ADD_ACTION_UNPACK(wdc_artillery_SPE_M3_M1_HE_SHELL_VT,wdc_artillery_SPE_M3_CASING_CHARGE_5)
_class = QUOTE(wdc_artillery_SPE_M3_M1_HE_SHELL_VT);

// HE VT loadable shell creation
ADD_ACTION_CREATE_SHELL(1,wdc_artillery_SPE_M3_CASING_CHARGE_1,wdc_artillery_SPE_M3_M1_HE_VT_CHARGE)
ADD_ACTION_CREATE_SHELL(2,wdc_artillery_SPE_M3_CASING_CHARGE_2,wdc_artillery_SPE_M3_M1_HE_VT_CHARGE)
ADD_ACTION_CREATE_SHELL(3,wdc_artillery_SPE_M3_CASING_CHARGE_3,wdc_artillery_SPE_M3_M1_HE_VT_CHARGE)
ADD_ACTION_CREATE_SHELL(4,wdc_artillery_SPE_M3_CASING_CHARGE_4,wdc_artillery_SPE_M3_M1_HE_VT_CHARGE)
ADD_ACTION_CREATE_SHELL(5,wdc_artillery_SPE_M3_CASING_CHARGE_5,wdc_artillery_SPE_M3_M1_HE_VT_CHARGE)

// HE VT packing
ADD_ACTION_PACK(1,wdc_artillery_SPE_M3_M1_HE_VT_Tube)
ADD_ACTION_PACK(2,wdc_artillery_SPE_M3_M1_HE_VT_Tube)
ADD_ACTION_PACK(3,wdc_artillery_SPE_M3_M1_HE_VT_Tube)
ADD_ACTION_PACK(4,wdc_artillery_SPE_M3_M1_HE_VT_Tube)
ADD_ACTION_PACK(5,wdc_artillery_SPE_M3_M1_HE_VT_Tube)

// SMOKE
_class = QUOTE(wdc_artillery_SPE_M3_M60_WP_Tube);
ADD_ACTION_UNPACK(wdc_artillery_SPE_M3_M60_WP_SHELL_WP,wdc_artillery_SPE_M3_CASING_CHARGE_5)
_class = QUOTE(wdc_artillery_SPE_M3_M60_WP_SHELL_WP);
// Smoke loadable shell creation
ADD_ACTION_CREATE_SHELL(1,wdc_artillery_SPE_M3_CASING_CHARGE_1,wdc_artillery_SPE_M3_M60_WP_CHARGE)
ADD_ACTION_CREATE_SHELL(2,wdc_artillery_SPE_M3_CASING_CHARGE_2,wdc_artillery_SPE_M3_M60_WP_CHARGE)
ADD_ACTION_CREATE_SHELL(3,wdc_artillery_SPE_M3_CASING_CHARGE_3,wdc_artillery_SPE_M3_M60_WP_CHARGE)
ADD_ACTION_CREATE_SHELL(4,wdc_artillery_SPE_M3_CASING_CHARGE_4,wdc_artillery_SPE_M3_M60_WP_CHARGE)
ADD_ACTION_CREATE_SHELL(5,wdc_artillery_SPE_M3_CASING_CHARGE_5,wdc_artillery_SPE_M3_M60_WP_CHARGE)
// Smoke packing
ADD_ACTION_PACK(1,wdc_artillery_SPE_M3_M60_WP_Tube)
ADD_ACTION_PACK(2,wdc_artillery_SPE_M3_M60_WP_Tube)
ADD_ACTION_PACK(3,wdc_artillery_SPE_M3_M60_WP_Tube)
ADD_ACTION_PACK(4,wdc_artillery_SPE_M3_M60_WP_Tube)
ADD_ACTION_PACK(5,wdc_artillery_SPE_M3_M60_WP_Tube)


// HEAT
_class = QUOTE(wdc_artillery_SPE_M3_M67_HEAT_Tube);
ADD_ACTION_UNPACK(wdc_artillery_SPE_M3_M67_HEAT_SHELL_HEAT,wdc_artillery_SPE_M3_CASING_CHARGE_5)
_class = QUOTE(wdc_artillery_SPE_M3_M67_HEAT_SHELL_HEAT);

// HEAT loadable shell creation
ADD_ACTION_CREATE_SHELL(5,wdc_artillery_SPE_M3_CASING_CHARGE_5,wdc_artillery_SPE_M3_M67_HEAT_CHARGE)

// HEAT packing
ADD_ACTION_PACK(5,wdc_artillery_SPE_M3_M67_HEAT_Tube)
