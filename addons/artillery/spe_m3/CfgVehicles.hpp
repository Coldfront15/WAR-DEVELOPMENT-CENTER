class CfgVehicles {
    class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class StaticCannon: StaticWeapon
	{
	};
	class SPE_StaticCannon_base: StaticCannon
	{
		class ViewOptics;
		class HitPoints
		{
			class HitBody;
			class HitLWheel;
			class HitRWheel;
			class HitTurret;
			class HitGun;
			class HitEngine;
			class HitHull;
		};
		class AnimationSources;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class OpticsIn
				{
					class Wide;
//					class Narrow;
				};
			};
			class CommanderOptics;
			class CargoTurret_01;
			class CargoTurret_02;
			class CargoTurret_03;
		};
        class ACE_Actions;
	};
    class SPE_105mm_M3_base : SPE_StaticCannon_base {
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class OpticsIn: OpticsIn {
					class Wide: Wide {};
					class Narrow: Wide {};
                };
            };
        };
        class AnimationSources: AnimationSources 
        {
            class recoil_source: recoil_source {};
        };
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions;
        };
    };
    class SPE_105mm_M3: SPE_105mm_M3_base {
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class OpticsIn: OpticsIn {
                    class Wide: Wide {};
                    class Narrow: Narrow {};
                };
            };
        };
        class AnimationSources: AnimationSources 
        {
            class recoil_source: recoil_source {};
        };
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions;
        };
    };
    
    class SPE_105mm_M3_WDC: SPE_105mm_M3_base {
        artilleryScanner = 0;                    // turn off artillery computer
        ace_artillerytables_showRangetable = 1;  // "fix" rangetables not showing up
        ace_artillerytables_showGunLaying = 1;   // "fix" rangetables not showing up
        author = "Spearhead/Coldfront15/WDC";
        scope = 2;
        displayName = "105-mm Light Howitzer, M3";
        side = 2;
		faction = "SPE_US_ARMY";
		crew = "SPE_US_Guncrew";
		typicalCargo[] = {"SPE_US_Guncrew","SPE_US_Guncrew","SPE_US_Guncrew"};
        EPEImpulseDamageCoef = 5;
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {"wdc_M3_WEAPON"};
                magazines[] = {};
                minTurn = -22.5;
				maxTurn = 22.5;
				minElev = -3;
				maxElev = 85; //30
				elevationMode = 1;
				initCamElev = 0;
				minCamElev = -5;
				maxCamElev = 85;
				initElev = 0;
				usePiP = 2;
				animationSourceCamElev = "camElev";
				cameraDir = "look";
				turretInfoType = "SPE_M61_Gunner_Artillery_Optic";
				memoryPointGunnerOutOptics = "artilleryView";
				memoryPointGunnerOptics = "artilleryView";
                soundServo[] = {QPATHTOF(spe_m3\sounds\wheels.ogg), 1, 1, 20};
                soundServoVertical[] = {QPATHTOF(spe_m3\sounds\metalsqueal.ogg), 5, 1, 35};
                class OpticsIn: OpticsIn
				{
					class Wide: Wide
					{
						camPos = "gunnerview";
						camDir = "gunnerview_dir";
						SPE_DefaultOptic = 0;
					};
					class Narrow: Narrow
					{
						camPos = "artilleryView";
						camDir = "look";
						SPE_DefaultOptic = 1;
					};
				};
            };
        };
        htMin = 1;
        htMax = 480;
        afMax = 0;
        mfMax = 0;
        mFact = 1;
        tBody = 100;

        ace_cargo_canLoad = 0;
        ace_dragging_canCarry = 0;
        ace_dragging_canDrag = 1;
        ace_dragging_dragPosition[] = {0, 1.2, 0};
        ace_dragging_dragDirection = 0;
        ace_dragging_ignoreWeight = 1;

        class AnimationSources: AnimationSources 
        {
			class recoil_source: recoil_source
			{   
                source = "reload";
				weapon = "wdc_M3_WEAPON";
			};
			class muzzle_rot_cannon: muzzle_rot_cannon
			{
				source = "user";
                initPhase = 0;
                animPeriod = 1;
			};
			class SPE_M3_105mm_reload_weapon_state: SPE_M3_105mm_reload_weapon_state
			{
				source = "user";
                initPhase = 0;
                animPeriod = 1;
                sound = "close";
			};
			class SPE_M3_105mm_reload_magazine_state: SPE_M3_105mm_reload_weapon_state
			{
				source = "user";
                initPhase = 0;
                animPeriod = 1;
			};
			class SPE_M3_105mm_count_magazine_state: SPE_M3_105mm_reload_weapon_state
			{
				source = "user";
                initPhase = 0;
                animPeriod = 1;
			};
		};
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                selection = "interact";
            };

            class wdc_OpenBreech {
                selection = "nabojnicestart";
                distance = 1.5;
                condition = QUOTE([ARR_1(_target)] call FUNC(canOpenBreech));
                showDisabled = 0;
                displayName = CSTRING(open_breech);
                statement = QUOTE([ARR_1(_target)] call FUNC(openBreech));
            };

            class wdc_CloseBreech {
                selection = "nabojnicestart";
                distance = 1.5;
                condition = QUOTE([ARR_1(_target)] call FUNC(canCloseBreech));
                showDisabled = 0;
                displayName = CSTRING(close_breech);
                statement = QUOTE([ARR_1(_target)] call FUNC(closeBreech));
            };

            class wdc_Load {
                displayName = CSTRING(load);
                distance = 1.5;
                showDisabled=0;
				exceptions[]={};
				priority=5;
                selection = "gun_start";
                icon = "x\tbd_mortars\addons\main\data\load.paa";

                class wdc_LoadHE {
                    displayName = CSTRING(HE);
                    class wdc_LoadHECh1 {         
                        displayName = "$STR_WDC_ARTILLERY_105mm_HE_CHARGE_1";      
                        condition = QUOTE([ARR_2(_target,QUOTE(QUOTE(wdc_artillery_SPE_M3_M1_HE_CHARGE_1)))] call FUNC(canLoad));
                        statement = QUOTE([ARR_3(_target,QUOTE(QUOTE(wdc_artillery_SPE_M3_M1_HE_CHARGE_1)),0)] call FUNC(load));
                        showDisabled = 0;
                        exceptions[] = {};
                    };

                    class wdc_LoadHECh2 {         
                        displayName = "$STR_WDC_ARTILLERY_105mm_HE_CHARGE_2";      
                        condition = QUOTE([ARR_2(_target,QUOTE(QUOTE(wdc_artillery_SPE_M3_M1_HE_CHARGE_2)))] call FUNC(canLoad));
                        statement = QUOTE([ARR_3(_target,QUOTE(QUOTE(wdc_artillery_SPE_M3_M1_HE_CHARGE_2)),0)] call FUNC(load));
                        showDisabled = 0;
                        exceptions[] = {};
                    };

                    class wdc_LoadHECh3 {         
                        displayName = "$STR_WDC_ARTILLERY_105mm_HE_CHARGE_3";      
                        condition = QUOTE([ARR_2(_target,QUOTE(QUOTE(wdc_artillery_SPE_M3_M1_HE_CHARGE_3)))] call FUNC(canLoad));
                        statement = QUOTE([ARR_3(_target,QUOTE(QUOTE(wdc_artillery_SPE_M3_M1_HE_CHARGE_3)),0)] call FUNC(load));
                        showDisabled = 0;
                        exceptions[] = {};
                    };

                    class wdc_LoadHECh4 {         
                        displayName = "$STR_WDC_ARTILLERY_105mm_HE_CHARGE_4";      
                        condition = QUOTE([ARR_2(_target,QUOTE(QUOTE(wdc_artillery_SPE_M3_M1_HE_CHARGE_4)))] call FUNC(canLoad));
                        statement = QUOTE([ARR_3(_target,QUOTE(QUOTE(wdc_artillery_SPE_M3_M1_HE_CHARGE_4)),0)] call FUNC(load));
                        showDisabled = 0;
                        exceptions[] = {};
                    };

                    class wdc_LoadHECh5 {         
                        displayName = "$STR_WDC_ARTILLERY_105mm_HE_CHARGE_5";      
                        condition = QUOTE([ARR_2(_target,QUOTE(QUOTE(wdc_artillery_SPE_M3_M1_HE_CHARGE_5)))] call FUNC(canLoad));
                        statement = QUOTE([ARR_3(_target,QUOTE(QUOTE(wdc_artillery_SPE_M3_M1_HE_CHARGE_5)),0)] call FUNC(load));
                        showDisabled = 0;
                        exceptions[] = {};
                    };
                };

                class wdc_LoadHEVT {
                    displayName = CSTRING(HE_VT);
                    class wdc_LoadHEVTCh1 {         
                        displayName = "$STR_WDC_ARTILLERY_105mm_HE_VT_CHARGE_1";      
                        condition = QUOTE([ARR_2(_target,QUOTE(QUOTE(wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_1)))] call FUNC(canLoad));
                        statement = QUOTE([ARR_3(_target,QUOTE(QUOTE(wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_1)),0)] call FUNC(load));
                        showDisabled = 0;
                        exceptions[] = {};
                    };

                    class wdc_LoadHEVTCh2 {         
                        displayName = "$STR_WDC_ARTILLERY_105mm_HE_VT_CHARGE_2";      
                        condition = QUOTE([ARR_2(_target,QUOTE(QUOTE(wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_2)))] call FUNC(canLoad));
                        statement = QUOTE([ARR_3(_target,QUOTE(QUOTE(wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_2)),0)] call FUNC(load));
                        showDisabled = 0;
                        exceptions[] = {};
                    };

                    class wdc_LoadHEVTCh3 {         
                        displayName = "$STR_WDC_ARTILLERY_105mm_HE_VT_CHARGE_3";      
                        condition = QUOTE([ARR_2(_target,QUOTE(QUOTE(wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_3)))] call FUNC(canLoad));
                        statement = QUOTE([ARR_3(_target,QUOTE(QUOTE(wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_3)),0)] call FUNC(load));
                        showDisabled = 0;
                        exceptions[] = {};
                    };

                    class wdc_LoadHEVTCh4 {         
                        displayName = "$STR_WDC_ARTILLERY_105mm_HE_VT_CHARGE_4";      
                        condition = QUOTE([ARR_2(_target,QUOTE(QUOTE(wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_4)))] call FUNC(canLoad));
                        statement = QUOTE([ARR_3(_target,QUOTE(QUOTE(wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_4)),0)] call FUNC(load));
                        showDisabled = 0;
                        exceptions[] = {};
                    };

                    class wdc_LoadHEVTCh5 {         
                        displayName = "$STR_WDC_ARTILLERY_105mm_HE_VT_CHARGE_5";      
                        condition = QUOTE([ARR_2(_target,QUOTE(QUOTE(wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_5)))] call FUNC(canLoad));
                        statement = QUOTE([ARR_3(_target,QUOTE(QUOTE(wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_5)),0)] call FUNC(load));
                        showDisabled = 0;
                        exceptions[] = {};
                    };
                };

                class wdc_LoadHEAT {
                    displayName = CSTRING(HEAT);
                    class wdc_LoadHEATCh1 {         
                        displayName = "$STR_WDC_ARTILLERY_105mm_HEAT_SHORT";      
                        condition = QUOTE([ARR_2(_target,QUOTE(QUOTE(wdc_artillery_SPE_M3_M67_HEAT_CHARGE_5)))] call FUNC(canLoad));
                        statement = QUOTE([ARR_3(_target,QUOTE(QUOTE(wdc_artillery_SPE_M3_M67_HEAT_CHARGE_5)),0)] call FUNC(load));
                        showDisabled = 0;
                        exceptions[] = {};
                    };
                };

                class wdc_LoadSMOKECh6 {
                    displayName = CSTRING(WP);
                    class wdc_LoadSMOKECh1 {         
                        displayName = "$STR_WDC_ARTILLERY_105mm_WP_CHARGE_1";      
                        condition = QUOTE([ARR_2(_target,QUOTE(QUOTE(wdc_artillery_SPE_M3_M60_WP_CHARGE_1)))] call FUNC(canLoad));
                        statement = QUOTE([ARR_3(_target,QUOTE(QUOTE(wdc_artillery_SPE_M3_M60_WP_CHARGE_1)),0)] call FUNC(load));
                        showDisabled = 0;
                        exceptions[] = {};
                    };

                    class wdc_LoadSMOKECh2 {         
                        displayName = "$STR_WDC_ARTILLERY_105mm_WP_CHARGE_2";      
                        condition = QUOTE([ARR_2(_target,QUOTE(QUOTE(wdc_artillery_SPE_M3_M60_WP_CHARGE_2)))] call FUNC(canLoad));
                        statement = QUOTE([ARR_3(_target,QUOTE(QUOTE(wdc_artillery_SPE_M3_M60_WP_CHARGE_2)),0)] call FUNC(load));
                        showDisabled = 0;
                        exceptions[] = {};
                    };

                    class wdc_LoadSMOKECh3 {         
                        displayName = "$STR_WDC_ARTILLERY_105mm_WP_CHARGE_3";      
                        condition = QUOTE([ARR_2(_target,QUOTE(QUOTE(wdc_artillery_SPE_M3_M60_WP_CHARGE_3)))] call FUNC(canLoad));
                        statement = QUOTE([ARR_3(_target,QUOTE(QUOTE(wdc_artillery_SPE_M3_M60_WP_CHARGE_3)),0)] call FUNC(load));
                        showDisabled = 0;
                        exceptions[] = {};
                    };

                    class wdc_LoadSMOKECh4 {         
                        displayName = "$STR_WDC_ARTILLERY_105mm_WP_CHARGE_4";      
                        condition = QUOTE([ARR_2(_target,QUOTE(QUOTE(wdc_artillery_SPE_M3_M60_WP_CHARGE_4)))] call FUNC(canLoad));
                        statement = QUOTE([ARR_3(_target,QUOTE(QUOTE(wdc_artillery_SPE_M3_M60_WP_CHARGE_4)),0)] call FUNC(load));
                        showDisabled = 0;
                        exceptions[] = {};
                    };

                    class wdc_LoadSMOKECh5 {         
                        displayName = "$STR_WDC_ARTILLERY_105mm_WP_CHARGE_5";      
                        condition = QUOTE([ARR_2(_target,QUOTE(QUOTE(wdc_artillery_SPE_M3_M60_WP_CHARGE_5)))] call FUNC(canLoad));
                        statement = QUOTE([ARR_3(_target,QUOTE(QUOTE(wdc_artillery_SPE_M3_M60_WP_CHARGE_5)),0)] call FUNC(load));
                        showDisabled = 0;
                        exceptions[] = {};
                    };
                };
            };
