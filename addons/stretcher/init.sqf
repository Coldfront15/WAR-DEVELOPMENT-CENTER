_action = ["rr_lift", localize "STR_RR_LIFT", "rr_stretch\gui\lift.paa", {[_player, _target] spawn rr_fnc_stretch},{[_player, _target, false, false, true, false] call rr_fnc_stretch_can}] call ace_interact_menu_fnc_createAction;
["vurtual_stretcher", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;


_action = ["rr_disassemble", localize "STR_RR_DISASSEMBLE", "rr_stretch\gui\disassemble.paa", {
	if ((count crew _target > 0) || !(isNull attachedTo _target)) exitWith {false};
	_ground = createVehicle ["GroundWeaponHolder", getPosATL _player, [], 0, "CAN_COLLIDE"];
    _ground addWeaponCargoGlobal ["WW2_ACE_Items_Stretcher_Carry", 1];
	_ground setPosASL getPosASL _target;
	_player playAction 'TakeFlag';
	deleteVehicle _target;
},{(alive _target) && (vehicle _player == _player) && (isNull attachedTo _target) && (count crew _target == 0)}] call ace_interact_menu_fnc_createAction;
["vurtual_stretcher", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;

_action = ["rr_load", localize "STR_RR_LOAD","rr_stretch\gui\load.paa", {
	_unsorted = (position _player) nearEntities [["Air", "Car", "Armored"], 10];
	_sorted = [];
	_pos = getPos _player;
	{
		_closest = _unsorted select 0;
		{if ((getPos _x distance _pos) < (getPos _closest distance _pos)) then {_closest = _x}} forEach _unsorted;
		_sorted = _sorted + [_closest];
		_unsorted = _unsorted - [_closest];
	} forEach _unsorted;
	[_player, _target] call ace_dragging_fnc_dropObject_carry;
	[_target, _sorted select 0] call BIS_fnc_attachToRelative;
},{isNull attachedTo _target},{},[], [0,0,0], 100] call ace_interact_menu_fnc_createAction;
["vurtual_stretcher", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;

_action = ["rr_unload", localize "STR_RR_UNLOAD", "rr_stretch\gui\unload.paa", {
	_veh = attachedTo _target;
	_arr = _veh getVariable ["vurtual_seat_litter_slots",[]];
	if (!(isNull _veh) && (isNull isVehicleCargo _target)) then {
		detach _target; 
		{if ((_x select 0) == _target) then { _x set [0, objNull]}} forEach _arr;
	};
},{(alive _target) && (vehicle _player == _player) && !(isNull attachedTo _target) && (isNull isVehicleCargo _target)}] call ace_interact_menu_fnc_createAction;
["vurtual_stretcher", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;

['ace_unconscious', {params ["_unit", "_state"]; if (animationState _unit == "vurtual_stretcher2") then {moveOut _unit}}] call CBA_fnc_addEventHandler;
addMissionEventHandler ["EntityKilled", {params ["_unit", "_killer"]; if (animationState _unit == "vurtual_stretcher2") then {moveOut _unit}}];

["vurtual_stretcher", "GetIn", {_this call rr_fnc_stretch_armastinky}, true, [], true] call CBA_fnc_addClassEventHandler;