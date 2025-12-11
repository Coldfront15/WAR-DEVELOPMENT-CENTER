#include "script_component.hpp"

class CfgPatches {
	class ADDON {
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
		units[] = {
            "WDC_ACE_Items_US_Resupply_medical"
        };
		weapons[] = {
            "wdc_carlisleLarge",
            "wdc_carlisleSmall",
            "wdc_gauzeBandage",
            "wdc_triangleBandage",
            "wdc_morphineSyrette",
            "wdc_atropineSyrette",
            "wdc_ammoniaAmpule",
            "wdc_Sulfa",
            "wdc_US_surgicalKit",
            "wdc_US_Tourniquet",
            "wdc_US_Splint",
            "wdc_US_personalAidKit",
            "wdc_bloodPlasmaIV_500",
            "wdc_bloodPlasmaIV_250",
            "wdc_bloodIV_500",
            "wdc_bloodIV_250"
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
#include "ACE_Medical_Injuries.hpp"
#include "ACE_Medical_Treatment.hpp"
#include "ACE_Medical_Treatment_Actions.hpp"

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
		model = "\x\wdc\addons\medical_equipment\wdc_tourniquet.p3d";
        hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\x\wdc\addons\medical_equipment\data\wdc_tourniquet_co.paa"};
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
		scopeCurator = 2;
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
