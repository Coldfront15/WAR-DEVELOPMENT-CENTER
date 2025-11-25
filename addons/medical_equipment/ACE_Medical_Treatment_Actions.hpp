class ACE_Medical_Treatment_Actions
{
	class BasicBandage;
	class FieldDressing: BasicBandage {};
    class ElasticBandage: BasicBandage {};
    class QuikClot: BasicBandage {};
    class PackingBandage: BasicBandage {};
    class Morphine: FieldDressing {};
    class Epinephrine: Morphine {};
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
    class wdc_ElasticBandage: ElasticBandage 
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
