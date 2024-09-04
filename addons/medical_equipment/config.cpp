#include "script_component.hpp"

class CfgPatches {
	class ADDON {
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
		units[] = {};
		weapons[] = {
            "wdc_carlisleLarge",
            "wdc_carlisleSmall",
            "wdc_gauzeBandage",
            "wdc_triangleBandage",
            "wdc_morphineSyrette",
            "wdc_atropineSyrette",
            "wdc_ammoniaAmpule"
        };
		requiredAddons[] = {
            "ace_interaction",
            "ace_medical_treatment"
        };
        VERSION_CONFIG;
	};
};

#include "CfgEventHandlers.hpp"
#include "CfgReplacementItems.hpp"

class CfgWeapons
{
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class ACE_quikclot;
	class ACE_fieldDressing;
	class ACE_packingBandage;
	class ACE_elasticBandage;
	class ACE_tourniquet;
	class ACE_splint;
	class ACE_morphine;
	class ACE_epinephrine;
	class ACE_adenosine;
	class ACE_personalAidKit;
	class ACE_surgicalKit;
	class ACE_bodyBag;
    class ACE_bloodIV;
	class wdc_carlisleLarge: ACE_fieldDressing
	{
		scope = 2;
		author = "Coldfront15";
		picture = "\x\wdc\addons\medical_equipment\ui\largeBandage_ui_ca.paa";
		model = "\x\wdc\addons\medical_equipment\wdc_carlisleLarge.p3d";
		displayName = "Carlisle Dressing, Large";
		descriptionShort = "Used to pack medium to large wounds and stem the bleeding.";
        descriptionUse = "For dressing large wounds, place compress directly over wound, wrap tails around limb, tie square knot. Do not touch surface to go on wound.";
		ACE_isMedicalItem = 1;
        ACE_asItem = 1;
		mass = 2;
	};
    class wdc_carlisleSmall: ACE_quikclot
	{
		scope = 2;
		author = "Coldfront15";
		picture = "\x\wdc\addons\medical_equipment\ui\smallBandage_ui_ca.paa";
		model = "\x\wdc\addons\medical_equipment\wdc_carlisleSmall.p3d";
		displayName = "Carlisle Dressing, Small";
		descriptionShort = "Used to pack small to medium wounds and stem the bleeding.";
        descriptionUse = "For dressing wounds, place compress directly over wound, wrap tails around limb, tie square knot. Do not touch surface to go on wound.";
		ACE_isMedicalItem = 1;
        ACE_asItem = 1;
		mass = 1;
	};
    class wdc_gauzeBandage: ACE_packingBandage
	{
		scope = 2;
		author = "Coldfront15";
		picture = "\x\wdc\addons\medical_equipment\ui\gauzeBandage_ui_ca.paa";
		model = "\x\wdc\addons\medical_equipment\wdc_gauzeBandage.p3d";
		displayName = "Gauze Bandage";
		descriptionShort = "Used to cover and stem the bleeding of small wounds.";
        descriptionUse = "For dressing wounds, place compress directly over wound, wrap tails around limb, tie square knot. Do not touch surface to go on wound.";
		ACE_isMedicalItem = 1;
        ACE_asItem = 1;
		mass = 1;
	};
    class wdc_triangleBandage: ACE_elasticBandage
	{
		scope = 2;
		author = "Coldfront15";
		picture = "\x\wdc\addons\medical_equipment\ui\triangularBandage_ui_ca.paa";
		model = "\x\wdc\addons\medical_equipment\wdc_triangleBandage.p3d";
		displayName = "Triangular Bandage";
		descriptionShort = "For bandaging wounds or injuries requiring a large dressing";
        descriptionUse = "For making slings and for bandaging wounds or injuries requiring a large dressing";
		ACE_isMedicalItem = 1;
        ACE_asItem = 1;
		mass = 2;
	};
    class wdc_morphineSyrette: ACE_morphine
	{
        scope = 2;
		author = "Coldfront15";
		displayName = "Morphine Syrette";
        descriptionShort = "For treating severe pain. Warning: May be habit-forming.";
        descriptionUse = "For treating severe pain. Warning: May be habit-forming.";
		picture = "\x\wdc\addons\medical_equipment\ui\morphine_ui_ca.paa";
		model = "\x\wdc\addons\medical_equipment\wdc_morphineSyrette.p3d";
        ACE_isMedicalItem = 1;
        ACE_asItem = 1;
        mass = 1;
	};
    class wdc_atropineSyrette: ACE_morphine
	{
        scope = 2;
		author = "Coldfront15";
		displayName = "Atropine Syrette";
        descriptionShort = "For treating Nerve Gas or Hypocardia.";
        descriptionUse = "For treating Nerve Gas or Hypocardia.";
		picture = "\x\wdc\addons\medical_equipment\ui\atropine_ui_ca.paa";
		model = "\x\wdc\addons\medical_equipment\wdc_atropineSyrette.p3d";
        ACE_isMedicalItem = 1;
        ACE_asItem = 1;
        mass = 1;
	};
    class wdc_ammoniaAmpule: ACE_morphine
	{
        scope = 2;
		author = "Coldfront15";
		displayName = "Ammonia Inhalant";
        descriptionShort = "For fainting, crush and hold near nose as directed on container.";
        descriptionUse = "For fainting, crush and hold near nose as directed on container.";
		picture = "\x\wdc\addons\medical_equipment\ui\ammonia_ui_ca.paa";
		model = "\x\wdc\addons\medical_equipment\wdc_ammoniaAmpule.p3d";
        ACE_isMedicalItem = 1;
        ACE_asItem = 1;
        mass = 1;
	};
    class wdc_Sulfa: ACE_ItemCore
	{
		scope = 2;
		author = "Coldfront15/Letlev";
		displayName = "US Sulfa Packet";
		descriptionShort = "Antibiotic Powder disinfects and slows down bleeding";
		picture = "\x\wdc\addons\medical_equipment\ui\sulfa_packet_ui_ca.paa";
		model = "\x\wdc\addons\medical_equipment\wdc_sulfaPacket.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 0.2;
		};
	};
    class wdc_US_surgicalKit: ACE_surgicalKit
	{
		author = "Coldfront15/Letlev";
		displayName = "US Surgical Kit";
        picture = "\x\wdc\addons\medical_equipment\ui\surgical_kit_ui_ca.paa";
	};
    class wdc_US_Tourniquet: ACE_tourniquet
	{
		author = "Coldfront15/Letlev";
		displayName = "US Tourniquet";
		picture = "\x\wdc\addons\medical_equipment\ui\tourniquet_ui_ca.paa";
		model = "\a3\Characters_F_Enoch\Facewear\G_Blindfold_01_F.p3d";
        hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Enoch\Facewear\data\G_Blindfold_01_White_CO"};
	};
    class wdc_US_Splint: ACE_splint
	{
		author = "Coldfront15/Letlev";
		displayName = "US Splint";
		picture = "\x\wdc\addons\medical_equipment\ui\splint_ui_ca.paa";
	};
    class wdc_US_personalAidKit: ACE_personalAidKit
	{
		author = "Letlev";
		displayName = "US, 24-Unit First Aid Kit";
		picture = "\WW2\SPE_Assets_t\Weapons\Equipment_t\Weapons\Items\Gear_US_Medkit_X_ca.paa";
		model = "\WW2\SPE_Assets_m\Misc\Items_m\SPE_US_Medkit.p3d";
	};
    class wdc_bloodPlasmaIV_500: ACE_bloodIV
    {
        author = "Coldfront15";
		displayName = "Blood Plasma (500cc)";
		picture = "\x\wdc\addons\medical_equipment\ui\bloodPlasma_ui_ca.paa";
        model = "\x\wdc\addons\medical_equipment\wdc_plasmaBottle.p3d";
        class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 2;
		};
    };
    class wdc_bloodPlasmaIV_250: wdc_bloodPlasmaIV_500
    {
        author = "Coldfront15";
		displayName = "Blood Plasma (250cc)";
        model = "\x\wdc\addons\medical_equipment\wdc_plasmaBottle_250.p3d";
        class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
    };
    class wdc_bloodIV_500: ACE_bloodIV
    {
        author = "Coldfront15";
		displayName = "Blood (500cc)";
		picture = "\x\wdc\addons\medical_equipment\ui\bloodPlasma_ui_ca.paa";
        model = "\x\wdc\addons\medical_equipment\wdc_plasmaBottle_blood.p3d";
        class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 2;
		};
    };
    class wdc_bloodIV_250: wdc_bloodPlasmaIV_500
    {
        author = "Coldfront15";
		displayName = "Blood (250cc)";
        model = "\x\wdc\addons\medical_equipment\wdc_plasmaBottle_blood_250.p3d";
        class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
    };
};

