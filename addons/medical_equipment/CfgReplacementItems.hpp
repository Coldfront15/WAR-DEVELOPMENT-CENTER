// This config accepts both item type numbers and item class names
// Item type numbers need the prefix ItemType_, so for example ItemType_401
// Class names need no special prefix
class ace_medical_replacementItems 
{
    DOUBLES(ItemType,TYPE_FIRST_AID_KIT)[] = {};
    DOUBLES(ItemType,TYPE_MEDIKIT)[] = {};
    FirstAidKit[] = {
        {"ACE_fieldDressing", 1},
        {"ACE_packingBandage", 1},
        {"ACE_morphine", 1},
        {"ACE_tourniquet", 1}
    };
    Medikit[] = {
        {"ACE_fieldDressing", 1},
        {"ACE_packingBandage", 2},
        {"ACE_epinephrine", 1},
        {"ACE_morphine", 1},
        {"ACE_salineIV_250", 1},
        {"ACE_tourniquet", 1},
        {"ACE_splint", 2}
    };
    SPE_US_FirstAidKit[] = {
        {"wdc_gauzeBandage", 1},
        {"wdc_carlisleLarge", 1},
        {"wdc_morphineSyrette", 1},
        {"wdc_Sulfa", 2},
        {"wdc_US_Tourniquet", 2}
    };
    SPE_US_Medkit[] = {
        {"wdc_gauzeBandage", 10},
        {"wdc_carlisleLarge", 5},
        {"wdc_carlisleSmall", 5},
        {"wdc_morphineSyrette", 10},
        {"wdc_atropineSyrette", 2},
        {"wdc_ammoniaAmpule", 10},
        {"wdc_Sulfa", 20},
        {"wdc_US_Tourniquet", 8},
        {"wdc_US_surgicalKit", 1},
        {"wdc_bloodPlasmaIV_400", 2},
        {"wdc_bloodPlasmaIV_250", 1},
        {"wdc_US_personalAidKit", 1}
    };
};