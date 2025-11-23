/*
	FILE: fnc_canDetectMine.sqf

	Name: wdc_compat_fnc_canDetectMine

	Author(s):
		Coldfront15

	Description:
		Determines if a player can detect a mine

	Parameters:
		_player	- object	- Player

	Returns:
		Nothing
	
	Examples:
		> [_player] call wdc_compat_fnc_canDetectMine;

	Public:
		No
*/

#include "..\script_component.hpp"

params ["_player"];

private _tools = [
	"SPE_ACC_K98_Bayo",
	"SPE_ACC_M1_Bayo",
	"SPE_ACC_M1905_Bayo",
	"SPEX_ACC_P1907_Bayo",
	"SPEX_ACC_No4_Mk2_Bayo",
	"SPE_ACC_M1917_Bayo"
];

private _foundTool = "";

{
	if ([_player, _x] call BIS_fnc_hasItem) exitWith {
		_foundTool = _x;
	};
} forEach _tools;


if (_foundTool != "") exitWith {
	true
};

false
