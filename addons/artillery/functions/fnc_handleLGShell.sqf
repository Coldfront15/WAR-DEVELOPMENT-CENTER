/*
	FILE: fnc_handleLGShell.sqf

	Name: wdc_m3_fnc_handleLGShell

	Author(s):
		ilbinek

	Description:
		Handles the LG shell fired - pretty much a workaround for the fact that Arma is bad game

	Parameters:
		_arty	    - object	- M3 that fired
        _laserCode  - number - laser code to search for

	Returns:
		Nothing
	
	Examples:
		> [_arty] call wdc_m3_fnc_handleLGShell;

	Public:
		No
*/

#include "..\script_component.hpp"

params ["_projectile", "_laserCode"];

private _laserMaxDetectionrange = 1000;
private _laserWavelength = [1550, 1550];
private _seekerCone = 20;

// Create PFH that handles all the guiding
[{
    params ["_args", "_handle"];
    _args params ["_projectile", "_laserCode", "_laserMaxDetectionrange", "_laserWavelength", "_seekerCone"];

    if (!alive _projectile) exitWith {
        [_handle] call CBA_fnc_removePerFrameHandler;
    };

    private _result = [
        getPosASL _projectile,
        vectorDir _projectile,
        _seekerCone,
        _laserMaxDetectionrange,
        _laserWavelength,
        _laserCode,
        _projectile
    ] call ace_laser_fnc_seekerFindLaserSpot;

    // Get the ASL position of the spot
    private _spot = _result#0;

    if (isNil "_spot") exitWith {};

    private _frameTime = diag_deltaTime;
    private _position = getPosASL _projectile;
    (_projectile call BIS_fnc_getPitchBank) params ["_pitch", "_bank"];
    private _vectToTarget = _position vectorFromTo _spot;
    private _vectToTargetDiff = _vectToTarget vectorDiff (vectorNormalized (velocity _projectile));
    private _vectorModelSpace = _projectile vectorWorldToModel _vectToTargetDiff;
    private _angleX = asin (_vectorModelSpace # 0);
    private _angleY = asin (_vectorModelSpace # 2);

    private _turnRate = 24 * _frameTime;  // turn rate is dependant on projectile velocity
    _projectile setDir (getDir _projectile) + (_angleX min _turnRate  max - _turnRate);
    [_projectile, _pitch + (_angleY  min _turnRate  max -_turnRate), 0] call BIS_fnc_setPitchBank;
},
0,
[_projectile, _laserCode, _laserMaxDetectionrange, _laserWavelength, _seekerCone]] call CBA_fnc_addPerFrameHandler;