class CfgVehicles
{
	class Item_Base_F;
	class Thing;    
	class ACE_MedicalLitterBase;
    class wdc_MedicalLitter_carlisleLarge: ACE_MedicalLitterBase 
	{
        model = "\x\wdc\addons\medical_equipment\wdc_carlisleLarge.p3d";
    };
    class wdc_MedicalLitter_carlisleSmall: ACE_MedicalLitterBase 
	{
        model = "\x\wdc\addons\medical_equipment\wdc_carlisleSmall.p3d";
    };
    class wdc_MedicalLitter_gauzeBandage: ACE_MedicalLitterBase 
	{
        model = "\x\wdc\addons\medical_equipment\wdc_gauzeBandage.p3d";
    };
    class wdc_MedicalLitter_triangleBandage: ACE_MedicalLitterBase 
	{
        model = "\x\wdc\addons\medical_equipment\wdc_triangleBandage.p3d";
    };
    class wdc_MedicalLitter_morphineSyrette: ACE_MedicalLitterBase 
	{
        model = "\x\wdc\addons\medical_equipment\wdc_morphineSyrette.p3d";
    };
    class wdc_MedicalLitter_atropineSyrette: ACE_MedicalLitterBase 
	{
        model = "\x\wdc\addons\medical_equipment\wdc_atropineSyrette.p3d";
    };
    class wdc_MedicalLitter_ammoniaAmpule: ACE_MedicalLitterBase 
	{
        model = "\x\wdc\addons\medical_equipment\wdc_ammoniaAmpule.p3d";
    };
    class wdc_MedicalLitter_sulfaPacket: ACE_MedicalLitterBase 
	{
        model = "\x\wdc\addons\medical_equipment\wdc_sulfaPacket.p3d";
    };
    class wdc_MedicalLitter_bloodPlasma: ACE_MedicalLitterBase 
	{
        model = "\x\wdc\addons\medical_equipment\wdc_plasmaBottle_litter.p3d";
    };
	class wdc_carlisleLargeItem: Item_Base_F 
	{
        scope = 2;
        scopeCurator = 2;
        displayName = "Carlisle Dressing, Large";
        author = "Coldfront15";
        editorSubcategory = "WDC_ACE_Items";
        class TransportItems
		{
			class _xx_wdc_carlisleLarge
			{
				name = "wdc_carlisleLarge";
				count = 1;
			};
        };
    };
    class wdc_carlisleSmallItem: Item_Base_F 
	{
        scope = 2;
        scopeCurator = 2;
        displayName = "Carlisle Dressing, Small";
        author = "Coldfront15";
        editorSubcategory = "WDC_ACE_Items";
        class TransportItems
		{
			class _xx_wdc_carlisleSmall
			{
				name = "wdc_carlisleSmall";
				count = 1;
			};
        };
    };
    class wdc_gauzeBandageItem: Item_Base_F 
	{
        scope = 2;
        scopeCurator = 2;
        displayName = "Gauze Bandage";
        author = "Coldfront15";
        editorSubcategory = "WDC_ACE_Items";
        class TransportItems
		{
			class _xx_wdc_gauzeBandage
			{
				name = "wdc_gauzeBandage";
				count = 1;
			};
        };
    };
    class wdc_triangleBandageItem: Item_Base_F 
	{
        scope = 2;
        scopeCurator = 2;
        displayName = "Triangular Bandage";
        author = "Coldfront15";
        editorSubcategory = "WDC_ACE_Items";
        class TransportItems
		{
			class _xx_wdc_triangleBandage
			{
				name = "wdc_triangleBandage";
				count = 1;
			};
        };
    };
    class wdc_morphineSyretteItem: Item_Base_F 
	{
        scope = 2;
        scopeCurator = 2;
        displayName = "Morphine Syrette";
        author = "Coldfront15";
        editorSubcategory = "WDC_ACE_Items";
        class TransportItems
		{
			class _xx_wdc_morphineSyrette
			{
				name = "wdc_morphineSyrette";
				count = 1;
			};
        };
    };
    class wdc_atropineSyretteItem: Item_Base_F 
	{
        scope = 2;
        scopeCurator = 2;
        displayName = "Atropine Syrette";
        author = "Coldfront15";
        editorSubcategory = "WDC_ACE_Items";
        class TransportItems
		{
			class _xx_wdc_atropineSyrette
			{
				name = "wdc_atropineSyrette";
				count = 1;
			};
        };
    };
    class wdc_ammoniaAmpuleItem: Item_Base_F 
	{
        scope = 2;
        scopeCurator = 2;
        displayName = "Ammonia Inhalant";
        author = "Coldfront15";
        editorSubcategory = "WDC_ACE_Items";
        class TransportItems
		{
			class _xx_wdc_ammoniaAmpule
			{
				name = "wdc_ammoniaAmpule";
				count = 1;
			};
        };
    };
    class wdc_SulfaItem: Item_Base_F 
	{
        scope = 2;
        scopeCurator = 2;
        displayName = "Sulfa Powder";
        author = "Coldfront15";
        editorSubcategory = "WDC_ACE_Items";
        class TransportItems
		{
			class _xx_wdc_Sulfa
			{
				name = "wdc_Sulfa";
				count = 1;
			};
        };
    };
    class wdc_US_SplintItem: Item_Base_F 
	{
        scope = 2;
        scopeCurator = 2;
        displayName = "US Splint";
        author = "Coldfront15";
        editorSubcategory = "WDC_ACE_Items";
        class TransportItems
		{
			class _xx_wdc_US_Splint
			{
				name = "wdc_US_Splint";
				count = 1;
			};
        };
    };
    class wdc_US_TourniquetItem: Item_Base_F 
	{
        scope = 2;
        scopeCurator = 2;
        displayName = "US Tourniquet";
        author = "Coldfront15";
        editorSubcategory = "WDC_ACE_Items";
        class TransportItems
		{
			class _xx_wdc_US_Tourniquet
			{
				name = "wdc_US_Tourniquet";
				count = 15;
			};
        };
    };
    class wdc_US_SurgicalKitItem: Item_Base_F 
	{
        scope = 2;
        scopeCurator = 2;
        displayName = "US Surgical Kit";
        author = "Coldfront15";
        editorSubcategory = "WDC_ACE_Items";
        class TransportItems
		{
			class _xx_wdc_US_surgicalKit
			{
				name = "wdc_US_surgicalKit";
				count = 2;
			};
        };
    };
    class wdc_US_PersonalAidKitItem: Item_Base_F 
	{
        scope = 2;
        scopeCurator = 2;
        displayName = "US, 24-Unit First Aid Kit";
        author = "Coldfront15";
        editorSubcategory = "WDC_ACE_Items";
        class TransportItems
		{
			class _xx_wdc_US_personalAidKit
			{
				name = "wdc_US_personalAidKit";
				count = 1;
			};
        };
    };
    class wdc_bloodPlasmaIV_500Item: Item_Base_F 
	{
        scope = 2;
        scopeCurator = 2;
        displayName = "Blood Plasma (500cc)";
        author = "Coldfront15";
        editorSubcategory = "WDC_ACE_Items";
        class TransportItems
		{
			class _xx_wdc_bloodPlasmaIV_500
			{
				name = "wdc_bloodPlasmaIV_500";
				count = 1;
			};
        };
    };
    class wdc_bloodPlasmaIV_250Item: Item_Base_F 
	{
        scope = 2;
        scopeCurator = 2;
        displayName = "Blood Plasma (250cc)";
        author = "Coldfront15";
        editorSubcategory = "WDC_ACE_Items";
        class TransportItems
		{
			class _xx_wdc_bloodPlasmaIV_250
			{
				name = "wdc_bloodPlasmaIV_250";
				count = 1;
			};
        };
    };
    class wdc_bloodIV_500Item: Item_Base_F 
	{
        scope = 2;
        scopeCurator = 2;
        displayName = "Blood (500cc)";
        author = "Coldfront15";
        editorSubcategory = "WDC_ACE_Items";
        class TransportItems
		{
			class _xx_wdc_bloodIV_500
			{
				name = "wdc_bloodIV_500";
				count = 1;
			};
        };
    };
    class wdc_bloodIV_250Item: Item_Base_F 
	{
        scope = 2;
        scopeCurator = 2;
        displayName = "Blood (250cc)";
        author = "Coldfront15";
        editorSubcategory = "WDC_ACE_Items";
        class TransportItems
		{
			class _xx_wdc_bloodIV_250
			{
				name = "wdc_bloodIV_250";
				count = 1;
			};
        };
    };
    class ACE_medicalSupplyCrate;
	class WDC_ACE_Items_US_Resupply_medical: ACE_medicalSupplyCrate
	{
		scope = 2;
		scopecurator = 2;
		displayName = "Medical Supplies";
		editorCategory = "WDC_Items";
		editorSubcategory = "WDC_ACE_Items";
		class TransportItems
		{
			class _xx_wdc_carlisleLarge
			{
				name = "wdc_carlisleLarge";
				count = 20;
			};
			class _xx_wdc_carlisleSmall
			{
				name = "wdc_carlisleSmall";
				count = 15;
			};
			class _xx_wdc_gauzeBandage
			{
				name = "wdc_gauzeBandage";
				count = 15;
			};
			class _xx_wdc_triangleBandage
			{
				name = "wdc_triangleBandage";
				count = 10;
			};
			class _xx_wdc_morphineSyrette
			{
				name = "wdc_morphineSyrette";
				count = 10;
			};
            class _xx_wdc_atropineSyrette
			{
				name = "wdc_atropineSyrette";
				count = 10;
			};
			class _xx_wdc_Sulfa
			{
				name = "wdc_Sulfa";
				count = 35;
			};
            class _xx_wdc_US_splint
			{
				name = "wdc_US_Splint";
				count = 20;
			};
            class _xx_wdc_US_tourniquet
			{
				name = "wdc_US_Tourniquet";
				count = 30;
			};
            class _xx_wdc_US_surgicalKit
			{
				name = "wdc_US_surgicalKit";
				count = 2;
			};
            class _xx_wdc_US_personalAidKit
			{
				name = "wdc_US_personalAidKit";
				count = 1;
			};
            class _xx_wdc_bloodPlasmaIV_500
			{
				name = "wdc_bloodPlasmaIV_500";
				count = 12;
			};
            class _xx_wdc_bloodPlasmaIV_250
			{
				name = "wdc_bloodPlasmaIV_250";
				count = 24;
			};
		};
	};
};

