class CfgWeapons {

	class CannonCore;
	class SPE_CannonCore: CannonCore {};
	class SPE_TankCannon_base: SPE_CannonCore {
		class player;
		class close;
		class short;
		class medium;
		class far;
	};
	class SPE_StaticGunCannon_base: SPE_TankCannon_base {};

	class SPE_M3_105_Howitzer_Cannon: SPE_StaticGunCannon_base {
		class Single1: Mode_SemiAuto {};
		class Single2: Single1 {};
		class Single3: Single1 {};
		class Single4: Single1 {};
		class Single5: Single1 {};
	};

	class WDC_M3_WEAPON: SPE_M3_105_Howitzer_Cannon {
		displayName = "M3 Howitzer";
		magazines[] = {
			QUOTE(wdc_artillery_SPE_M3_M1_HE_CHARGE_MAG_1), QUOTE(wdc_artillery_SPE_M3_M1_HE_CHARGE_MAG_2), QUOTE(wdc_artillery_SPE_M3_M1_HE_CHARGE_MAG_3), QUOTE(wdc_artillery_SPE_M3_M1_HE_CHARGE_MAG_4), QUOTE(wdc_artillery_SPE_M3_M1_HE_CHARGE_MAG_5), 

			QUOTE(wdc_artillery_SPE_M3_M60_WP_CHARGE_MAG_1), QUOTE(wdc_artillery_SPE_M3_M60_WP_CHARGE_MAG_2), QUOTE(wdc_artillery_SPE_M3_M60_WP_CHARGE_MAG_3), QUOTE(wdc_artillery_SPE_M3_M60_WP_CHARGE_MAG_4), QUOTE(wdc_artillery_SPE_M3_M60_WP_CHARGE_MAG_5),

			QUOTE(wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_MAG_1), QUOTE(wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_MAG_2), QUOTE(wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_MAG_3), QUOTE(wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_MAG_4), QUOTE(wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_MAG_5),

			QUOTE(wdc_artillery_SPE_M3_M67_HEAT_CHARGE_MAG_5)
		};
		modes[] = {"Single1"};
		reloadSound[] = {};
		reloadMagazineSound[] = {};
		magazineReloadTime = 0.5;
		drySound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_dry",1,1,15};
		class Single1: Single1 {
			displayName="105mm Howitzer";
			reloadTime = 0.35;
			artilleryDispersion = 1.9;
			artilleryCharge = 1;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.0099999998;
			midRange = 1;
			midRangeProbab = 0.0099999998;
			maxRange = 2;
			maxRangeProbab = 0.0099999998;
		};
		class GunParticles
		{
			class Effect1
			{
				effectName = "ArtilleryFired1";
				positionName = "gun_end";
				directionName = "gun_start";
			};
			class ejectSmoke
			{
				effectName = "SPE_CannonEjectCloud";
				positionName = "nabojniceend";
				directionName = "nabojnicestart";
			};
		};
	};
};
