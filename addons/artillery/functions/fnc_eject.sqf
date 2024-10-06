/*
	FILE: fnc_eject.sqf

	Name: wdc_m3_fnc_eject

	Author(s):
		ilbinek

	Description:
		Open the M3 breech

	Parameters:
		_arty	- object	- M3 to spawn the spent casing

	Returns:
		Nothing
	
	Examples:
		> [_arty] call wdc_m3_fnc_eject;

	Public:
		No
*/

#include "..\script_component.hpp"

params ["_arty"];

_arty animate ["breech_open_bullet_hide", 0.2, true];

// tbd_mortars_105mm_casing_spent
private _spawnPoint = _arty modelToWorldVisual (_arty selectionPosition ["nabojnicestart", "Memory"]);
private _soundPos3 = _arty modelToWorldVisual (_arty selectionPosition ["nabojniceend", "Memory"]);
private _dirAndUp = _arty selectionVectorDirAndUp ["nabojnicestart", "Memory"];
_dirAndUp set [0, _arty vectorModelToWorld _dirAndUp#0];
_dirAndUp set [1, _arty vectorModelToWorld _dirAndUp#1];

// Spawn a new magazine at this position
private _casing = createVehicle ["SPE_Shellcases_105mm_M1", _spawnPoint, [], 0, "CAN_COLLIDE"];
_casing setVectorDirAndUp _dirAndUp;
_casing allowDamage false;

//Ejection Cloud
_source01 = "#particlesource" createVehicleLocal _spawnPoint;
_source01 setParticleClass "wdc_CannonEjectCloud";
_source01 attachTo [_object, [0,0,0]];


// Add vertical force to the magazine
[{params ["_casing"]; _casing addForce [_casing vectorModelToWorld [0, -200, 0], [0, 0, 0]];}, [_casing]] call CBA_fnc_execNextFrame;
playsound3D [QPATHTO_R(SPE_M3\sounds\casing_drop.ogg), _casing, false, _soundPos3, 5, 1, 30, 0.5];


