

#define US_321_NCO_mordica"x\wdc\addons\helmets\US_Airborne\US_Pot_321_NCO_mordica.rvmat"

	class H_SPE_US_AB_Helmet_321_NCO_Mordica: H_SPE_US_AB_Helmet_321_NCO
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US M2 321GFAB NCO (Mordica, Close)";
		hiddenSelectionsMaterials[] = {US_321_NCO_mordica,"","","","",""}; 
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_NCO_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "\simc_lcd_42\lcd_us_helmet_m2_cs.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_ns_Mordica: H_SPE_US_AB_Helmet_321_NCO_ns
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US M2 321GFAB NCO (Mordica, Open)";
		hiddenSelectionsMaterials[] = {US_321_NCO_mordica,"","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_NCO_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "\simc_lcd_42\lcd_us_helmet_m2_OS.p3d";
			hiddenSelections[] = {"camo","band","jokes","liner","liner_erla"};
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_net_Mordica: H_SPE_US_AB_Helmet_321_NCO_net
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB NCO Net 1/2 (Mordica, Open)";
		hiddenSelectionsMaterials[] = {US_321_NCO_mordica,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_3.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_net_ns_Mordica: H_SPE_US_AB_Helmet_321_NCO_net_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB NCO Net 1/2 (Mordica, Fold)";
		hiddenSelectionsMaterials[] = {US_321_NCO_mordica,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_Scrim_Mordica: H_SPE_US_AB_Helmet_321_NCO_Scrim
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB NCO Scrim 1/2 (Mordica, Open)";
		hiddenSelectionsMaterials[] = {US_321_NCO_mordica,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_Scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_3.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_Scrim_ns_Mordica: H_SPE_US_AB_Helmet_321_NCO_Scrim_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB NCO Scrim 1/2 (Mordica, Fold)";
		hiddenSelectionsMaterials[] = {US_321_NCO_mordica,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_Scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};

	// Late War 1/4" Net

	class H_SPE_US_AB_Helmet_321_NCO_net4_Mordica: H_SPE_US_AB_Helmet_321_NCO_net4
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB NCO Net 1/4 (Mordica, Open)";
		hiddenSelectionsMaterials[] = {US_321_NCO_mordica,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_3.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_net4_ns_Mordica: H_SPE_US_AB_Helmet_321_NCO_net4_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB NCO Net 1/4 (Mordica, Fold)";
		hiddenSelectionsMaterials[] = {US_321_NCO_mordica,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_Scrim4_Mordica: H_SPE_US_AB_Helmet_321_NCO_Scrim4
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB NCO Scrim 1/4 (Mordica, Open)";
		hiddenSelectionsMaterials[] = {US_321_NCO_mordica,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_3.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_Scrim4_ns_Mordica: H_SPE_US_AB_Helmet_321_NCO_Scrim4_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB NCO Scrim 1/4 (Mordica, Fold)";
		hiddenSelectionsMaterials[] = {US_321_NCO_mordica,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};

	//Late War PFAK

	class H_SPE_US_AB_Helmet_321_NCO_PFAK_Mordica: H_SPE_US_AB_Helmet_321_NCO_PFAK
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB NCO PFAK (Mordica, Open)";
		hiddenSelectionsMaterials[] = {US_321_NCO_mordica,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_3.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_PFAK_ns_Mordica: H_SPE_US_AB_Helmet_321_NCO_PFAK_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB NCO PFAK (Mordica, Fold)";
		hiddenSelectionsMaterials[] = {US_321_NCO_mordica,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_PFAK_Scrim_Mordica: H_SPE_US_AB_Helmet_321_NCO_PFAK_Scrim
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB NCO Scrim PFAK (Mordica, Open)";
		hiddenSelectionsMaterials[] = {US_321_NCO_mordica,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_3.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_PFAK_Scrim_ns_Mordica: H_SPE_US_AB_Helmet_321_NCO_PFAK_Scrim_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB NCO Scrim PFAK (Mordica, Fold)";
		hiddenSelectionsMaterials[] = {US_321_NCO_mordica,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","jokes"};
		};
	};