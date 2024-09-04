#define DEBUG_MODE_FULL
#include "script_component.hpp"

#ifdef DEBUG_MODE_FULL
    call compile preprocessFileLineNumbers QPATHTOF(dev\reportSettings.sqf);
    call compile preprocessFileLineNumbers QPATHTOF(dev\watchVariable.sqf);
    call compile preprocessFileLineNumbers QPATHTOF(dev\debugDisplay.sqf);
#endif

[QGVAR(ammoniaInhalantLocal), LINKFUNC(ammoniaInhalantLocal)] call CBA_fnc_addEventHandler