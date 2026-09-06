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
	 _logic getVariable ["flakenemyside", west],
	 _logic getVariable ["flakrange", 2000], 
	 _logic getVariable ["flakdelay", 1],
	 _logic getVariable ["flakdiameter", 200],
	 _logic getVariable ["flakaltitude", 100],
	 _logic getVariable ["flakminalt", 100],
	 _logic getVariable ["flakType", 0]
	 ] spawn wdc_curator_fnc_flak;

};
// Module function is executed by spawn command, so returned value is not necessary, but it's good practice.
true