/*
             
            };*/
            
            class wdc_Unload {
                selection = "gun_start";
                distance = 1.5;
                showDisabled = 0;
                displayName = CSTRING(unload);
                condition = QUOTE([ARR_1(_target)] call FUNC(canUnload));
                statement = QUOTE([ARR_2(_target,0)] call FUNC(unload));
                icon = "x\tbd_mortars\addons\main\data\unload.paa";
            };
        };
    };
    class ThingX;
    class ReammoBox_F: ThingX {
        class ACE_Actions {
            class ACE_MainActions;
        };
    };
    class NATO_Box_Base: ReammoBox_F {
        class ACE_Actions: ACE_Actions {
            /* class ACE_MainActions {}; this is inherited */
        };
    };

    class wdc_artillery_SPE_M3_M1_HE_PD_box : NATO_Box_Base {
        scope = 2;
		scopeArsenal = 2;
		author = "WDC";
        displayName = "2-Rnd 105mm HE/PD Box";
		displayNameShort = "105mm HE/PD Box";
        model = QPATHTOF(spe_m3\wdc_105_M1_HE_M54_PD\wdc_105_box_M1_HE_PD);
        editorPreview = QPATHTOF(spe_m3\wdc_105_M1_HE_M54_PD\data\HE_PD_box.jpg);
        ace_cargo_size = 0.5;
        ace_cargo_canLoad = 1;
        transportMaxWeapons = 0;
        transportMaxMagazines = 0;
        transportMaxBackpacks = 0;
        class AnimationSources {
            class cover_source {
                source = "user";  
                initPhase = 0;
                animPeriod = 2;
                sound="GenericDoorsSound";
            };
            class container_1_source {
                source = "user";  
                initPhase = 0;
                animPeriod = 1;
            };
            class container_2_source {
                source = "user";  
                initPhase = 0;
                animPeriod = 1;
            };
        };
        class ACE_Actions: ACE_Actions {
            class WDC_OpenBox {
                displayName = "Open";
                condition = QUOTE([ARR_1(_target)] call FUNC(canOpen));
                exceptions[] = {};
                statement = QUOTE([ARR_1(_target)] call FUNC(open));
                distance = 2;
                selection = "door_1_action";
            };

            class WDC_CloseBox {
                displayName = "Close";
                condition = QUOTE([ARR_1(_target)] call FUNC(canClose));
                exceptions[] = {};
                statement = QUOTE([ARR_1(_target)] call FUNC(close));
                distance = 2;
                selection = "door_1_action";
            };

            class WDC_TakeMine1 {
                displayName = "Take Tube";
                condition = QUOTE([ARR_2(_target,1)] call FUNC(canTake));
                exceptions[] = {};
                statement = QUOTE([ARR_3(_target,1,QUOTE(QUOTE(wdc_artillery_SPE_M3_M1_HE_Tube)))] call FUNC(takeMine));
                distance = 2;
                selection = "container_1_action";
            };

            class WDC_TakeMine2: WDC_TakeMine1 {
                condition = QUOTE([ARR_2(_target,2)] call FUNC(canTake));
                statement = QUOTE([ARR_3(_target,2,QUOTE(QUOTE(wdc_artillery_SPE_M3_M1_HE_Tube)))] call FUNC(takeMine));
                selection = "container_2_action";
            };

            class WDC_PutMine1 {
                displayName = "Put Tube";
                condition = QUOTE([ARR_3(_target,1,QUOTE(QUOTE(wdc_artillery_SPE_M3_M1_HE_Tube)))] call FUNC(canPut));
                exceptions[] = {};
                statement = QUOTE([ARR_3(_target,1,QUOTE(QUOTE(wdc_artillery_SPE_M3_M1_HE_Tube)))] call FUNC(putMine));
                distance = 2;
                selection = "container_1_action";
            };

            class WDC_PutMine2: WDC_PutMine1 {
                condition = QUOTE([ARR_3(_target,2,QUOTE(QUOTE(wdc_artillery_SPE_M3_M1_HE_Tube)))] call FUNC(canPut));
                statement = QUOTE([ARR_3(_target,2,QUOTE(QUOTE(wdc_artillery_SPE_M3_M1_HE_Tube)))] call FUNC(putMine));
                selection = "container_2_action";
            };
        };
    };

    class wdc_artillery_SPE_M3_M1_HE_CHARGE_1 : NATO_Box_Base {
        scope = 2;
        author = "Coldfront15";
        displayName = CSTRING(105mm_he_charge_1);
        model = QPATHTOF(spe_m3\wdc_105_M1_HE_M54_PD\wdc_105_shell_M1_HE_PD);
        editorPreview = QPATHTOF(spe_m3\data\HE_shell.jpg);
        ace_cargo_size = 0.5;
        ace_cargo_canLoad = 1;
        transportMaxWeapons = 0;
        transportMaxMagazines = 0;
        transportMaxBackpacks = 0;
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                class wdc_artillery_SPE_M3_M1_HE_CHARGE_DISASSEMBLE {
                    displayName = CSTRING(105mm_disassemble);
                    condition = "true";
                    statement = QUOTE([ARR_1(_target)] call FUNC(disassemble));
                    distance = 2;
                };
            };
        };
    };

    class wdc_artillery_SPE_M3_M1_HE_CHARGE_2 : wdc_artillery_SPE_M3_M1_HE_CHARGE_1 {
        displayName = CSTRING(105mm_he_charge_2);
    };

    class wdc_artillery_SPE_M3_M1_HE_CHARGE_3 : wdc_artillery_SPE_M3_M1_HE_CHARGE_1 {
        displayName = CSTRING(105mm_he_charge_3);
    };

    class wdc_artillery_SPE_M3_M1_HE_CHARGE_4 : wdc_artillery_SPE_M3_M1_HE_CHARGE_1 {
        displayName = CSTRING(105mm_he_charge_4);
    };

    class wdc_artillery_SPE_M3_M1_HE_CHARGE_5 : wdc_artillery_SPE_M3_M1_HE_CHARGE_1 {
        displayName = CSTRING(105mm_he_charge_5);
    };

    // M1 HE/VT

    class wdc_artillery_SPE_M3_M1_HE_VT_box : wdc_artillery_SPE_M3_M1_HE_PD_box {
        scope = 2;
		scopeArsenal = 2;
		author = "WDC";
        displayName = "2-Rnd 105mm HE/VT Box";
		displayNameShort = "105mm HE/VT Box";
        model = QPATHTOF(spe_m3\wdc_105_M1_HE_VT_T80E6\wdc_105_box_M1_HE_VT);
        editorPreview = QPATHTOF(spe_m3\wdc_105_M1_HE_VT_T80E6\data\HE_VT_box.jpg);
        ace_cargo_size = 0.5;
        ace_cargo_canLoad = 1;
        transportMaxWeapons = 0;
        transportMaxMagazines = 0;
        transportMaxBackpacks = 0;
        class ACE_Actions: ACE_Actions {

            class WDC_TakeMine1 {
                displayName = "Take Tube";
                condition = QUOTE([ARR_2(_target,1)] call FUNC(canTake));
                exceptions[] = {};
                statement = QUOTE([ARR_3(_target,1,QUOTE(QUOTE(wdc_artillery_SPE_M3_M1_HE_VT_Tube)))] call FUNC(takeMine));
                distance = 2;
                selection = "container_1_action";
            };

            class WDC_TakeMine2: WDC_TakeMine1 {
                condition = QUOTE([ARR_2(_target,2)] call FUNC(canTake));
                statement = QUOTE([ARR_3(_target,2,QUOTE(QUOTE(wdc_artillery_SPE_M3_M1_HE_VT_Tube)))] call FUNC(takeMine));
                selection = "container_2_action";
            };

            class WDC_PutMine1 {
                displayName = "Put Tube";
                condition = QUOTE([ARR_3(_target,1,QUOTE(QUOTE(wdc_artillery_SPE_M3_M1_HE_VT_Tube)))] call FUNC(canPut));
                exceptions[] = {};
                statement = QUOTE([ARR_3(_target,1,QUOTE(QUOTE(wdc_artillery_SPE_M3_M1_HE_VT_Tube)))] call FUNC(putMine));
                distance = 2;
                selection = "container_1_action";
            };

            class WDC_PutMine2: WDC_PutMine1 {
                condition = QUOTE([ARR_3(_target,2,QUOTE(QUOTE(wdc_artillery_SPE_M3_M1_HE_VT_Tube)))] call FUNC(canPut));
                statement = QUOTE([ARR_3(_target,2,QUOTE(QUOTE(wdc_artillery_SPE_M3_M1_HE_VT_Tube)))] call FUNC(putMine));
                selection = "container_2_action";
            };
        };
    };

    class wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_1 : NATO_Box_Base {
        scope = 2;
        author = "Coldfront15";
        displayName = CSTRING(105mm_he_VT_charge_1);
        model = QPATHTOF(spe_m3\wdc_105_M1_HE_VT_T80E6\wdc_105_shell_M1_HE_VT);
        editorPreview = QPATHTOF(spe_m3\data\HE_shell.jpg);
        ace_cargo_size = 0.5;
        ace_cargo_canLoad = 1;
        transportMaxWeapons = 0;
        transportMaxMagazines = 0;
        transportMaxBackpacks = 0;
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                class wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_DISASSEMBLE {
                    displayName = CSTRING(105mm_disassemble);
                    condition = "true";
                    statement = QUOTE([ARR_1(_target)] call FUNC(disassemble));
                    distance = 2;
                };
            };
        };
    };

    class wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_2 : wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_1 {
        displayName = CSTRING(105mm_he_VT_charge_2);
    };

    class wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_3 : wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_1 {
        displayName = CSTRING(105mm_he_VT_charge_3);
    };

    class wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_4 : wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_1 {
        displayName = CSTRING(105mm_he_VT_charge_4);
    };

    class wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_5 : wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_1 {
        displayName = CSTRING(105mm_he_VT_charge_5);
    };


    // M67 HEAT

    class wdc_artillery_SPE_M3_M67_HEAT_CHARGE_5 : NATO_Box_Base {
        scope = 2;
        author = "Coldfront15";
        displayName = CSTRING(105MM_heat);
        model = QPATHTOF(spe_m3\wdc_105_M67_HEAT_BD_M62\wdc_105_shell_M67_HEAT);
        editorPreview = QPATHTOF(spe_m3\data\HE_shell.jpg);
        ace_cargo_size = 0.5;
        ace_cargo_canLoad = 1;
        transportMaxWeapons = 0;
        transportMaxMagazines = 0;
        transportMaxBackpacks = 0;
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                class wdc_artillery_SPE_M3_M67_HE_CHARGE_DISASSEMBLE {
                    displayName = CSTRING(105mm_disassemble);
                    condition = "true";
                    statement = QUOTE([ARR_1(_target)] call FUNC(disassemble));
                    distance = 2;
                };
            };
        };
    };

    class wdc_artillery_SPE_M3_M67_HEAT_box : wdc_artillery_SPE_M3_M1_HE_PD_box {
        scope = 2;
		scopeArsenal = 2;
		author = "WDC";
        displayName = "2-Rnd 105mm HEAT Box";
		displayNameShort = "105mm HEAT Box";
        model = QPATHTOF(spe_m3\wdc_105_M67_HEAT_BD_M62\wdc_105_box_M67_HEAT);
        editorPreview = QPATHTOF(spe_m3\wdc_105_M67_HEAT_BD_M62\data\HEAT_box.jpg);
        ace_cargo_size = 0.5;
        ace_cargo_canLoad = 1;
        transportMaxWeapons = 0;
        transportMaxMagazines = 0;
        transportMaxBackpacks = 0;
        class ACE_Actions: ACE_Actions {

            class WDC_TakeMine1 {
                displayName = "Take Tube";
                condition = QUOTE([ARR_2(_target,1)] call FUNC(canTake));
                exceptions[] = {};
                statement = QUOTE([ARR_3(_target,1,QUOTE(QUOTE(wdc_artillery_SPE_M3_M67_HEAT_Tube)))] call FUNC(takeMine));
                distance = 2;
                selection = "container_1_action";
            };

            class WDC_TakeMine2: WDC_TakeMine1 {
                condition = QUOTE([ARR_2(_target,2)] call FUNC(canTake));
                statement = QUOTE([ARR_3(_target,2,QUOTE(QUOTE(wdc_artillery_SPE_M3_M67_HEAT_Tube)))] call FUNC(takeMine));
                selection = "container_2_action";
            };

            class WDC_PutMine1 {
                displayName = "Put Tube";
                condition = QUOTE([ARR_3(_target,1,QUOTE(QUOTE(wdc_artillery_SPE_M3_M67_HEAT_Tube)))] call FUNC(canPut));
                exceptions[] = {};
                statement = QUOTE([ARR_3(_target,1,QUOTE(QUOTE(wdc_artillery_SPE_M3_M67_HEAT_Tube)))] call FUNC(putMine));
                distance = 2;
                selection = "container_1_action";
            };

            class WDC_PutMine2: WDC_PutMine1 {
                condition = QUOTE([ARR_3(_target,2,QUOTE(QUOTE(wdc_artillery_SPE_M3_M67_HEAT_Tube)))] call FUNC(canPut));
                statement = QUOTE([ARR_3(_target,2,QUOTE(QUOTE(wdc_artillery_SPE_M3_M67_HEAT_Tube)))] call FUNC(putMine));
                selection = "container_2_action";
            };
        };
    };

    // M60 WP

    class wdc_artillery_SPE_M3_M60_WP_box : wdc_artillery_SPE_M3_M1_HE_PD_box {
        scope = 2;
		scopeArsenal = 2;
		author = "WDC";
        displayName = "2-Rnd 105mm WP Box";
		displayNameShort = "105mm WP Box";
        model = QPATHTOF(spe_m3\wdc_105_M60_WP_PD_M57\wdc_105_box_M60_WP_PD);
        editorPreview = QPATHTOF(spe_m3\wdc_105_M60_WP_PD_M57\data\WP_box.jpg);
		picture = QPATHTOF(spe_m3\data\tube.paa);
        ace_cargo_size = 0.5;
        ace_cargo_canLoad = 1;
        transportMaxWeapons = 0;
        transportMaxMagazines = 0;
        transportMaxBackpacks = 0;
        class ACE_Actions: ACE_Actions {

            class WDC_TakeMine1 {
                displayName = "Take Tube";
                condition = QUOTE([ARR_2(_target,1)] call FUNC(canTake));
                exceptions[] = {};
                statement = QUOTE([ARR_3(_target,1,QUOTE(QUOTE(wdc_artillery_SPE_M3_M60_WP_Tube)))] call FUNC(takeMine));
                distance = 2;
                selection = "container_1_action";
            };

            class WDC_TakeMine2: WDC_TakeMine1 {
                condition = QUOTE([ARR_2(_target,2)] call FUNC(canTake));
                statement = QUOTE([ARR_3(_target,2,QUOTE(QUOTE(wdc_artillery_SPE_M3_M60_WP_Tube)))] call FUNC(takeMine));
                selection = "container_2_action";
            };

            class WDC_PutMine1 {
                displayName = "Put Tube";
                condition = QUOTE([ARR_3(_target,1,QUOTE(QUOTE(wdc_artillery_SPE_M3_M60_WP_Tube)))] call FUNC(canPut));
                exceptions[] = {};
                statement = QUOTE([ARR_3(_target,1,QUOTE(QUOTE(wdc_artillery_SPE_M3_M60_WP_Tube)))] call FUNC(putMine));
                distance = 2;
                selection = "container_1_action";
            };

            class WDC_PutMine2: WDC_PutMine1 {
                condition = QUOTE([ARR_3(_target,2,QUOTE(QUOTE(wdc_artillery_SPE_M3_M60_WP_Tube)))] call FUNC(canPut));
                statement = QUOTE([ARR_3(_target,2,QUOTE(QUOTE(wdc_artillery_SPE_M3_M60_WP_Tube)))] call FUNC(putMine));
                selection = "container_2_action";
            };
        };
    };

    class wdc_artillery_SPE_M3_M60_WP_CHARGE_1 : NATO_Box_Base {
        scope = 2;
        author = "Coldfront15";
        displayName = CSTRING(105mm_WP_CHARGE_1);
        model = QPATHTOF(spe_m3\wdc_105_M60_WP_PD_M57\wdc_105_shell_M60_WP);
        editorPreview = QPATHTOF(spe_m3\data\SMK_shell.jpg);
        ace_cargo_size = 0.5;
        ace_cargo_canLoad = 1;
        transportMaxWeapons = 0;
        transportMaxMagazines = 0;
        transportMaxBackpacks = 0;
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                class wdc_artillery_SPE_M3_M1_HE_CHARGE_DISASSEMBLE {
                    displayName = CSTRING(105mm_disassemble);
                    condition = "true";
                    statement = QUOTE([ARR_1(_target)] call FUNC(disassemble));
                    distance = 2;
                };
            };
        };
    };

    class wdc_artillery_SPE_M3_M60_WP_CHARGE_2 : wdc_artillery_SPE_M3_M60_WP_CHARGE_1 {
        displayName = CSTRING(105mm_WP_charge_2);
    };

    class wdc_artillery_SPE_M3_M60_WP_CHARGE_3 : wdc_artillery_SPE_M3_M60_WP_CHARGE_1 {
        displayName = CSTRING(105mm_WP_charge_3);
    };

    class wdc_artillery_SPE_M3_M60_WP_CHARGE_4 : wdc_artillery_SPE_M3_M60_WP_CHARGE_1 {
        displayName = CSTRING(105mm_WP_charge_4);
    };

    class wdc_artillery_SPE_M3_M60_WP_CHARGE_5 : wdc_artillery_SPE_M3_M60_WP_CHARGE_1 {
        displayName = CSTRING(105mm_WP_charge_5);
    };
};