class ACE_Medical_Treatment_Actions
{
	class BasicBandage;
	class FieldDressing;
    class QuikClot;
    class PackingBandage;
    class Morphine;
    class Epinephrine;
	class wdc_FieldDressing: FieldDressing 
	{
		displayName = "Dressing, Small";
		items[] = {"wdc_carlisleSmall"};
		litter[] = 
		{
            {"wdc_MedicalLitter_carlisleSmall"},
            {"ACE_MedicalLitter_clean"},
            {{"ACE_MedicalLitter_bandage2", "ACE_MedicalLitter_bandage3"}}
        };
	};
    class wdc_PackingBandage: PackingBandage 
	{
		displayName = "Dressing, Large";
		items[] = {"wdc_carlisleLarge"};
		litter[] = 
		{
            {"wdc_MedicalLitter_carlisleLarge"},
            {"ACE_MedicalLitter_clean"},
            {{"ACE_MedicalLitter_bandage2", "ACE_MedicalLitter_bandage3"}}
        };
	};
    class wdc_ElasticBandage: PackingBandage 
	{
		displayName = "Triangular Bandage";
		items[] = {"wdc_triangleBandage"};
		litter[] = 
		{
            {"wdc_MedicalLitter_triangleBandage"},
            {"ACE_MedicalLitter_clean"},
            {{"ACE_MedicalLitter_bandage2", "ACE_MedicalLitter_bandage3"}}
        };
	};
    class wdc_QuikClot: QuikClot 
	{
		displayName = "Gauze Bandage";
		items[] = {"wdc_gauzeBandage"};
		litter[] = 
		{
            {"wdc_MedicalLitter_gauzeBandage"},
            {"ACE_MedicalLitter_clean"},
            {{"ACE_MedicalLitter_bandage2", "ACE_MedicalLitter_bandage3"}}
        };
	};
    class wdc_Morphine: Morphine 
    {
        displayName = "Morphine Syrette";
		items[] = {"wdc_morphineSyrette"};
        litter[] = {{"wdc_MedicalLitter_morphineSyrette"}};
    };
    class wdc_Epinephrine: Epinephrine 
    {
        displayName = "Atropine Syrette";
        displayNameProgress = "Injecting Atropine...";
        items[] = {"wdc_atropineSyrette"};
        litter[] = {{"wdc_MedicalLitter_atropineSyrette"}};
    }; 
    class wdc_Sulfa: Morphine
	{
		displayName = "Sulfa Powder";
		displayNameProgress = "Appying Powder...";
		allowedSelections[] = {"All"};
		items[] = {"wdc_Sulfa"};
        litter[] = {{"wdc_MedicalLitter_sulfaPacket"}};
		callbackSuccess = "[_medic, _patient, _bodyPart, _className, _itemUser, _usedItem] call ace_medical_treatment_fnc_medication;";
	};
    class SurgicalKit: FieldDressing
	{
		items[] = {"ACE_surgicalKit","wdc_US_surgicalKit"};
	};
    class PersonalAidKit: BasicBandage
	{
		items[] = {"ACE_personalAidKit","wdc_US_personalAidKit"};
    };
    class Ammonia: wdc_Epinephrine
	{
		displayName = "Crush Ammonia Inhalant";
		displayNameProgress = "Crushing Inhalant...";
		allowedSelections[] = {"Head"};
		items[] = {"wdc_ammoniaAmpule"};
        litter[] = {{"wdc_MedicalLitter_ammoniaAmpule"}};
		callbackSuccess = QFUNC(ammoniaInhalant);
	};
    class ApplyTourniquet: BasicBandage
	{
		items[] = {"ACE_tourniquet","wdc_US_Tourniquet"};
	};
    class Splint: BasicBandage
	{
		items[] = {"ACE_splint","wdc_US_Splint"};
	};

