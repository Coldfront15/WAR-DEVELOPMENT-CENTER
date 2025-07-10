

#define US_502_NCO_robinson "x\wdc\addons\helmets\US_Airborne\US_Pot_502_NCO_robinson.rvmat"

	class H_SPE_US_AB_Helmet_502_NCO_Robinson: H_SPE_US_AB_Helmet_502_NCO
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US M2 502PIR NCO (Robinson, Close)";
		hiddenSelectionsMaterials[] = {US_502_NCO_robinson,"","","","",""}; 
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_NCO_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "\simc_lcd_42\lcd_us_helmet_m2_cs.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_ns_Robinson: H_SPE_US_AB_Helmet_502_NCO_ns
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US M2 502PIR NCO (Robinson, Open)";
		hiddenSelectionsMaterials[] = {US_502_NCO_robinson,"","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_NCO_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "\simc_lcd_42\lcd_us_helmet_m2_OS.p3d";
			hiddenSelections[] = {"camo","band","jokes","liner","liner_erla"};
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_net_Robinson: H_SPE_US_AB_Helmet_502_NCO_net
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR NCO Net 1/2 (Robinson, Open)";
		hiddenSelectionsMaterials[] = {US_502_NCO_robinson,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_3.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_net_ns_Robinson: H_SPE_US_AB_Helmet_502_NCO_net_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR NCO Net 1/2 (Robinson, Fold)";
		hiddenSelectionsMaterials[] = {US_502_NCO_robinson,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Scrim_Robinson: H_SPE_US_AB_Helmet_502_NCO_Scrim
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR NCO Scrim 1/2 (Robinson, Open)";
		hiddenSelectionsMaterials[] = {US_502_NCO_robinson,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_Scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_3.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Scrim_ns_Robinson: H_SPE_US_AB_Helmet_502_NCO_Scrim_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR NCO Scrim 1/2 (Robinson, Fold)";
		hiddenSelectionsMaterials[] = {US_502_NCO_robinson,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_Scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};

	// Late War 1/4" Net

	class H_SPE_US_AB_Helmet_502_NCO_net4_Robinson: H_SPE_US_AB_Helmet_502_NCO_net4
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR NCO Net 1/4 (Robinson, Open)";
		hiddenSelectionsMaterials[] = {US_502_NCO_robinson,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_3.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_net4_ns_Robinson: H_SPE_US_AB_Helmet_502_NCO_net4_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR NCO Net 1/4 (Robinson, Fold)";
		hiddenSelectionsMaterials[] = {US_502_NCO_robinson,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Scrim4_Robinson: H_SPE_US_AB_Helmet_502_NCO_Scrim4
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR NCO Scrim 1/4 (Robinson, Open)";
		hiddenSelectionsMaterials[] = {US_502_NCO_robinson,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_3.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Scrim4_ns_Robinson: H_SPE_US_AB_Helmet_502_NCO_Scrim4_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR NCO Scrim 1/4 (Robinson, Fold)";
		hiddenSelectionsMaterials[] = {US_502_NCO_robinson,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};

	//Late War PFAK

	class H_SPE_US_AB_Helmet_502_NCO_PFAK_Robinson: H_SPE_US_AB_Helmet_502_NCO_PFAK
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR NCO PFAK (Robinson, Open)";
		hiddenSelectionsMaterials[] = {US_502_NCO_robinson,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_3.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_PFAK_ns_Robinson: H_SPE_US_AB_Helmet_502_NCO_PFAK_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR NCO PFAK (Robinson, Fold)";
		hiddenSelectionsMaterials[] = {US_502_NCO_robinson,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_PFAK_Scrim_Robinson: H_SPE_US_AB_Helmet_502_NCO_PFAK_Scrim
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR NCO Scrim PFAK (Robinson, Open)";
		hiddenSelectionsMaterials[] = {US_502_NCO_robinson,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_3.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_PFAK_Scrim_ns_Robinson: H_SPE_US_AB_Helmet_502_NCO_PFAK_Scrim_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR NCO Scrim PFAK (Robinson, Fold)";
		hiddenSelectionsMaterials[] = {US_502_NCO_robinson,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","jokes"};
		};
	};