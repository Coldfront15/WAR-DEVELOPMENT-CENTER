#include "..\script_component.hpp"

class CfgPatches
{
	class wdc_m3
	{
		addonRootClass = "A3_Armor_F_Beta";
		requiredAddons[] = {"cba_main","ace_interact_menu","tbd_mortars_main","ww2_spe_assets_c_vehicles_staticweapons_u1_c"};
		requiredVersion = 0.5;
		skipWhenMissingDependencies = 1;
		weapons[] = {};
		units[] = {};
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