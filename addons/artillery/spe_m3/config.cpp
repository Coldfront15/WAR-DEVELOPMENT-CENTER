#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
		name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"cba_main"};
		skipWhenMissingDependencies = 1;
		author = "Coldfront15";
        VERSION_CONFIG;
		addonRootClass = QUOTE(ADDON);
    };
};

class Mode_SemiAuto;

#include "CfgCloudlets.hpp"

class wdc_airburst_explosion
{
	class wdc_airburst_explosion
	{
		simulation = "particles";
		type = "wdc_airburst_explosion";
		position[] = {0,0,0};
		enabled = "flyTime interpolate [0,0.2,1,-1]";
		intensity = 10;
		interval = 1;
	};
	class GrenadeExp1
	{
		simulation = "particles";
		type = "ClusterExpFire";
		position[] = {0,0,0};
		intensity = 10;
		interval = 1;
		lifeTime = 0.5;
		enabled = "flyTime interpolate [0,0.2,1,-1]";
	};
	class BombExp1
	{
		simulation = "particles";
		type = "wdc_airburst_smoke";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.15;
		enabled = "flyTime interpolate [0,0.2,1,-1]";
	};
};

#include "CfgAnimationSourceSounds.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
