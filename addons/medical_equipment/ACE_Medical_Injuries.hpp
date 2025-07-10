class ACE_Medical_Injuries {
    class damageTypes {
        class woundHandlers;

        class explosive {
            class woundHandlers: woundHandlers {};
        };
        class GVAR(explosive_wp): explosive {
            class woundHandlers: woundHandlers {
                ADDON = QFUNC(woundsHandlerWP);
            };
        };
    };
};
