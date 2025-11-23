class ACE_Medical_Treatment
{
	class Bandaging 
    {
        // Field dressing is normal average treatment
        // packing bandage is average treatment, higher reopen change, longer reopening delay
        // elastic bandage is higher treatment, higher reopen change, shorter reopen delay
        // quickclot is lower treatment, lower reopen change, longer reopening delay
        class BasicBandage;
        class FieldDressing;
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