    //IV Fluids
    class BloodIV;
    class BloodIV_500;
    class BloodIV_250;
    class BloodPlasmaIV_500: BloodIV {
        displayName = "Give Blood Plasma IV (500cc)";
        items[] = {"wdc_bloodPlasmaIV_500"};
        litter[] = {{"wdc_MedicalLitter_bloodPlasma"}};
    };
     class BloodPlasmaIV_250: BloodIV_500 {
        displayName = "Give Blood Plasma IV (250cc)";
        items[] = {"wdc_bloodPlasmaIV_250"};
        litter[] = {{"wdc_MedicalLitter_bloodPlasma"}};
    };
    class wdc_BloodIV_500: BloodIV {
        displayName = "Give Blood IV (500cc)";
        items[] = {"wdc_bloodIV_500"};
        litter[] = {{"wdc_MedicalLitter_bloodPlasma"}};
    };
     class wdc_BloodIV_250: BloodIV_500 {
        displayName = "Give Blood IV (250cc)";
        items[] = {"wdc_bloodIV_250"};
        litter[] = {{"wdc_MedicalLitter_bloodPlasma"}};
    };
};

class ACE_Medical_Treatment
{
	class Bandaging 
    {
        // Field dressing is normal average treatment
        // packing bandage is average treatment, higher reopen change, longer reopening delay
        // elastic bandage is higher treatment, higher reopen change, shorter reopen delay
        // quickclot is lower treatment, lower reopen change, longer reopening delay
        class BasicBandage;

