class CfgAmmo {
	class BulletCore;
	class BulletBase: BulletCore {};
	class ShellCore;
	class ShellBase: ShellCore {};
	class SubmunitionCore;
	class Sh_155mm_AMOS: ShellBase {};
	class Sh_82mm_AMOS: Sh_155mm_AMOS {};

	class SPE_ShellSmoke_base: ShellBase {};
	class SPE_ShellHE_base: ShellBase {};
	class SPE_M3_M1_HE: SPE_ShellHE_base {};
	class SPE_M3_M60_WP: SPE_M3_M1_HE {};
	class SPE_M3_M84_SMK: SPE_ShellSmoke_base {};

	class wdc_artillery_SPE_M3_M1_HE_SHELL_HE: SPE_M3_M1_HE {};


	class wdc_artillery_SPE_M3_M1_HE_Airburst_Submunition: BulletBase
	{
		explosionEffects = "SPE_M2_API_ImpactEffect_P47";
		class HitEffects
		{
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitWood = "SPE_M2_API_ImpactEffect_P47";
			hitHay = "SPE_M2_API_ImpactEffect_P47";
			hitMetal = "SPE_M2_API_ImpactEffect_P47";
			hitMetalPlate = "SPE_M2_API_ImpactEffect_P47";
			hitBuilding = "SPE_M2_API_ImpactEffect_P47";
			hitPlastic = "SPE_M2_API_ImpactEffect_P47";
			hitRubber = "SPE_M2_API_ImpactEffect_P47";
			hitTyre = "SPE_M2_API_ImpactEffect_P47";
			hitConcrete = "SPE_M2_API_ImpactEffect_P47";
			hitMan = "ImpactEffectsBlood";
			hitGroundSoft = "SPE_M2_API_ImpactEffect_P47";
			hitGroundRed = "SPE_M2_API_ImpactEffect_P47";
			hitGroundHard = "SPE_M2_API_ImpactEffect_P47";
			hitWater = "ImpactEffectsWater";
			hitVirtual = "SPE_M2_API_ImpactEffect_P47";
		};
		artilleryLock = 1;
		timeToLive = 120;
		model = "\A3\Weapons_F\Ammo\Missile_AT_02_F";
		hit = 50;
		caliber = 2;
        explosive = 0;
		indirectHit = 5;
		indirectHitRange = 3;
		cost = 1000;
		audibleFire = 64;
		dangerRadiusHit = 1250;
		suppressionRadiusHit = 120;
		deflecting = 0;
		airFriction = 0;
		muzzleEffect = "";
		effectFly = "wdc_airburst_explosion";
		warheadName = "Incendiary";
		craterEffects = "ExploAmmoCrater";
	};

	class wdc_artillery_SPE_M3_M1_HE_SHELL_VT: SPE_M3_M1_HE {
		triggerDistance = 10;
		submunitionConeAngle = 55;
		submunitionConeType[] = {"randomcenter", 45};
		submunitionAmmo[] = {"wdc_artillery_SPE_M3_M1_HE_Airburst_Submunition",1};
		submunitionInitSpeed = 90;
		submunitionParentSpeedCoef = 0.1;
		deleteParentWhenTriggered = 0;
		explosive = 0.1;
		explosionEffects = "ExploAmmoExplosion";
        ace_frag_metal = 3250;  // Amount of metal being fragmented (grams) - information below
        ace_frag_charge = 700;  // Amount of explosive filler (grams) - information below
        ace_frag_gurney_c = 2700;  // Gurney velocity constant for explosive type - information below
        ace_frag_gurney_k = 3/5;  // Gurney shape factor - information below
        ace_frag_classes[] = {"ACE_frag_medium","ACE_frag_large"};  // Type of fragments - information below
        ace_frag_force = 1;  // (Optional) Force fragmentation system (0-disabled, 1-enabled) - information below
	};

	class wdc_artillery_SPE_M3_M60_WP_SHELL_WP: SPE_M3_M60_WP {};

	// class wdc_artillery_SPE_M3_M84_SMK: SPE_M3_M84_SMK {
	// 	model = QPATHTOF(spe_m3\wdc_M84_SMK);
	// };
};
