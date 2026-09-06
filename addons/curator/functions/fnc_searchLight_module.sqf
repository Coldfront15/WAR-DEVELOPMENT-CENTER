// template from https://community.bistudio.com/wiki/Modules
// Argument 0 is module logic.
private _logic = param [0,objNull,[objNull]];
// Argument 1 is list of affected units (affected by value selected in the 'class Units' argument))
private _units = param [1,[],[[]]];
// True when the module was activated, false when it's deactivated (i.e., synced triggers are no longer active)
private _activated = param [2,true,[true]];
// Module specific behavior. Function can extract arguments from logic and use them.
if (_activated) then {
	 // Attribute values are saved in module's object space under their class names
	 [
	  _units,
	 _logic getVariable ["searchDelay", 5]
	 ] spawn wdc_curator_fnc_searchLight;

};
// Module function is executed by spawn command, so returned value is not necessary, but it's good practice.
true