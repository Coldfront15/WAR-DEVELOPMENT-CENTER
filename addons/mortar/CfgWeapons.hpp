class CfgWeapons {
    class Launcher_Base_F;
    class SPE_Slung_Static_Weapon_Base: Launcher_Base_F {};

  

    // --- Mortars -----------------------------------------------------------------
    class SPEX_M2_60;
    class ACE_M2_60_proxy: SPEX_M2_60 {
        magazineReloadTime = 0.5;
    };

    class SPEX_M2_60_Stand: SPE_Slung_Static_Weapon_Base {
        class ace_csw {
            type = "mount";
            deployTime = 3;
            pickupTime = 3;
            deploy = "ACE_m2_60_Baseplate";
        };
    };
    class SPEX_M2_60_Barrel: SPE_Slung_Static_Weapon_Base {
        class ace_csw {
            type = "weapon";
            deployTime = 5;
            pickupTime = 5;
            class assembleTo {
                ACE_m2_60_Baseplate = "SPEX_M2_60";
            };
        };
    };
};
