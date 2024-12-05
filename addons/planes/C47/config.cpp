
class CfgPatches
{
	class wdc_C47_Patch
	{
		units[] = {"SPEX_C47_Skytrain","SPEX_C47_RAF","SPEX_C47_Skytrain_wreck","SPEX_C47_RAF_snafu","SPEX_C47_RAF_bob"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"WW2_SPEX_Assets_c_Vehicles_Planes_c_C47","WW2_SPE_Core_c_Core_c","WW2_SPE_Assets_c_Vehicles_XXX_LoadOrder_c_FighterPlanes"};
	};
};
class CfgVehicles
{
	class All;
	class AllVehicles: All
	{
		class NewTurret;
		class ViewCargo;
	};
	class Air: AllVehicles
	{
		class AnimationSources;
	};
	class Plane: Air
	{
		class ViewPilot;
		class HitPoints;
	};
	class Plane_Base_F: Plane
	{
		class Turrets
		{
			class CopilotTurret: NewTurret
			{
				class ViewGunner: ViewPilot
				{
				};
			};
		};
		class HitPoints: HitPoints
		{
		};
	};
	class SPE_Plane_base: Plane_Base_F
	{
		class AnimationSources;
		class HitPoints: HitPoints
		{
		};
		class Turrets: Turrets
		{
      class CopilotTurret: CopilotTurret {};
			class MainTurret: NewTurret {};
		};
		class CargoTurret;
	};
	class SPE_US_Plane_base: SPE_Plane_base
	{
		class ViewPilot;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
		};
	};

	class SPEX_C47_Skytrain: SPE_US_Plane_base
	{
		scope = 2;
		driveOnComponent[] = {};
		displayName = "$STR_DN_SPEX_C47_Skytrain";
		model = "\WW2\SPEX\addons\Assets_m_Vehicles_Planes_m\SPEX_C47.p3d";
    driverAction = "SPEX_C47_pilot";
    driverInAction = "SPEX_C47_pilot";

    viewDriverInExternal = 1;
    canHideDriver = 0;
    castDriverShadow = 1;
		castCargoShadow = 1;
		hideProxyInCombat = 1;
		forceHideDriver = 1;

		hiddenSelections[] = {"camo","camo1","camo2", "letter_1", "letter_2", "letter_3", "num_1", "num_2", "num_3", "num_4", "num_5", "num_6",};
		hiddenSelectionsTextures[] = {
			"WW2\SPEX\addons\Assets_t_Vehicles_Planes_t\C47\DC3_Body_01_co.paa",
			"WW2\SPEX\addons\Assets_t_Vehicles_Planes_t\C47\DC3_Body_02_co.paa",
			"WW2\SPEX\addons\Assets_t_Vehicles_Planes_t\C47\DC3_Cargo_01_co.paa",
			""
			};

		driverLeftHandAnimName = "yoke_L";
		driverRightHandAnimName = "yoke_L";
		driverLeftLegAnimName = "";
		driverRightLegAnimName = "";

		transportSoldier = 18;

		mapSize = 29.12;
		crew = "SPEX_US_Pilot_Cap";
		
		typicalCargo[] = {"SPE_US_101AB_rifleman","SPE_US_101AB_Assist_SquadLead","SPE_US_101AB_AT_soldier","SPE_US_101AB_CO"};
		getInProxyOrder[] = {18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
		cargoProxyIndexes[] = {18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
		cargoAction[] =
    {
      "SPEX_C47_Right2Sit",
	  "SPEX_C47_LeftSit",
	  "SPEX_C47_Right3Sit",
	  "SPEX_C47_Left2Sit",
	  "SPEX_C47_RightSit",
	  "SPEX_C47_Left3Sit",
	  "SPEX_C47_Right2Sit",
	  "SPEX_C47_Left4Sit",
	  "SPEX_C47_Right4Sit",
	  "SPEX_C47_Left3Sit",
	  "SPEX_C47_RightSit",
	  "SPEX_C47_LeftSit",
      "SPEX_C47_Right2Sit",
	  "SPEX_C47_Left2Sit",
	  "SPEX_C47_Right3Sit",
	  "SPEX_C47_Left4Sit",
	  "SPEX_C47_Right4Sit",
	  "SPEX_C47_Left2Sit"
    };
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment1"};

    	armor = 50;
    	armorStructural = 1;

    	camouflage = 200;
		audible = 60;
		accuracy = 0.2;
		cost = 2000000;

		supplyRadius = 8;
		minFireTime = 10;
		gunAimDown = 0.05;
		weapons[] = {};
		magazines[] = {};
		fuelCapacity = 1848.6;

		#include "flightmodel.hpp"

		SPE_JumpMasterTurretIndex = 1;
		SPE_DoorTurretIndex = 2;
    	SPEX_Glider_Tow = 1;

		class UserActions
		{
      class cargoStandUp
      {
        displayName = "$STR_SPEX_DN_ASSETS_VEHICLES_STAND_UP";
        displayNameDefault = "";
        position = "";
        radius = 20;
        onlyForPlayer = 1;
        condition = "[this,(call SPE_fnc_findPlayer)] call SPEX_fnc_System_Planes_C47_StandUp_Condition";
        statement = "[this,(call SPE_fnc_findPlayer)] call SPEX_fnc_System_Planes_C47_StandUp_Action";
        priority = 0.95;
      };
      class cargoSitDown
      {
        displayName = "$STR_SPEX_DN_ASSETS_VEHICLES_SIT_DOWN";
        displayNameDefault = "";
        position = "";
        radius = 20;
        onlyForPlayer = 1;
        condition = "[this,(call SPE_fnc_findPlayer)] call SPEX_fnc_System_Planes_C47_SitDown_Condition";
        statement = "[this,(call SPE_fnc_findPlayer)] call SPEX_fnc_System_Planes_C47_SitDown_Action";
        priority = 0.6;
      };
      class InteriorLights_On
      {
        displayName = "$STR_SPE_DN_INT_LIGHTS_ON";
        position = "";
        radius = 10;
        showWindow = 0;
        onlyForplayer = 1;
        condition = "Alive(this) AND ((call SPE_fnc_findPlayer) == currentPilot this) AND this animationSourcePhase ""Hide_LightCabin"" > 0.5";
        statement = "this animateSource [""Hide_LightCabin"",0,true];";
        priority = 0.3;
      };
      class InteriorLights_Off: InteriorLights_On
      {
        displayName = "$STR_SPE_DN_INT_LIGHTS_OFF";
        condition = "Alive(this) AND ((call SPE_fnc_findPlayer) == currentPilot this) AND this animationSourcePhase ""Hide_LightCabin"" < 0.5";
        statement = "this animateSource [""Hide_LightCabin"",1,true];";
        priority = 0.3;
      };
      class JumpLightOff
      {
        displayName = "$STR_SPEX_DN_ASSETS_VEHICLES_JUMP_LIGHT_OFF";
        displayNameDefault = "";
        position = "";
        radius = 20;
        onlyForPlayer = 1;
        condition = "[this,(call SPE_fnc_findPlayer),0] call SPEX_fnc_System_Planes_InteriorLights_jumpLight_Condition";
        statement = "[this,(call SPE_fnc_findPlayer),0] call SPEX_fnc_System_Planes_InteriorLights_jumpLight_Action";
        priority = 0.3;
      };
      class changeLightToGreen
      {
        displayName = "$STR_SPEX_DN_ASSETS_VEHICLES_CHANGE_LIGHT_TO_GREEN"; //Green
        displayNameDefault = "";
        position = "";
        radius = 20;
        onlyForPlayer = 1;
        condition = "[this,(call SPE_fnc_findPlayer),2] call SPEX_fnc_System_Planes_InteriorLights_jumpLight_Condition";
        statement = "[this,(call SPE_fnc_findPlayer),2] call SPEX_fnc_System_Planes_InteriorLights_jumpLight_Action";
        priority = 0.3;
      };
      class changeLightToRed
      {
        displayName = "$STR_SPEX_DN_ASSETS_VEHICLES_CHANGE_LIGHT_TO_RED"; //Red
        displayNameDefault = "";
        position = "";
        radius = 20;
        onlyForPlayer = 1;
        condition = "[this,(call SPE_fnc_findPlayer),1] call SPEX_fnc_System_Planes_InteriorLights_jumpLight_Condition";
        statement = "[this,(call SPE_fnc_findPlayer),1] call SPEX_fnc_System_Planes_InteriorLights_jumpLight_Action";
        priority = 0.3;
      };
      class C47_atDoor_Eject
      {
        priority = 0.05;
        shortcut = "Eject";
        displayName = "$STR_A3_action_eject";
        condition = "(this turretUnit [2] isEqualTo (call SPE_fnc_findPlayer))  && {speed this > 1}";
        statement = "[this,(call SPE_fnc_findPlayer)] call SPEX_fnc_System_Planes_C47_atDoor_Eject";
        position = "pilotcontrol";
        radius = 10;
        onlyforplayer = 1;
        showWindow = 0;
        hideOnUse = 1;
      };
		};
		class compartmentsLights
		{
			class Comp1
			{
        //Jump lights
				class Light1
				{
          color[] = {18.2,2,2.4};
					ambient[] = {18.2,2,2.4};
					intensity = 5;
					size = 0;
					useFlare = 0;
					flareSize = 0.1;
					flareMaxDistance = 0;
					dayLight = 1;
					blinking = 0;
					class Attenuation
					{
            start            = 0;
						constant        = 1;
						linear            = 2;
						quadratic        = 20;
						hardLimitStart    = 0;
						hardLimitEnd    = 5;
					};
					point = "int_Light1";
				};
        class Light2: Light1
				{
					color[] = {0,19.3,0};
					ambient[] = {0,19.3,0};
					point = "int_Light2";
				};

        //Dome lights
        class Dome_Light1
        {
          color[] = {22,21,30};
          ambient[] = {22,21,30};
          intensity = 15;
          size = 0;
          useFlare = 0;
          flareSize = 0;
          flareMaxDistance = 0;
          dayLight = 1;
          blinking = 0;
          class Attenuation
          {
            start            = 0.1;
						constant        = 2;
						linear            = 5;
						quadratic        = 70;
						hardLimitStart    = 0.65;
						hardLimitEnd    = 5;
          };
          point = "dome_light1";
        };
        class Dome_Light2: Dome_Light1
        {
          point = "dome_light2";
        };
        class Dome_Light3: Dome_Light1
        {
          point = "dome_light3";
        };
        class Dome_Light4: Dome_Light1
        {
          point = "dome_light4";
        };
        class Dome_Light5: Dome_Light1
        {
          point = "dome_light5";
        };
        class Dome_Light6: Dome_Light1
        {
          point = "dome_light6";
        };
        class Dome_Light7: Dome_Light1
        {
          point = "dome_light7";
        };
			};
		};
		class Turrets: Turrets
		{
      class CopilotTurret: CopilotTurret
			{
				allowTabLock = 0;
				canUseScanners = 0;
//				turretCanSee = 0;

				enableManualFire = 0;
				ejectSpeed[] = {15,0,0};
				proxyIndex = 1;
				startEngine = 0;
				outGunnerMayFire = 0;
				commanding = -1;
				body = "";
				gun = "";
				animationSourceBody = "";
				animationSourceGun = "";
				gunnerLeftHandAnimName = "yoke_R";
				gunnerRightHandAnimName = "yoke_R";
				memoryPointsGetInGunner = "pos driver";
				memoryPointsGetInGunnerDir = "pos driver dir";
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				memoryPointGun = "";
				memoryPointGunnerOptics = "";
				gunnerName = "$STR_A3_COPILOT";
				selectionFireAnim = "";
				castGunnerShadow = 1;
				minElev = -50;
				initElev = 11;
				maxElev = 30;
				minTurn = -170;
				maxTurn = 170;
				gunnerAction = "SPEX_C47_pilot";
				gunnerInAction = "SPEX_C47_pilot";
				gunnerOpticsModel = "\A3\Weapons_F\empty.p3d";
				gunnerForceOptics = 0;
        forceHideGunner = 1;
				isCopilot = 1;
				canEject = 0;
				gunnerNotSpawned = 0;
        viewGunnerInExternal = 1;
				class HitPoints{};
				turretCanSee = 15;
				LODTurnedOut = 1100;
				LODTurnedIn = 1100;
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
        gunnerAction = "SPEX_C47_Jumpmaster";
				gunnerInAction = "SPEX_C47_Jumpmaster";
				gunnerCompartments = "Compartment1";
				gunnerName = "$STR_SPEX_DN_ASSETS_VEHICLES_JUMPMASTER";
				maxElev = 60;
				minElev = -20;
				maxTurn = 130;
				minTurn = -110;
				isPersonTurret = 2;
				gunnerForceOptics = 0;
				LODTurnedOut = 1;
				SPE_WP_TurretProtected = 1;
        showAsCargo = 1;
        forceHideGunner = 1;
        enabledByAnimationSource = "cargoFFV_Dummy_door";
        viewGunnerInExternal = 1;
				class ViewGunner: ViewCargo
				{
					minAngleX = -65;
					maxAngleX = 85;
					initAngleX = 0;
					minAngleY = -150;
					maxAngleY = 150;
					initAngleY = 0;
					minFov = 0.25;
					initFov = 0.75;
					maxFov = 1.25;
				};
        proxyIndex = 2;
			};
			class CargoTurret_02: CargoTurret_01
      {
        gunnerName = "$STR_A3_TURRETS_DOOR_L";
        gunnerInAction = "SPEX_C47_AtDoor_In";
        gunnerAction = "SPEX_C47_AtDoor_Out";
        proxyIndex = 3;
        forceHideGunner = 0;
        canHideGunner = 1;
        hideProxyInCombat = 1;
        canEject = 0;
      };

		};
		class ViewPilot: ViewPilot
		{
			minFov = 0.25;
			initFov = 0.75;
			maxFov = 1.25;
			initAngleX = 0;
			minAngleX = -40;
			maxAngleX = 90;
			initAngleY = 0;
			minAngleY = -90;
			maxAngleY = 90;
		};
		class Hitpoints: Hitpoints
		{
			class HitHull: HitHull
			{
				armor = 1.5;
				explosionShielding = 1;
				name = "HitHull";
				passThrough = 0.5;
				radius = 0.6;
				minimalHit = 0.01;
				depends = "Total";
				material = -1;
				visual = "Hit_Hull";
			};
			class HitEngine: HitEngine
			{
				armor = 0.6;
				explosionShielding = 2.5;
				name = "HitEngine";
				passThrough = 0.5;
				visual = "Hit_EngineL";
				radius = 0.25;
				minimalHit = 0.02;
				depends = "0";
				material = -1;
			};
			class HitEngine2: HitEngine
			{
				visual = "Hit_EngineR";
				name = "HitEngine2";
			};
			class HitFuel: HitHull
			{
				armor = 1;
				explosionShielding = 2;
				name = "HitFuel";
				passThrough = 0.2;
				radius = 0.1;
				visual = "-";
				depends = "0";
			};
			class HitFuel2: HitHull
			{
				armor = 1;
				explosionShielding = 2;
				name = "HitFuel2";
				passThrough = 0.2;
				radius = 0.1;
				visual = "-";
				depends = "0";
			};
			class HitLAileron: HitHull
			{
				armor = 0.8;
				explosionShielding = 3;
				name = "HitLAileron";
				passThrough = 0.1;
				radius = 0.15;
				visual = "Hit_AileronL";
				depends = "0";
				minimalHit = 0.01;
			};
			class HitRAileron: HitLAileron
			{
				armor = 0.8;
				explosionShielding = 3;
				name = "HitRAileron";
				passThrough = 0.1;
				radius = 0.15;
				visual = "Hit_AileronR";
				depends = "0";
				minimalHit = 0.01;
			};
			class HitLCRudder: HitHull
			{
				armor = 0.8;
				explosionShielding = 3;
				name = "HitLCRudder";
				passThrough = 0.1;
				radius = 0.15;
				visual = "Hit_RudderC";
				depends = "0";
				minimalHit = 0.01;
			};
			class HitLCElevator: HitHull
			{
				armor = 0.8;
				explosionShielding = 3;
				name = "HitLCElevator";
				passThrough = 0.1;
				radius = 0.25;
				visual = "Hit_ElevatorL";
				depends = "0";
				minimalHit = 0.01;
			};
			class HitRElevator: HitLCElevator
			{
				armor = 0.8;
				explosionShielding = 3;
				name = "HitRElevator";
				passThrough = 0.1;
				radius = 0.25;
				visual = "Hit_ElevatorR";
				depends = "0";
				minimalHit = 0.01;
			};
		};
		destrType = "DestructDefault";
		dammageHalf[] = {};
		dammageFull[] = {};
		class Damage
		{
			tex[] = {};
			mat[] = {
				"WW2\SPEX\addons\Assets_r_Vehicles_Planes_r\C47\Dc3_Body_01.rvmat",
				"WW2\SPEX\addons\Assets_r_Vehicles_Planes_r\C47\Dc3_Body_01_Damage.rvmat",
				"WW2\SPEX\addons\Assets_r_Vehicles_Planes_r\C47\Dc3_Body_01_Destruct.rvmat",

				"WW2\SPEX\addons\Assets_r_Vehicles_Planes_r\C47\Dc3_Body_01_bare.rvmat",
				"WW2\SPEX\addons\Assets_r_Vehicles_Planes_r\C47\Dc3_Body_01_bare_Damage.rvmat",
				"WW2\SPEX\addons\Assets_r_Vehicles_Planes_r\C47\Dc3_Body_01_Destruct.rvmat",

				"WW2\SPEX\addons\Assets_r_Vehicles_Planes_r\C47\Dc3_Body_01_bare_us.rvmat",
				"WW2\SPEX\addons\Assets_r_Vehicles_Planes_r\C47\Dc3_Body_01_bare_us_Damage.rvmat",
				"WW2\SPEX\addons\Assets_r_Vehicles_Planes_r\C47\Dc3_Body_01_Destruct.rvmat",

				"WW2\SPEX\addons\Assets_r_Vehicles_Planes_r\C47\Dc3_Body_02.rvmat",
				"WW2\SPEX\addons\Assets_r_Vehicles_Planes_r\C47\Dc3_Body_02_Damage.rvmat",
				"WW2\SPEX\addons\Assets_r_Vehicles_Planes_r\C47\Dc3_Body_02_Destruct.rvmat",

				"WW2\SPEX\addons\Assets_r_Vehicles_Planes_r\C47\Dc3_Body_02_bare.rvmat",
				"WW2\SPEX\addons\Assets_r_Vehicles_Planes_r\C47\Dc3_Body_02_bare_Damage.rvmat",
				"WW2\SPEX\addons\Assets_r_Vehicles_Planes_r\C47\Dc3_Body_02_Destruct.rvmat",

				"WW2\SPEX\addons\Assets_r_Vehicles_Planes_r\C47\Dc3_Body_02_bare_us.rvmat",
				"WW2\SPEX\addons\Assets_r_Vehicles_Planes_r\C47\Dc3_Body_02_bare_us_Damage.rvmat",
				"WW2\SPEX\addons\Assets_r_Vehicles_Planes_r\C47\Dc3_Body_02_Destruct.rvmat",

				"WW2\SPEX\addons\Assets_r_Vehicles_Planes_r\C47\Dc3_Cockpit_1.rvmat",
				"WW2\SPEX\addons\Assets_r_Vehicles_Planes_r\C47\Dc3_Cockpit_1.rvmat",
				"WW2\SPEX\addons\Assets_r_Vehicles_Planes_r\C47\Dc3_Cockpit_1_Destruct.rvmat",

				"WW2\SPEX\addons\Assets_r_Vehicles_Planes_r\C47\Dc3_Cockpit_2.rvmat",
				"WW2\SPEX\addons\Assets_r_Vehicles_Planes_r\C47\Dc3_Cockpit_2.rvmat",
				"WW2\SPEX\addons\Assets_r_Vehicles_Planes_r\C47\Dc3_Cockpit_2_Destruct.rvmat"
				};
		};
		class Library
		{
			libTextDesc = "The Douglas C-47 Skytrain or Dakota (RAF designation) is a military transport aircraft developed from the civilian Douglas DC-3 airliner.";
		};
		
		class Reflectors
		{
			class LeftWing
			{
				color[] = {9000,8000,7000,1};
				ambient[] = {5,5,5};
				position = "p svetlo";
				direction = "konect p svetla";
				hitpoint = "HitLight_L";
				selection = "leftLight";
				intensity = 50;
				size = 1;
				innerAngle = 20;
				outerAngle = 80;
				coneFadeCoef = 10;
				dayLight = 0;
				useFlare = 1;
				flareSize = 4;
				flareMaxDistance = 250;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 1;
					hardLimitStart = 100;
					hardLimitEnd = 200;
				};
			};
			class RightWing
			{
				color[] = {9000,8000,7000,1};
				ambient[] = {5,5,5};
				position = "l svetlo";
				direction = "konect l svetla";
				hitpoint = "HitLight_R";
				selection = "rightLight";
				intensity = 50;
				size = 1;
				innerAngle = 20;
				outerAngle = 80;
				coneFadeCoef = 10;
				dayLight = 0;
				useFlare = 1;
				flareSize = 4;
				flareMaxDistance = 250;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 1;
					hardLimitStart = 100;
					hardLimitEnd = 200;
				};
			};
		};
		aggregateReflectors[] = {{"RightWing"},{"LeftWing"}};
		class AnimationSources
		{
			class Damper_1_source
			{
				source = "damper";
				wheel = "Wheel_1";
			};
			class Damper_2_source
			{
				source = "damper";
				wheel = "Wheel_2";
			};
			class Damper_3_source
			{
				source = "damper";
				wheel = "Wheel_3";
			};
			class Wheel_1_source
			{
				source = "wheel";
				wheel = "Wheel_1";
			};
			class Wheel_2_source
			{
				source = "wheel";
				wheel = "Wheel_2";
			};
			class Wheel_3_source
			{
				source = "wheel";
				wheel = "Wheel_3";
			};
			class Hide_Door
			{
				displayName = "$STR_SPEX_DN_ASSETS_VEHICLES_HIDE_DOOR";
				source = "user";
				animPeriod = 1e-005;
				initPhase = 1;
			};
			class Hide_LightRed
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class Hide_LightGreen
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
      class Hide_LightCabin
      {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
			class frame_pitch
			{
				AnimPeriod = 1;
				source = "user";
				InitPhase = 0;
			};
      class cargoFFV_Dummy_door
      {
        source = "door";
        animPeriod = 1;
        initPhase = 0;
      };
      //Cargo Animations
      class cargo_rotate_1
      {
        AnimPeriod = 1.9;
        source = "user";
        InitPhase = 0;
      };
      class cargo_rotate_2: cargo_rotate_1 {};
      class cargo_rotate_3: cargo_rotate_1 {};
      class cargo_rotate_4: cargo_rotate_1 {};
      class cargo_rotate_5: cargo_rotate_1 {};
      class cargo_rotate_6: cargo_rotate_1 {};
      class cargo_rotate_7: cargo_rotate_1 {};
      class cargo_rotate_8: cargo_rotate_1 {};
      class cargo_rotate_9: cargo_rotate_1 {};
      class cargo_rotate_10: cargo_rotate_1 {};
      class cargo_rotate_11: cargo_rotate_1 {};
      class cargo_rotate_12: cargo_rotate_1 {};
      class cargo_rotate_13: cargo_rotate_1 {};
      class cargo_rotate_14: cargo_rotate_1 {};
      class cargo_rotate_15: cargo_rotate_1 {};
      class cargo_rotate_16: cargo_rotate_1 {};
      class cargo_rotate_17: cargo_rotate_1 {};
      class cargo_rotate_18: cargo_rotate_1 {};
      class cargo_rotate_19: cargo_rotate_1 {};
      class cargo_rotate_20: cargo_rotate_1 {};
      class cargo_rotate_21: cargo_rotate_1 {};
      class cargo_rotate_22: cargo_rotate_1 {};
      class cargo_rotate_23: cargo_rotate_1 {};
      class cargo_rotate_24: cargo_rotate_1 {};
      class cargo_rotate_25: cargo_rotate_1 {};
      class cargo_rotate_26: cargo_rotate_1 {};
      class cargo_rotate_27: cargo_rotate_1 {};
	  
		};
		class Attributes
		{
			class SPEX_C47_Hide_Door
			{
				displayName = "$STR_SPEX_DN_ASSETS_VEHICLES_HIDE_DOOR";
				property = "Hide_Door";
				control = "CheckboxNumber";
				expression = "_this animate ['Hide_Door',_value,true]";
				defaultValue = "1";
			};
			/* class SPE_PlaneJumpOnlyInOrder
			{
				displayName = "$STR_SPE_DN_ASSETS_VEHICLES_JUMP_SYSTEM_ONLY_IN_ORDER";
				tooltip = "$STR_SPE_TOOLTIP_ASSETS_VEHICLES_YOU_CANNOT_LEAVE_THE_PLANE_IF_YOU_RE_NOT_THE_FIRST_IN_THE_QUEUE";
				property = "SPE_PlaneJumpOnlyInOrder";
				control = "Checkbox";
				expression = "_this setVariable ['SPE_PlaneJumpOnlyInOrder',_value,true]";
				defaultValue = "false";
			};
			class SPE_PlaneJumpOnlyFromTheDoor
			{
				displayName = "$STR_SPE_DN_ASSETS_VEHICLES_JUMP_SYSTEM_ONLY_IN_ORDER";
				tooltip = "$STR_SPE_TOOLTIP_ASSETS_VEHICLES_YOU_CANNOT_LEAVE_THE_PLANE_IF_YOU_RE_NOT_AT_THE_DOOR";
				property = "SPE_PlaneJumpOnlyFromTheDoor";
				control = "Checkbox";
				expression = "_this setVariable ['SPE_PlaneJumpOnlyFromTheDoor',_value,true]";
				defaultValue = "false";
			}; */
			class SPE_UnitNumber
			{
				control = "EditShort";
				defaultValue = "-1";
				displayName = "$STR_SPE_Assets_Vehicles_displayName_Serial_Number";
				tooltip = "$STR_SPE_Assets_Vehicles_tooltip_Leave_blank_to_disable_4";
				expression = "[_this,_value,'SPE_Numbers'] spawn SPE_Fnc_System_Vehicle_Numbers_update;";
				property = "SPE_Unit_Number_attribute";
				typeName = "STRING";
				validate = "STRING";
			};
			class SPE_UnitNumber2: SPE_UnitNumber
			{
				defaultValue = "-1";
				displayName = "$STR_SPE_Assets_Vehicles_displayName_Aircraft_Identifier";
				tooltip = "$STR_SPE_Assets_Vehicles_tooltip_Leave_blank_to_disable_5";
				expression = "[_this,_value,'SPE_Letters'] spawn SPE_Fnc_System_Vehicle_Numbers_update;";
				property = "SPE_Unit_Number2_attribute";
			};
		};
		class textureSources
		{
			class standard
			{
				displayName = "$STR_SPEX_DN_ASSETS_VEHICLES_USAAF_1945";
				
				textures[] = {"WW2\SPEX\addons\Assets_t_Vehicles_Planes_t\C47\DC3_Body_01_co.paa","WW2\SPEX\addons\Assets_t_Vehicles_Planes_t\C47\DC3_Body_02_co.paa"};
				factions[] = {"SPE_US_ARMY"};
				materials[] = {"WW2\SPEX\addons\Assets_r_Vehicles_Planes_r\C47\DC3_Body_01.rvmat","WW2\SPEX\addons\Assets_r_Vehicles_Planes_r\C47\DC3_Body_02.rvmat"};
				class SPE_OverrideDecals
				{
					class Numbers
					{
						SPE_Decals = "SPE_US_Decals_Air_Numbers_White";
						SPE_Sections[] = {"num_1","num_2","num_3","num_4","num_5","num_6"};
					};
					class Letters
					{
						SPE_Decals = "SPE_US_Decals_Air_Letters_White";
						SPE_Sections[] = {"letter_1","letter_2","letter_3"};
					};
				};
			};
			class standard_1942
			{
				displayName = "$STR_SPEX_DN_ASSETS_VEHICLES_USAAF_1942";
				
				textures[] = {"WW2\SPEX\addons\Assets_t_Vehicles_Planes_t\C47\DC3_Body_01_42_co.paa","WW2\SPEX\addons\Assets_t_Vehicles_Planes_t\C47\DC3_Body_02_42_co.paa"};
				factions[] = {"SPE_US_ARMY"};
				class SPE_OverrideDecals
				{
					class Numbers
					{
						SPE_Decals = "SPE_US_Decals_Air_Numbers_White";
						SPE_Sections[] = {"num_1","num_2","num_3","num_4","num_5","num_6"};
					};
					class Letters
					{
						SPE_Decals = "SPE_US_Decals_Air_Letters_White";
						SPE_Sections[] = {"letter_1","letter_2","letter_3"};
					};
				};
			};
			class standard_1943
			{
				displayName = "$STR_SPEX_DN_ASSETS_VEHICLES_USAAF_1943";
				
				textures[] = {"WW2\SPEX\addons\Assets_t_Vehicles_Planes_t\C47\DC3_Body_01_43_co.paa","WW2\SPEX\addons\Assets_t_Vehicles_Planes_t\C47\DC3_Body_02_43_co.paa"};
				factions[] = {"SPE_US_ARMY"};
				materials[] = {"WW2\SPEX\addons\Assets_r_Vehicles_Planes_r\C47\DC3_Body_01.rvmat","WW2\SPEX\addons\Assets_r_Vehicles_Planes_r\C47\DC3_Body_02.rvmat"};
				class SPE_OverrideDecals
				{
					class Numbers
					{
						SPE_Decals = "SPE_US_Decals_Air_Numbers_White";
						SPE_Sections[] = {"num_1","num_2","num_3","num_4","num_5","num_6"};
					};
					class Letters
					{
						SPE_Decals = "SPE_US_Decals_Air_Letters_White";
						SPE_Sections[] = {"letter_1","letter_2","letter_3"};
					};
				};
			};
			class bob
			{
				displayName = "$STR_SPEX_DN_ASSETS_VEHICLES_USAAF_1944";
				
				textures[] = {"WW2\SPEX\addons\Assets_t_Vehicles_Planes_t\C47\DC3_Body_01_Bob_co.paa","WW2\SPEX\addons\Assets_t_Vehicles_Planes_t\C47\DC3_Body_02_Bob_co.paa"};
				factions[] = {"SPE_US_ARMY"};
				materials[] = {"WW2\SPEX\addons\Assets_r_Vehicles_Planes_r\C47\DC3_Body_01.rvmat","WW2\SPEX\addons\Assets_r_Vehicles_Planes_r\C47\DC3_Body_02.rvmat"};
				class SPE_OverrideDecals
				{
					class Numbers
					{
						SPE_Decals = "SPE_US_Decals_Air_Numbers_White";
						SPE_Sections[] = {"num_1","num_2","num_3","num_4","num_5","num_6"};
					};
					class Letters
					{
						SPE_Decals = "SPE_US_Decals_Air_Letters_White";
						SPE_Sections[] = {"letter_1","letter_2","letter_3"};
					};
				};
			};
			class invasion
			{
				displayName = "$STR_SPEX_DN_ASSETS_VEHICLES_USAAF_1944";
				
				textures[] = {"WW2\SPEX\addons\Assets_t_Vehicles_Planes_t\C47\DC3_Body_01_Inv_co.paa","WW2\SPEX\addons\Assets_t_Vehicles_Planes_t\C47\DC3_Body_02_Inv_co.paa"};
				factions[] = {"SPE_US_ARMY"};
				materials[] = {"WW2\SPEX\addons\Assets_r_Vehicles_Planes_r\C47\DC3_Body_01.rvmat","WW2\SPEX\addons\Assets_r_Vehicles_Planes_r\C47\DC3_Body_02.rvmat"};
				class SPE_OverrideDecals
				{
					class Numbers
					{
						SPE_Decals = "SPE_US_Decals_Air_Numbers_White";
						SPE_Sections[] = {"num_1","num_2","num_3","num_4","num_5","num_6"};
					};
					class Letters
					{
						SPE_Decals = "SPE_US_Decals_Air_Letters_White";
						SPE_Sections[] = {"letter_1","letter_2","letter_3"};
					};
				};
			};
			class invasion_half
			{
				displayName = "$STR_SPEX_DN_ASSETS_VEHICLES_USAAF_1944_HALF";
				
				textures[] = {"WW2\SPEX\addons\Assets_t_Vehicles_Planes_t\C47\DC3_Body_01_Inv_half_co.paa","WW2\SPEX\addons\Assets_t_Vehicles_Planes_t\C47\DC3_Body_02_Inv_half_co.paa"};
				factions[] = {"SPE_US_ARMY"};
				materials[] = {"WW2\SPEX\addons\Assets_r_Vehicles_Planes_r\C47\DC3_Body_01.rvmat","WW2\SPEX\addons\Assets_r_Vehicles_Planes_r\C47\DC3_Body_02.rvmat"};
				class SPE_OverrideDecals
				{
					class Numbers
					{
						SPE_Decals = "SPE_US_Decals_Air_Numbers_White";
						SPE_Sections[] = {"num_1","num_2","num_3","num_4","num_5","num_6"};
					};
					class Letters
					{
						SPE_Decals = "SPE_US_Decals_Air_Letters_White";
						SPE_Sections[] = {"letter_1","letter_2","letter_3"};
					};
				};
			};
			class bare
			{
				displayName = "$STR_SPE_DN_ASSETS_VEHICLES_P47_BARE";
				
				textures[] = {"WW2\SPEX\addons\Assets_t_Vehicles_Planes_t\C47\DC3_Body_01_bare_co.paa","WW2\SPEX\addons\Assets_t_Vehicles_Planes_t\C47\DC3_Body_02_bare_co.paa"};
				factions[] = {"SPE_US_ARMY"};
				materials[] = {"WW2\SPEX\addons\Assets_r_Vehicles_Planes_r\C47\DC3_Body_01_bare.rvmat","WW2\SPEX\addons\Assets_r_Vehicles_Planes_r\C47\DC3_Body_02_bare.rvmat"};
				class SPE_OverrideDecals
				{
					class Numbers
					{
						SPE_Decals = "SPE_US_Decals_Air_Numbers_White";
						SPE_Sections[] = {"num_1","num_2","num_3","num_4","num_5","num_6"};
					};
					class Letters
					{
						SPE_Decals = "SPE_US_Decals_Air_Letters_White";
						SPE_Sections[] = {"letter_1","letter_2","letter_3"};
					};
				};
			};
			class bare_US
			{
				displayName = "$STR_SPE_DN_ASSETS_VEHICLES_P47_BARE";
				
				textures[] = {"WW2\SPEX\addons\Assets_t_Vehicles_Planes_t\C47\DC3_Body_01_bare_us_co.paa","WW2\SPEX\addons\Assets_t_Vehicles_Planes_t\C47\DC3_Body_02_bare_us_co.paa"};
				factions[] = {"SPE_US_ARMY"};
				materials[] = {"WW2\SPEX\addons\Assets_r_Vehicles_Planes_r\C47\DC3_Body_01_bare_us.rvmat","WW2\SPEX\addons\Assets_r_Vehicles_Planes_r\C47\DC3_Body_02_bare_us.rvmat"};
				class SPE_OverrideDecals
				{
					class Numbers
					{
						SPE_Decals = "SPE_US_Decals_Air_Numbers_White";
						SPE_Sections[] = {"num_1","num_2","num_3","num_4","num_5","num_6"};
					};
					class Letters
					{
						SPE_Decals = "SPE_US_Decals_Air_Letters_White";
						SPE_Sections[] = {"letter_1","letter_2","letter_3"};
					};
				};
			};
			class raf
			{
				displayName = "$STR_SPEX_DN_ASSETS_VEHICLES_RAF_OD9";
				
				textures[] = {"WW2\SPEX\addons\Assets_t_Vehicles_Planes_t\C47\DC3_Body_01_Raf_co.paa","WW2\SPEX\addons\Assets_t_Vehicles_Planes_t\C47\DC3_Body_02_Raf_co.paa"};
				factions[] = {};
				materials[] = {"WW2\SPEX\addons\Assets_r_Vehicles_Planes_r\C47\DC3_Body_01.rvmat","WW2\SPEX\addons\Assets_r_Vehicles_Planes_r\C47\DC3_Body_02.rvmat"};
				class SPE_OverrideDecals
				{
					class Numbers
					{
						SPE_Decals = "SPE_US_Decals_Air_Numbers_White";
						SPE_Sections[] = {"num_1","num_2","num_3","num_4","num_5","num_6"};
					};
					class Letters
					{
						SPE_Decals = "SPE_US_Decals_Air_Letters_White";
						SPE_Sections[] = {"letter_1","letter_2","letter_3"};
					};
				};
			};
			class raf_invasion
			{
				displayName = "$STR_SPEX_DN_ASSETS_VEHICLES_RAF_1944";
				
				textures[] = {"WW2\SPEX\addons\Assets_t_Vehicles_Planes_t\C47\DC3_Body_01_RAF_Inv_co.paa","WW2\SPEX\addons\Assets_t_Vehicles_Planes_t\C47\DC3_Body_02_RAF_Inv_co.paa"};
				factions[] = {};
				materials[] = {"WW2\SPEX\addons\Assets_r_Vehicles_Planes_r\C47\DC3_Body_01.rvmat","WW2\SPEX\addons\Assets_r_Vehicles_Planes_r\C47\DC3_Body_02.rvmat"};
				class SPE_OverrideDecals
				{
					class Numbers
					{
						SPE_Decals = "SPE_US_Decals_Air_Numbers_White";
						SPE_Sections[] = {"num_1","num_2","num_3","num_4","num_5","num_6"};
					};
					class Letters
					{
						SPE_Decals = "SPE_US_Decals_Air_Letters_White";
						SPE_Sections[] = {"letter_1","letter_2","letter_3"};
					};
				};
			};
			class raf_camo
			{
				displayName = "$STR_SPEX_DN_ASSETS_VEHICLES_RAF";
				
				textures[] = {"WW2\SPEX\addons\Assets_t_Vehicles_Planes_t\C47\DC3_Body_01_RAF_camo_co.paa","WW2\SPEX\addons\Assets_t_Vehicles_Planes_t\C47\DC3_Body_02_RAF_camo_co.paa"};
				factions[] = {};
				materials[] = {"WW2\SPEX\addons\Assets_r_Vehicles_Planes_r\C47\DC3_Body_01.rvmat","WW2\SPEX\addons\Assets_r_Vehicles_Planes_r\C47\DC3_Body_02.rvmat"};
				class SPE_OverrideDecals
				{
					class Numbers
					{
						SPE_Decals = "SPE_US_Decals_Air_Numbers_White";
						SPE_Sections[] = {"num_1","num_2","num_3","num_4","num_5","num_6"};
					};
					class Letters
					{
						SPE_Decals = "SPE_US_Decals_Air_Letters_White";
						SPE_Sections[] = {"letter_1","letter_2","letter_3"};
					};
				};
			};
			class raf_camo_invasion
			{
				displayName = "$STR_SPEX_DN_ASSETS_VEHICLES_RAF_1944";
				
				textures[] = {"WW2\SPEX\addons\Assets_t_Vehicles_Planes_t\C47\DC3_Body_01_RAF_camo_Inv_co.paa","WW2\SPEX\addons\Assets_t_Vehicles_Planes_t\C47\DC3_Body_02_RAF_camo_Inv_co.paa"};
				factions[] = {};
				materials[] = {"WW2\SPEX\addons\Assets_r_Vehicles_Planes_r\C47\DC3_Body_01.rvmat","WW2\SPEX\addons\Assets_r_Vehicles_Planes_r\C47\DC3_Body_02.rvmat"};
				class SPE_OverrideDecals
				{
					class Numbers
					{
						SPE_Decals = "SPE_US_Decals_Air_Numbers_White";
						SPE_Sections[] = {"num_1","num_2","num_3","num_4","num_5","num_6"};
					};
					class Letters
					{
						SPE_Decals = "SPE_US_Decals_Air_Letters_White";
						SPE_Sections[] = {"letter_1","letter_2","letter_3"};
					};
				};
			};
			class raf_pto
			{
				displayName = "$STR_SPEX_DN_ASSETS_VEHICLES_RAF_PTO_OD9";
				
				textures[] = {"WW2\SPEX\addons\Assets_t_Vehicles_Planes_t\C47\DC3_Body_01_RAF_pto_co.paa","WW2\SPEX\addons\Assets_t_Vehicles_Planes_t\C47\DC3_Body_02_RAF_pto_co.paa"};
				factions[] = {};
				materials[] = {"WW2\SPEX\addons\Assets_r_Vehicles_Planes_r\C47\DC3_Body_01.rvmat","WW2\SPEX\addons\Assets_r_Vehicles_Planes_r\C47\DC3_Body_02.rvmat"};
				class SPE_OverrideDecals
				{
					class Numbers
					{
						SPE_Decals = "SPE_US_Decals_Air_Numbers_White";
						SPE_Sections[] = {"num_1","num_2","num_3","num_4","num_5","num_6"};
					};
					class Letters
					{
						SPE_Decals = "SPE_US_Decals_Air_Letters_White";
						SPE_Sections[] = {"letter_1","letter_2","letter_3"};
					};
				};
			};
			class raf_pto_camo
			{
				displayName = "$STR_SPEX_DN_ASSETS_VEHICLES_RAF_PTO";
				
				textures[] = {"WW2\SPEX\addons\Assets_t_Vehicles_Planes_t\C47\DC3_Body_01_RAF_pto_camo_co.paa","WW2\SPEX\addons\Assets_t_Vehicles_Planes_t\C47\DC3_Body_02_RAF_pto_camo_co.paa"};
				factions[] = {};
				materials[] = {"WW2\SPEX\addons\Assets_r_Vehicles_Planes_r\C47\DC3_Body_01.rvmat","WW2\SPEX\addons\Assets_r_Vehicles_Planes_r\C47\DC3_Body_02.rvmat"};
				class SPE_OverrideDecals
				{
					class Numbers
					{
						SPE_Decals = "SPE_US_Decals_Air_Numbers_White";
						SPE_Sections[] = {"num_1","num_2","num_3","num_4","num_5","num_6"};
					};
					class Letters
					{
						SPE_Decals = "SPE_US_Decals_Air_Letters_White";
						SPE_Sections[] = {"letter_1","letter_2","letter_3"};
					};
				};
			};
		};
		textureList[] = {};
		class Exhausts
		{
			class Exhaust_left
			{
				position = "pos_Exhausts_start_left";
				direction = "pos_Exhausts_end_left";
				effect = "ExhaustsEffectVTOL1HP";
				engineIndex = 0;
			};
			class Exhaust_right
			{
				position = "pos_Exhausts_start_right";
				direction = "pos_Exhausts_end_right";
				effect = "ExhaustsEffectVTOL1HP";
				engineIndex = 1;
			};
		};
		class WingVortices
		{
			class WingTipLeft
			{
				effectName = "WingVortices";
				position = "pos_vapour_wintip_left";
			};
			class WingTipRight
			{
				effectName = "WingVortices";
				position = "pos_vapour_wintip_right";
			};
			class BodyLeft
			{
				effectName = "BodyVortices";
				position = "pos_vapour_body_left";
			};
			class BodyRight
			{
				effectName = "BodyVortices";
				position = "pos_vapour_body_right";
			};
		};
	};
	/* class SPEX_C47_RAF: SPEX_C47_Skytrain
	{
		displayName = "$STR_DN_SPEX_C47_Dakota";
		
    scope = 2;
		faction = "SPE_UK_ARMY";
		hiddenSelectionsTextures[] = {"WW2\SPEX\addons\Assets_t_Vehicles_Planes_t\C47\DC3_Body_01_Raf_co.paa","WW2\SPEX\addons\Assets_t_Vehicles_Planes_t\C47\DC3_Body_02_Raf_co.paa"};
	}; */

	class SPE_PlaneWreck_base;
	class SPEX_C47_Skytrain_wreck: SPE_PlaneWreck_base
	{
		
		scope = 2;
		model = "\WW2\SPEX\addons\Assets_m_Vehicles_Planes_m\SPEX_C47_wreck.p3d";
		armor = 200;
		displayName = "$STR_SPE_DN_ASSETS_VEHICLES_C_47_WRECK";
		mapSize = 10;
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"WW2\SPEX\addons\Assets_t_Vehicles_Planes_t\C47\DC3_Body_01_co.paa","WW2\SPEX\addons\Assets_t_Vehicles_Planes_t\C47\DC3_Body_02_co.paa"};
		class textureSources
		{
			class standard
			{
				displayName = "$STR_SPE_DN_ASSETS_VEHICLES_US_AIR_FORCE";
				
				textures[] = {"WW2\SPEX\addons\Assets_t_Vehicles_Planes_t\C47\DC3_Body_01_co.paa","WW2\SPEX\addons\Assets_t_Vehicles_Planes_t\C47\DC3_Body_02_co.paa"};
				factions[] = {"SPE_US_ARMY"};
			};
			class snafu
			{
				displayName = "$STR_SPE_DN_ASSETS_VEHICLES_SNAFU_SPECIAL";
				
				textures[] = {"WW2\SPEX\addons\Assets_t_Vehicles_Planes_t\C47\DC3_Body_01_Snafu_co.paa","WW2\SPEX\addons\Assets_t_Vehicles_Planes_t\C47\DC3_Body_02_co.paa"};
				factions[] = {"SPE_US_ARMY"};
			};
			class bob
			{
				displayName = "$STR_SPE_DN_ASSETS_VEHICLES_D_DAY_506TH_PIR";
				
				textures[] = {"WW2\SPEX\addons\Assets_t_Vehicles_Planes_t\C47\DC3_Body_01_Bob_co.paa","WW2\SPEX\addons\Assets_t_Vehicles_Planes_t\C47\DC3_Body_02_co.paa"};
				factions[] = {"SPE_US_ARMY"};
			};
			class raf
			{
				displayName = "$STR_SPE_DN_ASSETS_VEHICLES_ROYAL_AIR_FORCE";
				
				textures[] = {"WW2\SPEX\addons\Assets_t_Vehicles_Planes_t\C47\DC3_Body_01_Raf_co.paa","WW2\SPEX\addons\Assets_t_Vehicles_Planes_t\C47\DC3_Body_02_Raf_co.paa"};
				factions[] = {"SPE_RAF"};
			};
		};
	};
};
