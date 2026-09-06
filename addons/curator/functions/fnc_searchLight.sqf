//----------------------------------------
// search light script by coldfront15
//----------------------------------------

//systemchat "initialising search light controller";

params ["_units","_searchDelay"];

if (count _units < 1) exitWith {"Please sync the search light module with a SPE searchlight" call bis_fnc_error;};

{
    private _unit = _x;
    private _delay = _searchDelay;

    [_unit, _delay] spawn {
        params ["_unit", "_delay"];

        private _gunner = _unit turretUnit [0]; 
        _gunner action ["SearchLightOn", _unit];

        while {alive _gunner} do
        {
            private _dir = [0,359] call BIS_fnc_randomInt;    
            private _relpos = _unit getRelPos [500, _dir];   
            private _position = [(_relpos select 0), _relpos select 1, 1000];      
            
            _gunner doWatch _position; 

            sleep (_delay + floor (random 3));
        };
    };

} forEach _units;