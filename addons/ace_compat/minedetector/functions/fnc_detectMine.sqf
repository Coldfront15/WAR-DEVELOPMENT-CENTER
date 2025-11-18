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

player playMoveNow "Acts_Ambient_Shoelaces";

[
    7, 
    [], 
    {
        private _probedMines = [];
        private _mines = nearestObjects [
            player,
            ["SPE_MAIN_mine","SPE_MAIN_pipebomb","DirectionalBombBase","BoundingMineBase","MineBase","PipeBombBase"],
            5
        ];

        {
            private _classname = typeOf _x;

            private _detectable =
                getNumber (configFile >> "CfgAmmo" >> _classname >> "ace_minedetector_detectable");

            if (_detectable == 1) then {
				_marker = createVehicle ["Land_ClutterCutter_large_F", (getPos player)];
				_probedMines pushBack _x;
            };
        } forEach _mines;

        if (count _probedMines > 0) then {
            hintSilent "Mines Detected (4m)";
        } else {
            hintSilent "No Mines Detected (4m)";
        };

        player playActionNow "Stand";
    }, 
    {
        hintSilent "Failed to probe, try again";
        player playActionNow "Stand";
    },
    "Probing for Mines...."
] call ace_common_fnc_progressBar;
