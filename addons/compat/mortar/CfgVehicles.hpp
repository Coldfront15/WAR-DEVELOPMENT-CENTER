class CfgVehicles {
    class All {
        class EventHandlers;
    };
    class AllVehicles: All {};
    class Land: AllVehicles {};
    class LandVehicle: Land {};
    class StaticWeapon: LandVehicle {
        class ACE_Actions {
            class ACE_MainActions;
        };
    };


    // --- Mortars -----------------------------------------------------------------
    class StaticMortar: StaticWeapon {};
    class SPE_StaticMortar_base: StaticMortar {};
    class SPE_US_Mortar_base: SPE_StaticMortar_base {};
    class SPEX_M2_60: SPE_US_Mortar_base {
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                position = "";
                selection = "zamerny";
            };
        };
        class ace_csw {
            enabled = 1;
            proxyWeapon = "ace_M2_60_proxy";
            magazineLocation = "_target selectionPosition 'usti hlavne'";
            disassembleWeapon = "SPEX_M2_60_Barrel";
            disassembleTurret = "ACE_m2_60_Baseplate";
            ammoLoadTime = 1;
            ammoUnloadTime = 1;
            desiredAmmo = 1;
            allowFireOnLoad = 1;
        };
    };

    class SPE_M1_81: SPE_US_Mortar_base {
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {};
        };
        class ace_csw {
            ammoLoadTime = 1;
            ammoUnloadTime = 1;
            desiredAmmo = 1;
            allowFireOnLoad = 1;
        };
    };
    class SPE_MLE_27_31: SPE_US_Mortar_base {
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {};
        };
        class ace_csw {
            ammoLoadTime = 1;
            ammoUnloadTime = 1;
            desiredAmmo = 1;
            allowFireOnLoad = 1;
        };
    };
    class SPE_GrW278_1: SPE_MLE_27_31 {
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {};
        };
        class ace_csw {
            ammoLoadTime = 1;
            ammoUnloadTime = 1;
            desiredAmmo = 1;
            allowFireOnLoad = 1;
        };
    };

    class ThingX;
    class ace_csw_baseTripod: ThingX {
        class ACE_Actions {
            class ACE_MainActions;
        };
    };
    class ACE_m2_60_Baseplate: ace_csw_baseTripod {
        scope = 2;
        displayName = "$STR_DN_SPEX_M2_60_STAND";
        model = "\WW2\SPEX\addons\Assets_m_Weapons_Mortars_m\SPEX_M2_Disas.p3d";
        class ace_csw {
            disassembleTo = "SPEX_M2_60_Stand";
        };
    };
};