        class wdc_FieldDressing {
            // How effect is the bandage for treating one wounds type injury
            effectiveness = 1;
            // What is the chance and delays (in seconds) of the treated default injury reopening
            reopeningChance = 0.1;
            reopeningMinDelay = 120;
            reopeningMaxDelay = 200;

            class Abrasion {
                effectiveness = 3;
                reopeningChance = 0.3;
                reopeningMinDelay = 200;
                reopeningMaxDelay = 1000;
            };
            class AbrasionMinor: Abrasion {
                effectiveness = 3;
            };
            class AbrasionMedium: Abrasion {
                effectiveness = 2.5;
                reopeningChance = 0.7;
            };
            class AbrasionLarge: Abrasion {
                effectiveness = 2;
                reopeningChance = 0.9;
            };

            class Avulsion: Abrasion {
                effectiveness = 1;
                reopeningChance = 0.5;
                reopeningMinDelay = 120;
                reopeningMaxDelay = 200;
            };
            class AvulsionMinor: Avulsion {
                effectiveness = 1;
            };
            class AvulsionMedium: Avulsion {
                effectiveness = 0.9;
            };
            class AvulsionLarge: Avulsion {
                effectiveness = 0.75;
            };

            class Contusion: Abrasion {
                effectiveness = 1;
                reopeningChance = 0;
                reopeningMinDelay = 0;
                reopeningMaxDelay = 0;
            };
            class ContusionMinor: Contusion {};
            class ContusionMedium: Contusion {};
            class ContusionLarge: Contusion {};

