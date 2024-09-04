#include "..\script_component.hpp"
/*
 * Author: Ruthberg
 * Modified by: Coldfront15
 * Check if a unit has a LOC able to respond to outside stimuli. Based off of head injuries & a simplified stable vital check, for use with stimulants.
 *
 * Arguments:
 * 0: The patient <OBJECT>
 *
 * Return Value:
 * Will respond to stimulant <BOOL>
 *
 * Example:
 * [player] call wdc_medical_equipment_fnc_LOCChecker
 *
 * Public: No
 */

params ["_unit"];

if (GET_BLOOD_VOLUME(_unit) < 4.0) exitWith { false };
if IN_CRDC_ARRST(_unit) exitWith { false };

private _cardiacOutput = [_unit] call FUNC(getCardiacOutput);
private _bloodLoss = GET_BLOOD_LOSS(_unit);
if (_bloodLoss > (0.75 * _cardiacOutput) / 2) exitWith { false };

private _traumaThreshold = 4.25;
private _bodyDamage = _unit getVariable "ace_medical_bodyPartDamage";
if (
	_bodyDamage select 1 > _traumaThreshold
) exitWith { false }; 
//Somehow works

private _bloodPressure = GET_BLOOD_PRESSURE(_unit);
_bloodPressure params ["_bloodPressureL", "_bloodPressureH"];
if (_bloodPressureL < 40 || {_bloodPressureH < 50}) exitWith { false };

private _heartRate = GET_HEART_RATE(_unit);
if (_heartRate < 40) exitWith { false };

true