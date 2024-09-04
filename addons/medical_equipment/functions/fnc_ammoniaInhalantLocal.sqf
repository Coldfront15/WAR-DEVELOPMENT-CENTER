#include "..\script_component.hpp"

/*
 * Author: Coldfront15
 * Begins Ammonia Treatment (Local Callback)
 *
 * Arguments:
 * 0: Medic <OBJECT>
 * 1: Patient <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [cursorTarget] call wdc_medical_equipment_fnc_ammoniaInhalantLocal;
 *
 * Public: No
 */

params ["_medic","_patient"];

if ([_patient] call wdc_medical_equipment_fnc_LOCChecker) exitWith 
{
	[_patient, lifeState _patient != "INCAPACITATED"] call ace_medical_status_fnc_setUnconsciousState;
    _output = "Patient wakes up.";
    [_output, 1.5, _medic] call ACEFUNC(common,displayTextStructured);
};

_output = "Patient unresponsive.";
[_output, 1.5, _medic] call ACEFUNC(common,displayTextStructured);