            class Crush: Abrasion {
                effectiveness = 1;
                reopeningChance = 0.2;
                reopeningMinDelay = 200;
                reopeningMaxDelay = 1000;
            };
            class CrushMinor: Crush {
                effectiveness = 1;
                reopeningChance = 0.2;
            };
            class CrushMedium: Crush {
                effectiveness = 0.7;
                reopeningChance = 0.3;
            };
            class CrushLarge: Crush {
                effectiveness = 0.6;
                reopeningChance = 0.4;
            };

            class Cut: Abrasion {
                effectiveness = 4;
                reopeningChance = 0.1;
                reopeningMinDelay = 300;
                reopeningMaxDelay = 1000;
            };
            class CutMinor: Cut {
                effectiveness = 4;
                reopeningChance = 0.1;
            };
            class CutMedium: Cut {
                effectiveness = 3;
                reopeningChance = 0.3;
            };
            class CutLarge: Cut {
                effectiveness = 1;
                reopeningChance = 0.5;
            };

            class Laceration: Abrasion {
                effectiveness = 0.95;
                reopeningChance = 0.3;
                reopeningMinDelay = 100;
                reopeningMaxDelay = 800;
            };
            class LacerationMinor: Laceration {
                effectiveness = 0.95;
                reopeningChance = 0.3;
            };
            class LacerationMedium: Laceration {
                effectiveness = 0.7;
                reopeningChance = 0.5;
            };
            class LacerationLarge: Laceration {
                effectiveness = 0.5;
                reopeningChance = 0.6;
            };

            class VelocityWound: Abrasion {
                effectiveness = 2;
                reopeningChance = 0.7;
                reopeningMinDelay = 100;
                reopeningMaxDelay = 500;
            };
            class VelocityWoundMinor: VelocityWound {
                effectiveness = 2;
            };
            class VelocityWoundMedium: VelocityWound {
                effectiveness = 1.5;
            };
            class VelocityWoundLarge: VelocityWound {
                effectiveness = 1;
            };

            class PunctureWound: Abrasion {
                effectiveness = 2;
                reopeningChance = 0.5;
                reopeningMinDelay = 200;
                reopeningMaxDelay = 850;
            };
            class PunctureWoundMinor: PunctureWound {
                effectiveness = 2;
            };
            class PunctureWoundMedium: PunctureWound {
                effectiveness = 1.3;
            };
            class PunctureWoundLarge: PunctureWound {
                effectiveness = 0.9;
            };
        };

        class wdc_PackingBandage: FieldDressing {
            class Abrasion {
                effectiveness = 3;
                reopeningChance = 0.6;
                reopeningMinDelay = 800;
                reopeningMaxDelay = 1500;
            };
            class AbrasionMinor: Abrasion {
                effectiveness = 3;
            };
            class AbrasionMedium: Abrasion {
                effectiveness = 2.5;
                reopeningChance = 0.9;
            };
            class AbrasionLarge: Abrasion {
                effectiveness = 2;
                reopeningChance = 1;
            };

            class Avulsion: Abrasion {
                effectiveness = 1;
                reopeningChance = 0.7;
                reopeningMinDelay = 1000;
                reopeningMaxDelay = 1600;
            };
            class AvulsionMinor: Avulsion {
                effectiveness = 1;
            };
            class AvulsionMedium: Avulsion {
                effectiveness = 0.9;
            };
            class AvulsionLarge: Avulsion {
                effectiveness = 0.75;
            };

            class Contusion: Abrasion {
                effectiveness = 1;
                reopeningChance = 0;
                reopeningMinDelay = 0;
                reopeningMaxDelay = 0;
            };
            class ContusionMinor: Contusion {};
            class ContusionMedium: Contusion {};
            class ContusionLarge: Contusion {};

            class Crush: Abrasion {
                effectiveness = 1;
                reopeningChance = 0.5;
                reopeningMinDelay = 600;
                reopeningMaxDelay = 1000;
            };
            class CrushMinor: Crush {
                effectiveness = 1;
                reopeningChance = 0.6;
            };
            class CrushMedium: Crush {
                effectiveness = 0.7;
                reopeningChance = 0.7;
            };
            class CrushLarge: Crush {
                effectiveness = 0.6;
                reopeningChance = 0.8;
            };

            class Cut: Abrasion {
                effectiveness = 4;
                reopeningChance = 0.4;
                reopeningMinDelay = 700;
                reopeningMaxDelay = 1000;
            };
            class CutMinor: Cut {
                effectiveness = 4;
                reopeningChance = 0.6;
            };
            class CutMedium: Cut {
                effectiveness = 3;
                reopeningChance = 0.7;
            };
            class CutLarge: Cut {
                effectiveness = 1;
                reopeningChance = 0.8;
            };

            class Laceration: Abrasion {
                effectiveness = 0.95;
                reopeningChance = 0.65;
                reopeningMinDelay = 500;
                reopeningMaxDelay = 2000;
            };
            class LacerationMinor: Laceration {
                effectiveness = 0.95;
                reopeningChance = 0.65;
            };
            class LacerationMedium: Laceration {
                effectiveness = 0.7;
                reopeningChance = 0.8;
            };
            class LacerationLarge: Laceration {
                effectiveness = 0.5;
                reopeningChance = 0.9;
            };

