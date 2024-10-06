/*
	FILE: fnc_projectileHeightCheck.sqf.sqf

	Name: wdc_m3_fnc_projectileHeightCheck.sqf

	Author(s):
		ilbinek

	Description:
		Fired EH for the M3. This script is called when the M3 fires a VT fuze.

	Parameters:
		_projectile	- object	- The projectile

	Returns:
		Nothing
	
	Examples:
		> [_projectile] call wdc_m3_fnc_projectileHeightCheck.sqf;

	Public:
		No
*/

#include "..\script_component.hpp"

params ["_projectile"];

[{
	params ["_args", "_handle"];
	_args params ["_projectile", "_armedTime"];

	if (isNull _projectile) exitWith {
		[_handle] call CBA_fnc_removePerFrameHandler;
	};
	
	private _pos = getPosATL _projectile;
	private _height = _pos select 2;
	private _detHeight = 10;

	if (time < _armedTime) exitWith {};

	//Track Height
	// systemChat format ["%1 height1", _height];

	//Detonation Sequence
	if (_height > _detHeight) exitWith {};

	if (_height <= _detHeight) then 
	{
		_projectile setVectorDirandUp [[0,0,-1],[0.1,0.1,1]];
		triggerAmmo _projectile;
		[_handle] call CBA_fnc_removePerFrameHandler;
	};
},
0,
[_projectile, (time + 2)]] call CBA_fnc_addPerFrameHandler;
