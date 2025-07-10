/*
	Author: Kerc/Coldfront15

		Handles initial fire damage of WP

	Arguments:
		params ["_projectile"];

	Return Value:
		none
*/
params ["_projectile"];
if (!local _projectile) exitWith {};

_projectile addEventHandler ["Explode",
{
  _this spawn
  {
    params ["_projectile", "_pos"];


    if (surfaceIsWater _pos) exitWith {};
    private _range = [configOf _projectile,"SPE_Fire_Range", 8] call BIS_fnc_returnConfigEntry;
    private _burnTime = [configOf _projectile,"SPE_Fire_BurnTime", 6] call BIS_fnc_returnConfigEntry;
    private _objects = [];

    private _endPos = _pos vectorAdd [0,0,_range];
    private _intersects = lineIntersectsSurfaces [_pos, _endpos, objNull, objNull, true, 32];

    {
      private _newpos = (_x select 0);
      private _house = (_x select 3);

      if (!isNil "_house" && {_house isKindOf "House"}) exitWith {_endpos = _newPos};
    } forEach _intersects;

    private _means = (((_pos select 2) + (_endpos select 2)) / 2);
    private _midPos = [_pos select 0,_pos select 1,_means];
    _pos = ASLToAGL _pos;
    _burnTime = _burnTime + time;
    while {time <= _burnTime} do
    {
      _objects = _pos nearEntities ["CAManBase",_range];

      {
        ["ace_fire_burn", [_x, 3]] call CBA_fnc_globalEvent;
      } forEach _objects;

      sleep 0.5;
    };
  };
}];