            class VelocityWound: Abrasion {
                effectiveness = 2;
                reopeningChance = 1;
                reopeningMinDelay = 800;
                reopeningMaxDelay = 2000;
            };
            class VelocityWoundMinor: VelocityWound {
                effectiveness = 2;
            };
            class VelocityWoundMedium: VelocityWound {
                effectiveness = 1.5;
            };
            class VelocityWoundLarge: VelocityWound {
                effectiveness = 1;
            };

            class PunctureWound: Abrasion {
                effectiveness = 2;
                reopeningChance = 1;
                reopeningMinDelay = 1000;
                reopeningMaxDelay = 3000;
            };
            class PunctureWoundMinor: PunctureWound {
                effectiveness = 2;
            };
            class PunctureWoundMedium: PunctureWound {
                effectiveness = 1.3;
            };
            class PunctureWoundLarge: PunctureWound {
                effectiveness = 0.9;
            };
        };

        class wdc_ElasticBandage: FieldDressing {
            class Abrasion {
                effectiveness = 4;
                reopeningChance = 0.6;
                reopeningMinDelay = 80;
                reopeningMaxDelay = 150;
            };
            class AbrasionMinor: Abrasion {
                effectiveness = 4;
            };
            class AbrasionMedium: Abrasion {
                effectiveness = 3;
                reopeningChance = 0.9;
            };
            class AbrasionLarge: Abrasion {
                effectiveness = 2.5;
                reopeningChance = 1;
            };

            class Avulsion: Abrasion {
                effectiveness = 2;
                reopeningChance = 0.7;
                reopeningMinDelay = 100;
                reopeningMaxDelay = 160;
            };
            class AvulsionMinor: Avulsion {
                effectiveness = 2;
            };
            class AvulsionMedium: Avulsion {
                effectiveness = 1.4;
            };
            class AvulsionLarge: Avulsion {
                effectiveness = 1;
            };

            class Contusion: Abrasion {
                effectiveness = 2;
                reopeningChance = 0;
                reopeningMinDelay = 0;
                reopeningMaxDelay = 0;
            };
            class ContusionMinor: Contusion {};
            class ContusionMedium: Contusion {};
            class ContusionLarge: Contusion {};

            class Crush: Abrasion {
                effectiveness = 2;
                reopeningChance = 0.5;
                reopeningMinDelay = 60;
                reopeningMaxDelay = 100;
            };
            class CrushMinor: Crush {
                effectiveness = 2;
                reopeningChance = 0.6;
            };
            class CrushMedium: Crush {
                effectiveness = 1.7;
                reopeningChance = 0.7;
            };
            class CrushLarge: Crush {
                effectiveness = 1.6;
                reopeningChance = 0.8;
            };

            class Cut: Abrasion {
                effectiveness = 5;
                reopeningChance = 0.4;
                reopeningMinDelay = 70;
                reopeningMaxDelay = 100;
            };
            class CutMinor: Cut {
                effectiveness = 5;
                reopeningChance = 0.6;
            };
            class CutMedium: Cut {
                effectiveness = 3.5;
                reopeningChance = 0.7;
            };
            class CutLarge: Cut {
                effectiveness = 2;
                reopeningChance = 0.8;
            };

            class Laceration: Abrasion {
                effectiveness = 2;
                reopeningChance = 0.65;
                reopeningMinDelay = 50;
                reopeningMaxDelay = 200;
            };
            class LacerationMinor: Laceration {
                effectiveness = 2;
                reopeningChance = 0.65;
            };
            class LacerationMedium: Laceration {
                effectiveness = 1.5;
                reopeningChance = 0.8;
            };
            class LacerationLarge: Laceration {
                effectiveness = 1;
                reopeningChance = 0.9;
            };

            class VelocityWound: Abrasion {
                effectiveness = 2.2;
                reopeningChance = 1;
                reopeningMinDelay = 80;
                reopeningMaxDelay = 200;
            };
            class VelocityWoundMinor: VelocityWound {
                effectiveness = 2.2;
            };
            class VelocityWoundMedium: VelocityWound {
                effectiveness = 1.75;
            };
            class VelocityWoundLarge: VelocityWound {
                effectiveness = 1.5;
            };

            class PunctureWound: Abrasion {
                effectiveness = 2.5;
                reopeningChance = 1;
                reopeningMinDelay = 100;
                reopeningMaxDelay = 300;
            };
            class PunctureWoundMinor: PunctureWound {
                effectiveness = 2.5;
            };
            class PunctureWoundMedium: PunctureWound {
                effectiveness = 2;
            };
            class PunctureWoundLarge: PunctureWound {
                effectiveness = 1.5;
            };
        };

        class wdc_QuikClot: FieldDressing {
            class Abrasion {
                effectiveness = 2;
                reopeningChance = 0.3;
                reopeningMinDelay = 800;
                reopeningMaxDelay = 1500;
            };
            class AbrasionMinor: Abrasion {
                effectiveness = 2;
            };
            class AbrasionMedium: Abrasion {
                effectiveness = 1;
                reopeningChance = 0.4;
            };
            class AbrasionLarge: Abrasion {
                effectiveness = 0.7;
                reopeningChance = 0.5;
            };

