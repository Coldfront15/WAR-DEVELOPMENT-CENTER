/*
	FILE: fnc_detectMines.sqf

	Name: wdc_ace_compat_fnc_detectMines

	Author(s):
		Coldfront15

	Description:
		Detects mine around player within given radius.

	Parameters:
		_player	- object	- Player

	Returns:
		Nothing
	
	Examples:
		> [_player] call wdc_ace_compat_fnc_detectMines;

	Public:
		No
*/

#include "..\script_component.hpp"

params ["_player"];

_player playMoveNow "Acts_Ambient_Shoelaces";

[
	7, 
	[], 
	{
		private _probedMines = [];
		private _mines = nearestObjects [_player, [], 3];

		{
			if (configOf _x >> ace_minedetector_detectable == 1) then {
				_probedMines pushBack _x;
				getPos _x;
				_marker = createVehicle ["Land_ClutterCutter_medium_F", (getPos _x)];
			};
		} forEach _mines;


		if (count _probedMines > 0) then {
			hintSilent "Mines Detected!";
		} else {
			hintSilent "No Mines Detected";
		};
		player playActionNow "Stand";
	}, 
	{
		hintSilent "Failed to probe, try again";
		player playActionNow "Stand";
	},
	"Probing for Mines...."
] call ace_common_fnc_progressBar