//----------------------------------------
// flak module script by [Dust]Sabre
//----------------------------------------

//systemchat "initialising flak controller";

params ["_units", "_flakenemyside","_flakrange","_flakdelay","_flakdiameter","_flakaltitude","_flakminalt", "_flakType"];

if (count _units < 1) exitWith {"please sync the flak module with a vehicle or an aa gun" call bis_fnc_error;};

private _unit = _units select 0;
// systemchat str _unit;

while {alive _unit} do {

		// systemchat "running";
		private _possibleTargets = (getPos _unit) nearObjects ["plane", _flakrange];
		// systemchat str _possibleTargets;
		private _enemyTargets = [];
		private _flakAmmo_small = "SPE_FlakExplosion"; 
  		private _flakAmmo_big = "SPE_FlakExplosion2"; 
		private _flakAmmo = _flakAmmo_small;
		
		if (_flakenemyside == "west") then {{if (side _x == west) then {_enemyTargets pushBack _x;};} forEach _possibleTargets;};
		if (_flakenemyside == "east") then {{if (side _x == east) then {_enemyTargets pushBack _x;};} forEach _possibleTargets;};
		if (_flakenemyside == "resistance") then {{if (side _x == resistance) then {_enemyTargets pushBack _x;};} forEach _possibleTargets;};

		// systemchat str _enemyTargets;
		if (_flakType == 0) then {
			_flakAmmo = _flakAmmo_big;
		} else {
			_flakAmmo = _flakAmmo_small;
		};

	if (count _enemyTargets > 0) then  {	
	
		// systemchat "targeting";
		private _currentTarget = selectRandom _enemyTargets;
		private	_zz = getpos _currentTarget select 2;
		if (_zz > _flakminalt) then {
			private _flakExplosion = _currentTarget getPos [random _flakdiameter, random 360];
			_flakExplosion set [2, (getPos _currentTarget # 2) - _flakaltitude + random (2*_flakaltitude)];
			_flakAmmo createVehicle _flakExplosion;
			// systemchat str _currentTarget;	
		};
		sleep _flakdelay;
	};		
	sleep _flakdelay;	
};