            class Avulsion: Abrasion {
                effectiveness = 0.7;
                reopeningChance = 0.2;
                reopeningMinDelay = 1000;
                reopeningMaxDelay = 1600;
            };
            class AvulsionMinor: Avulsion {
                effectiveness = 0.7;
            };
            class AvulsionMedium: Avulsion {
                effectiveness = 0.65;
            };
            class AvulsionLarge: Avulsion {
                effectiveness = 0.5;
            };

            class Contusion: Abrasion {
                effectiveness = 1;
                reopeningChance = 0;
                reopeningMinDelay = 0;
                reopeningMaxDelay = 0;
            };
            class ContusionMinor: Contusion {};
            class ContusionMedium: Contusion {};
            class ContusionLarge: Contusion {};

            class Crush: Abrasion {
                effectiveness = 0.6;
                reopeningChance = 0.5;
                reopeningMinDelay = 600;
                reopeningMaxDelay = 1000;
            };
            class CrushMinor: Crush {
                effectiveness = 0.6;
                reopeningChance = 0.3;
            };
            class CrushMedium: Crush {
                effectiveness = 0.5;
            };
            class CrushLarge: Crush {
                effectiveness = 0.4;
            };

            class Cut: Abrasion {
                effectiveness = 2;
                reopeningChance = 0.2;
                reopeningMinDelay = 700;
                reopeningMaxDelay = 1000;
            };
            class CutMinor: Cut {
                effectiveness = 2;
            };
            class CutMedium: Cut {
                effectiveness = 1;
            };
            class CutLarge: Cut {
                effectiveness = 0.6;
            };

            class Laceration: Abrasion {
                effectiveness = 0.7;
                reopeningChance = 0.4;
                reopeningMinDelay = 500;
                reopeningMaxDelay = 2000;
            };
            class LacerationMinor: Laceration {
                effectiveness = 0.7;
                reopeningChance = 0.4;
            };
            class LacerationMedium: Laceration {
                effectiveness = 0.7;
            };
            class LacerationLarge: Laceration {
                effectiveness = 0.5;
            };

            class VelocityWound: Abrasion {
                effectiveness = 1;
                reopeningChance = 0.5;
                reopeningMinDelay = 800;
                reopeningMaxDelay = 2000;
            };
            class VelocityWoundMinor: VelocityWound {
                effectiveness = 1;
            };
            class VelocityWoundMedium: VelocityWound {
                effectiveness = 0.75;
            };
            class VelocityWoundLarge: VelocityWound {
                effectiveness = 0.5;
            };

            class PunctureWound: Abrasion {
                effectiveness = 1;
                reopeningChance = 0.5;
                reopeningMinDelay = 1000;
                reopeningMaxDelay = 3000;
            };
            class PunctureWoundMinor: PunctureWound {
                effectiveness = 1;
            };
            class PunctureWoundMedium: PunctureWound {
                effectiveness = 0.7;
            };
            class PunctureWoundLarge: PunctureWound {
                effectiveness = 0.4;
            };
        };
    };
    class Morphine;
    class Epinephrine;
    class Medication 
    {
        class wdc_Sulfa
		{
			painReduce = 0;
			hrIncreaseLow[] = {-5,-10};
			hrIncreaseNormal[] = {-5,-10};
			hrIncreaseHigh[] = {-10,-15};
			timeInSystem = 360;
			timeTillMaxEffect = 15;
			maxDose = 12;
			incompatibleMedication[] = {};
			viscosityChange = 25;
			alphaFactor = -0.3;
		};
        class wdc_Morphine 
        {
            painReduce = 0.8;
            hrIncreaseLow[] = {-10, -20};
            hrIncreaseNormal[] = {-10, -30};
            hrIncreaseHigh[] = {-10, -35};
            timeInSystem = 1800;
            timeTillMaxEffect = 30;
            maxDose = 4;
            incompatibleMedication[] = {};
            viscosityChange = -10;
        };
        class wdc_Epinephrine 
        {
            painReduce = 0;
            hrIncreaseLow[] = {10, 20};
            hrIncreaseNormal[] = {10, 50};
            hrIncreaseHigh[] = {10, 40};
            timeInSystem = 120;
            timeTillMaxEffect = 10;
            maxDose = 9;
            incompatibleMedication[] = {};
        };
        class Ammonia
		{
			painReduce = 0;
			hrIncreaseLow[] = {25,50};
			hrIncreaseNormal[] = {15,35};
			hrIncreaseHigh[] = {10,25};
			timeInSystem = 45;
			timeTillMaxEffect = 15;
			maxDose = 5;
			incompatibleMedication[] = {};
			viscosityChange = 0;
		};
    };
    class IV {
        // volume is in millileters
        volume = 1000;
        ratio[] = {};
        type = "Blood";
        class BloodPlasmaIV_500 {
            volume = 500;
            ratio[] = {"Blood", 1};
            type = "Plasma";
        };
        class BloodPlasmaIV_250: BloodPlasmaIV_500 {
            volume = 250;
        };
        class wdc_BloodIV_500 {
            volume = 500;
            ratio[] = {"Plasma", 1};
            type = "Blood";
        };
        class wdc_BloodPlasmaIV_250: wdc_BloodIV_500 {
            volume = 250;
        };
    };
};