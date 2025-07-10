

	#define US_321_1 "x\wdc\addons\helmets\US_Airborne\US_Pot_321.rvmat"  
	#define US_321_2 "x\wdc\addons\helmets\US_Airborne\US_Pot_321.rvmat"  
	#define US_321_3 "x\wdc\addons\helmets\US_Airborne\US_Pot_321.rvmat"
	#define US_321_4 "x\wdc\addons\helmets\US_Airborne\US_Pot_321.rvmat"
	#define US_321_5 "x\wdc\addons\helmets\US_Airborne\US_Pot_321.rvmat"
	
	#define US_321_NCO_1 "x\wdc\addons\helmets\US_Airborne\US_Pot_321_NCO.rvmat"
	#define US_321_NCO_2 "x\wdc\addons\helmets\US_Airborne\US_Pot_321_NCO.rvmat"
	#define US_321_NCO_3 "x\wdc\addons\helmets\US_Airborne\US_Pot_321_NCO.rvmat"
	#define US_321_NCO_4 "x\wdc\addons\helmets\US_Airborne\US_Pot_321_NCO.rvmat"
	#define US_321_NCO_5 "x\wdc\addons\helmets\US_Airborne\US_Pot_321_NCO.rvmat"
	  	  
	#define US_321_CO_1 "x\wdc\addons\helmets\US_Airborne\US_Pot_321_CO.rvmat"  
	#define US_321_CO_2 "x\wdc\addons\helmets\US_Airborne\US_Pot_321_CO.rvmat" 
	#define US_321_CO_3 "x\wdc\addons\helmets\US_Airborne\US_Pot_321_CO.rvmat"  
	#define US_321_CO_4 "x\wdc\addons\helmets\US_Airborne\US_Pot_321_CO.rvmat"  
	#define US_321_CO_5 "x\wdc\addons\helmets\US_Airborne\US_Pot_321_CO.rvmat" 
	
	#define US_321_laat_1 "x\wdc\addons\helmets\US_Airborne\US_Pot_321.rvmat"	  
	#define US_321_laat_2 "x\wdc\addons\helmets\US_Airborne\US_Pot_321.rvmat"	  
	#define US_321_laat_3 "x\wdc\addons\helmets\US_Airborne\US_Pot_321.rvmat"
	#define US_321_laat_4 "x\wdc\addons\helmets\US_Airborne\US_Pot_321.rvmat"
	#define US_321_laat_5 "x\wdc\addons\helmets\US_Airborne\US_Pot_321.rvmat"
	
	#define US_321_laat_NCO_1 "x\wdc\addons\helmets\US_Airborne\US_Pot_321_NCO.rvmat"
	#define US_321_laat_NCO_2 "x\wdc\addons\helmets\US_Airborne\US_Pot_321_NCO.rvmat"
	#define US_321_laat_NCO_3 "x\wdc\addons\helmets\US_Airborne\US_Pot_321_NCO.rvmat"
	#define US_321_laat_NCO_4 "x\wdc\addons\helmets\US_Airborne\US_Pot_321_NCO.rvmat"
	#define US_321_laat_NCO_5 "x\wdc\addons\helmets\US_Airborne\US_Pot_321_NCO.rvmat"
	  	  
	#define US_321_laat_CO_1 "x\wdc\addons\helmets\US_Airborne\US_Pot_321_CO.rvmat"  
	#define US_321_laat_CO_2 "x\wdc\addons\helmets\US_Airborne\US_Pot_321_CO.rvmat"  
	#define US_321_laat_CO_3 "x\wdc\addons\helmets\US_Airborne\US_Pot_321_CO.rvmat"  
	#define US_321_laat_CO_4 "x\wdc\addons\helmets\US_Airborne\US_Pot_321_CO.rvmat"  
	#define US_321_laat_CO_5 "x\wdc\addons\helmets\US_Airborne\US_Pot_321_CO.rvmat"  

	class H_SPE_US_AB_Helmet_321: H_SPE_US_Helmet
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		scope = 2;
		displayName = "US M2 321GFAB (Close)";
		model = "\simc_lcd_42\lcd_us_helmet_m2_NS.p3d";
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_ca.paa";
		hiddenSelections[] = {"camo","camo0","camo1","jokes"};
		hiddenSelectionsTextures[] = {HELMET_1,"","","","",""};
		hiddenSelectionsMaterials[] = {US_321_1,"","","","",""};
		class ItemInfo: ItemInfo
		{
			mass = 30;
			uniformmodel = "\simc_lcd_42\lcd_us_helmet_m2_CS.p3d";
			modelSides[] = {6}; 
		};
	};
	class H_SPE_US_AB_Helmet_321_43: H_SPE_US_AB_Helmet_321
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB (Close)";
		hiddenSelectionsTextures[] = {HELMET_2,"","","","",""};
		hiddenSelectionsMaterials[] = {US_321_2,"","","","",""};
		hiddenSelections[] = {"camo","band","jokes"};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "\simc_lcd_42\lcd_us_helmet_m2_cs.p3d";
			hiddenSelections[] = {"camo","band","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_321_ns: H_SPE_US_AB_Helmet_321
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US M2 321GFAB (Fold)";
		hiddenSelectionsTextures[] = {HELMET_4,"","","","",""};
		hiddenSelectionsMaterials[] = {US_321_4,"","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "\simc_lcd_42\lcd_us_helmet_m2_NS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_ns_43: H_SPE_US_AB_Helmet_321_ns
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US M2 321GFAB (Fold)";
		hiddenSelections[] = {"camo","band","jokes"};
		hiddenSelectionsTextures[] = {HELMET_3,"","","","",""};
		hiddenSelectionsMaterials[] = {US_321_3,"","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "\simc_lcd_42\lcd_us_helmet_m2_NS.p3d";
			hiddenSelections[] = {"camo","band","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_321_os: H_SPE_US_AB_Helmet_321
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US M2 321GFAB (Open)";
		hiddenSelectionsTextures[] = {HELMET_5,"","","","",""};
		hiddenSelectionsMaterials[] = {US_321_5,"","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_os_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "\simc_lcd_42\lcd_us_helmet_m2_OS.p3d";
			hiddenSelections[] = {"camo","band","jokes","liner","liner_erla"};
		};
	};
	class H_SPE_US_AB_Helmet_321_os_42: H_SPE_US_AB_Helmet_321_os
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB (Open)";
		hiddenSelectionsTextures[] = {HELMET_4,"","","","",""};
		hiddenSelectionsMaterials[] = {US_321_4,"","","","",""};
		hiddenSelections[] = {"camo","band","jokes","liner_erla"};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_os_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "\simc_lcd_42\lcd_us_helmet_m2_OS.p3d";
			hiddenSelections[] = {"camo","band","liner_erla"};
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO: H_SPE_US_AB_Helmet_321
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US M2 321GFAB NCO (Close)";
		hiddenSelectionsTextures[] = {HELMET_3,"","","","",""};
		hiddenSelectionsMaterials[] = {US_321_NCO_3,"","","","",""}; 
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_NCO_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "\simc_lcd_42\lcd_us_helmet_m2_cs.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_ns: H_SPE_US_AB_Helmet_321_NCO
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US M2 321GFAB NCO (Open)";
		hiddenSelectionsTextures[] = {HELMET_5,"","","","",""};
		hiddenSelectionsMaterials[] = {US_321_NCO_5,"","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_NCO_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "\simc_lcd_42\lcd_us_helmet_m2_OS.p3d";
			hiddenSelections[] = {"camo","band","jokes","liner","liner_erla"};
		};
	};
	class H_SPE_US_AB_Helmet_321_CO: H_SPE_US_AB_Helmet_321
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US M2 321GFAB Offz (Close)";
		hiddenSelectionsTextures[] = {HELMET_3,"","","","",""};
		hiddenSelectionsMaterials[] = {US_321_CO_3,"",""};
			hiddenSelections[] = {"camo","band","jokes"};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_CO_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "\simc_lcd_42\lcd_us_helmet_m2_CS.p3d";
			hiddenSelections[] = {"camo","band"};
		};
	};
	class H_SPE_US_AB_Helmet_321_CO_ns: H_SPE_US_AB_Helmet_321_CO
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US M2 321GFAB Offz (Fold)";
		hiddenSelectionsTextures[] = {HELMET_2,"","","","",""};
		hiddenSelectionsMaterials[] = {US_321_CO_2,"",""};
		hiddenSelections[] = {"camo","band","jokes"};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_CO_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "\simc_lcd_42\lcd_us_helmet_m2_ns.p3d";
			hiddenSelections[] = {"camo","band","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_321_polar: H_SPE_US_AB_Helmet_321
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		scope = 2;
		displayName = "US M2 321GFAB No.1021 (Close)";
		hiddenSelectionsTextures[] = {HELMET_4,"","","","",""};
		hiddenSelectionsMaterials[] = {US_321_4,"",""};
		model = "\simc_lcd_42\lcd_us_helmet_m2_polar_NS.p3d";
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_polar_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "\simc_lcd_42\lcd_us_helmet_m2_polar_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_polar_ns: H_SPE_US_AB_Helmet_321_polar
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US M2 321GFAB No.1021 (Fold)";
		hiddenSelectionsTextures[] = {HELMET_3,"","","","",""};
		hiddenSelectionsMaterials[] = {US_321_3,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_polar_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "\simc_lcd_42\lcd_us_helmet_m2_polar_NS.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_321_polar_os: H_SPE_US_AB_Helmet_321_polar
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US M2 321GFAB No.1021 (Open)";
		hiddenSelectionsTextures[] = {HELMET_2,"","","","",""};
		hiddenSelectionsMaterials[] = {US_321_2,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_polar_os_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "\simc_lcd_42\lcd_us_helmet_m2_polar_OS.p3d";
		};
	};
	
	
	class H_SPE_US_AB_Helmet_321_Net: H_SPE_US_AB_Helmet_321
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB Net 1/2 (Close)";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
		hiddenSelectionsTextures[] = {HELMET_3,NET,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_3,"","",""};
		hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		// camo - Helmet
		// camo0 - Net
		// camo1 - Scrim
		// pfak - pfak
		// Liner_erla - erla liner stra
		// Liner - liner strap
		// band - band duh!
		// jokes - A-yokes
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_cs_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_321_Net_2: H_SPE_US_AB_Helmet_321_Net
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB Net 1/2 (Close)";
		hiddenSelectionsTextures[] = {HELMET_2,NET,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_2,"","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_cs_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_321_Net_up: H_SPE_US_AB_Helmet_321_Net
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB Net 1/2 (Hook)";
		hiddenSelectionsTextures[] = {HELMET_1,NET,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_1,"","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Net_up_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_321_Net_os: H_SPE_US_AB_Helmet_321_Net
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB Net 1/2 (Open)";
		hiddenSelectionsTextures[] = {HELMET_4,NET,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_4,"","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Net_os_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_321_Net_os_2: H_SPE_US_AB_Helmet_321_Net_os
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_5,NET,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_5,"","",""}; 
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_321_Net_os_3: H_SPE_US_AB_Helmet_321_Net_os
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_2,NET,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_2,"","",""}; 
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_3.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	
	class H_SPE_US_AB_Helmet_321_Net_ns: H_SPE_US_AB_Helmet_321_Net
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		displayName = "US M2 321GFAB Net 1/2 (Fold)";
		hiddenSelectionsTextures[] = {HELMET_3,NET,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_3,"","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Net_ns_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_1.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_321_Net_ns_2: H_SPE_US_AB_Helmet_321_Net_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_2,NET,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_2,"","",""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_321_Net_ns_3: H_SPE_US_AB_Helmet_321_Net_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_4,NET,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_4,"","",""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_3.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_3.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_321_Net_ns_4: H_SPE_US_AB_Helmet_321_Net_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_5,NET,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_5,"","",""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_321_Net_tilt_ns_1: H_SPE_US_AB_Helmet_321_Net_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_3,NET,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_3,"","",""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_tilt_ns_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_321_Net_tilt_ns_2: H_SPE_US_AB_Helmet_321_Net_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_5,NET,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_5,"","",""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_3.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_tilt_ns_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_net: H_SPE_US_AB_Helmet_321_Net_os_3
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB NCO Net 1/2 (Open)";
		hiddenSelectionsTextures[] = {HELMET_2,NET,""};
		hiddenSelectionsMaterials[] = {US_321_NCO_2,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_3.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_net_ns: H_SPE_US_AB_Helmet_321_Net_ns_4
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB NCO Net 1/2 (Fold)";
		hiddenSelectionsTextures[] = {HELMET_4,NET,""};
		hiddenSelectionsMaterials[] = {US_321_NCO_4,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_321_CO_Net: H_SPE_US_AB_Helmet_321_Net_2
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB Offz Net 1/2 (Close)";
		hiddenSelectionsTextures[] = {HELMET_1,NET,""};
		hiddenSelectionsMaterials[] = {US_321_CO_1,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_CO_Net_ca.paa";
	//	class ItemInfo: ItemInfo
	//	{
	//		hiddenSelectionsTextures[] = {HELMET_1,"","","",CO,"",""};
	//	};
	};
	class H_SPE_US_AB_Helmet_321_CO_Net_ns: H_SPE_US_AB_Helmet_321_Net_ns_3
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB Offz Net 1/2 (Fold)";
		hiddenSelectionsTextures[] = {HELMET_3,NET,""};
		hiddenSelectionsMaterials[] = {US_321_CO_3,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_CO_Net_ca.paa";
	//	class ItemInfo: ItemInfo
	//	{
	//		hiddenSelectionsTextures[] = {HELMET_1,"","","",CO,"",""};
	//	};
	};
	
	class H_SPE_US_AB_Helmet_321_polar_net: H_SPE_US_AB_Helmet_321_polar
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB No.1021 Net 1/2 (Close)";
		hiddenSelections[] = {"camo","camo0","camo1"};
		hiddenSelectionsTextures[] = {HELMET_1,NET,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_1,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_polar_net_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_polar_net_ns.p3d"; 
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_polar_net_cs.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_321_polar_net_ns: H_SPE_US_AB_Helmet_321_polar_net
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB No.1021 Net 1/2 (Fold)";
		hiddenSelectionsTextures[] = {HELMET_5,NET,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_5,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_polar_net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_polar_net_ns.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_321_polar_net_os: H_SPE_US_AB_Helmet_321_polar_net
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB No.1021 Net 1/2 (Open)";
		hiddenSelectionsTextures[] = {HELMET_4,NET,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_4,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_polar_net_os_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_polar_net_os.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	
	//scrimpy
	class H_SPE_US_AB_Helmet_321_Scrim: H_SPE_US_AB_Helmet_321
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB Scrim 1/2 (Close)";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
		hiddenSelectionsTextures[] = {HELMET_3,NET,SALAD_1,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_3,"",MTL_SALAD,""};
		hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		// camo - Helmet
		// camo0 - Net
		// camo1 - Scrim
		// pfak - pfak
		// Liner_erla - erla liner stra
		// Liner - liner strap
		// band - band duh!
		// jokes - A-yokes
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_cs_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_321_Scrim_2: H_SPE_US_AB_Helmet_321_Scrim
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB Scrim 1/2 (Close)";
		hiddenSelectionsTextures[] = {HELMET_2,NET,SALAD_2,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_2,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_cs_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_321_Scrim_up: H_SPE_US_AB_Helmet_321_Scrim
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB Scrim 1/2 (Hook)";
		hiddenSelectionsTextures[] = {HELMET_1,NET,SALAD_2,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_1,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Scrim_up_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_321_Scrim_os: H_SPE_US_AB_Helmet_321_Scrim
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB Scrim 1/2 (Open)";
		hiddenSelectionsTextures[] = {HELMET_4,NET,SALAD_1,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_4,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Scrim_os_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_321_Scrim_os_2: H_SPE_US_AB_Helmet_321_Scrim_os
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_5,NET,SALAD_2,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_5,"",MTL_SALAD,""}; 
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_321_Scrim_os_3: H_SPE_US_AB_Helmet_321_Scrim_os
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_2,NET,SALAD_1,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_2,"",MTL_SALAD,""}; 
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_3.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	
	class H_SPE_US_AB_Helmet_321_Scrim_ns: H_SPE_US_AB_Helmet_321_Scrim
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		displayName = "US M2 321GFAB Scrim 1/2 (Fold)";
		hiddenSelectionsTextures[] = {HELMET_3,NET,SALAD_1,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_3,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Scrim_ns_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_1.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_321_Scrim_ns_2: H_SPE_US_AB_Helmet_321_Scrim_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_2,NET,SALAD_2,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_2,"",MTL_SALAD,""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_321_Scrim_ns_3: H_SPE_US_AB_Helmet_321_Scrim_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_4,NET,SALAD_2,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_4,"",MTL_SALAD,""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_3.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_3.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_321_Scrim_ns_4: H_SPE_US_AB_Helmet_321_Scrim_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_5,NET,SALAD_1,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_5,"",MTL_SALAD,""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_321_Scrim_tilt_ns_1: H_SPE_US_AB_Helmet_321_Scrim_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_3,NET,SALAD_2,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_3,"",MTL_SALAD,""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_tilt_ns_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_321_Scrim_tilt_ns_2: H_SPE_US_AB_Helmet_321_Scrim_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_5,NET,SALAD_1,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_5,"",MTL_SALAD,""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_3.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_tilt_ns_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_Scrim: H_SPE_US_AB_Helmet_321_Scrim_os_3
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB NCO Scrim 1/2 (Open)";
		hiddenSelectionsTextures[] = {HELMET_2,NET,SALAD_2,""};
		hiddenSelectionsMaterials[] = {US_321_NCO_2,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_Scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_3.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_Scrim_ns: H_SPE_US_AB_Helmet_321_Scrim_ns_4
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB NCO Scrim 1/2 (Fold)";
		hiddenSelectionsTextures[] = {HELMET_1,NET,SALAD_1,""};
		hiddenSelectionsMaterials[] = {US_321_NCO_1,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_Scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_321_CO_Scrim: H_SPE_US_AB_Helmet_321_Scrim_2
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB Offz Scrim 1/2 (Close)";
		hiddenSelectionsTextures[] = {HELMET_1,NET,SALAD_1,""};
		hiddenSelectionsMaterials[] = {US_321_CO_1,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_scrim_ca.paa";
	    class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_cs_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_321_CO_Scrim_ns: H_SPE_US_AB_Helmet_321_Scrim_ns_3
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB Offz Scrim 1/2 (Fold)";
		hiddenSelectionsTextures[] = {HELMET_4,NET,SALAD_2,""};
		hiddenSelectionsMaterials[] = {US_321_CO_4,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_321_polar_Scrim: H_SPE_US_AB_Helmet_321_polar
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB No.1021 Scrim 1/2 (Close)";
		hiddenSelections[] = {"camo","camo0","camo1"};
		hiddenSelectionsTextures[] = {HELMET_1,NET,SALAD_2,"","",""};
		hiddenSelectionsMaterials[] = {US_321_1,"",MTL_SALAD};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_polar_Scrim_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_polar_net_ns.p3d"; 
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_polar_net_cs.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_321_polar_Scrim_ns: H_SPE_US_AB_Helmet_321_polar_Scrim
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB No.1021 Scrim 1/2 (Fold)";
		hiddenSelectionsTextures[] = {HELMET_5,NET,SALAD_1,"","",""};
		hiddenSelectionsMaterials[] = {US_321_5,"",MTL_SALAD};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_polar_Scrim_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_polar_net_ns.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_321_polar_Scrim_os: H_SPE_US_AB_Helmet_321_polar_Scrim
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB No.1021 Scrim 1/2 (Open)";
		hiddenSelectionsTextures[] = {HELMET_4,NET,SALAD_2,"","",""};
		hiddenSelectionsMaterials[] = {US_321_4,"",MTL_SALAD};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_polar_Scrim_os_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_polar_net_os.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	
	//netz 1/4
	class H_SPE_US_AB_Helmet_321_Net4: H_SPE_US_AB_Helmet_321
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB Net 1/4 (Close)";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
		hiddenSelectionsTextures[] = {HELMET_3,NET_4,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_laat_3,"","",""};
		hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		// camo - Helmet
		// camo0 - Net
		// camo1 - Scrim
		// pfak - pfak
		// Liner_erla - erla liner stra
		// Liner - liner strap
		// band - band duh!
		// jokes - A-yokes
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_cs_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_321_Net4_2: H_SPE_US_AB_Helmet_321_Net4
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB Net 1/4 (Close)";
		hiddenSelectionsTextures[] = {HELMET_2,NET_4,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_laat_2,"","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_cs_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_Net4_up: H_SPE_US_AB_Helmet_321_Net4
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB Net 1/4 (Hook)";
		hiddenSelectionsTextures[] = {HELMET_1,NET_4,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_laat_1,"","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Net_up_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_321_Net4_os: H_SPE_US_AB_Helmet_321_Net4
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB Net 1/4 (Open)";
		hiddenSelectionsTextures[] = {HELMET_4,NET_4,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_laat_4,"","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Net_os_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_1.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_Net4_os_2: H_SPE_US_AB_Helmet_321_Net4_os
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_5,NET_4,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_laat_5,"","",""}; 
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_Net4_os_3: H_SPE_US_AB_Helmet_321_Net4_os
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_2,NET_4,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_laat_2,"","",""}; 
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_3.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	
	class H_SPE_US_AB_Helmet_321_Net4_ns: H_SPE_US_AB_Helmet_321_Net4
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		displayName = "US M2 321GFAB Net 1/4 (Fold)";
		hiddenSelectionsTextures[] = {HELMET_3,NET_4,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_laat_3,"","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Net_ns_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_1.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_321_Net4_ns_2: H_SPE_US_AB_Helmet_321_Net4_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_2,NET_4,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_laat_2,"","",""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_Net4_ns_3: H_SPE_US_AB_Helmet_321_Net4_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_4,NET_4,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_laat_4,"","",""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_3.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_3.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_321_Net4_ns_4: H_SPE_US_AB_Helmet_321_Net4_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_5,NET_4,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_laat_5,"","",""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_Net4_tilt_ns_1: H_SPE_US_AB_Helmet_321_Net4_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_3,NET_4,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_laat_3,"","",""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_tilt_ns_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_321_Net4_tilt_ns_2: H_SPE_US_AB_Helmet_321_Net4_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_5,NET_4,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_laat_5,"","",""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_3.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_tilt_ns_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_net4: H_SPE_US_AB_Helmet_321_Net4_os_3
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB NCO Net 1/4 (Open)";
		hiddenSelectionsTextures[] = {HELMET_2,NET_4,""};
		hiddenSelectionsMaterials[] = {US_321_laat_NCO_2,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_3.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_net4_ns: H_SPE_US_AB_Helmet_321_Net4_ns_4
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB NCO Net 1/4 (Fold)";
		hiddenSelectionsTextures[] = {HELMET_1,NET_4,""};
		hiddenSelectionsMaterials[] = {US_321_laat_NCO_1,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_321_CO_Net4: H_SPE_US_AB_Helmet_321_Net4_2
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB Offz Net 1/4 (Close)";
		hiddenSelectionsTextures[] = {HELMET_2,NET_4,""};
		hiddenSelectionsMaterials[] = {US_321_laat_CO_2,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_CO_Net_ca.paa";
	//	class ItemInfo: ItemInfo
	//	{
	//		hiddenSelectionsTextures[] = {HELMET_1,"","","",CO,"",""};
	//	};
	};
	class H_SPE_US_AB_Helmet_321_CO_Net4_ns: H_SPE_US_AB_Helmet_321_Net4_ns_3
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB Offz Net 1/4 (Fold)";
		hiddenSelectionsTextures[] = {HELMET_4,NET_4,""};
		hiddenSelectionsMaterials[] = {US_321_laat_CO_4,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_CO_Net_ca.paa";
	//	class ItemInfo: ItemInfo
	//	{
	//		hiddenSelectionsTextures[] = {HELMET_1,"","","",CO,"",""};
	//	};
	};
	
	class H_SPE_US_AB_Helmet_321_polar_net4: H_SPE_US_AB_Helmet_321_polar
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB No.1021 Net 1/4 (Close)";
		hiddenSelectionsTextures[] = {HELMET_1,NET_4,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_laat_1,"",""};
		hiddenSelections[] = {"camo","camo0","camo1"};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_polar_net_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_polar_net_ns.p3d"; 
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_polar_net_cs.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_321_polar_net4_ns: H_SPE_US_AB_Helmet_321_polar_net4
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB No.1021 Net 1/4 (Fold)";
		hiddenSelectionsTextures[] = {HELMET_5,NET_4,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_laat_5,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_polar_net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_polar_net_ns.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_321_polar_net4_os: H_SPE_US_AB_Helmet_321_polar_net4
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB No.1021 Net 1/4 (Open)";
		hiddenSelectionsTextures[] = {HELMET_4,NET_4,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_laat_4,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_polar_net_os_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_polar_net_os.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	
	//scrimpy
	class H_SPE_US_AB_Helmet_321_Scrim4: H_SPE_US_AB_Helmet_321
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB Scrim 1/4 (Close)";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
		hiddenSelectionsTextures[] = {HELMET_3,NET_4,SALAD_1,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_laat_3,"",MTL_SALAD,""};
		hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		// camo - Helmet
		// camo0 - Net
		// camo1 - Scrim
		// pfak - pfak
		// Liner_erla - erla liner stra
		// Liner - liner strap
		// band - band duh!
		// jokes - A-yokes
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_cs_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_321_Scrim4_2: H_SPE_US_AB_Helmet_321_Scrim4
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB Scrim 1/4 (Close)";
		hiddenSelectionsTextures[] = {HELMET_2,NET_4,SALAD_2,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_laat_2,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_cs_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_321_Scrim4_up: H_SPE_US_AB_Helmet_321_Scrim4
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB Scrim 1/4 (Hook)";
		hiddenSelectionsTextures[] = {HELMET_1,NET_4,SALAD_2,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_laat_1,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Scrim_up_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_321_Scrim4_os: H_SPE_US_AB_Helmet_321_Scrim4
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB Scrim 1/4 (Open)";
		hiddenSelectionsTextures[] = {HELMET_4,NET_4,SALAD_1,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_laat_4,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Scrim_os_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_321_Scrim4_os_2: H_SPE_US_AB_Helmet_321_Scrim4_os
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_5,NET_4,SALAD_2,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_laat_5,"",MTL_SALAD,""}; 
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_321_Scrim4_os_3: H_SPE_US_AB_Helmet_321_Scrim4_os
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_2,NET_4,SALAD_1,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_laat_2,"",MTL_SALAD,""}; 
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_3.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	
	class H_SPE_US_AB_Helmet_321_Scrim4_ns: H_SPE_US_AB_Helmet_321_Scrim4
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		displayName = "US M2 321GFAB Scrim 1/4 (Fold)";
		hiddenSelectionsTextures[] = {HELMET_3,NET_4,SALAD_1,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_laat_3,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Scrim_ns_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_1.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_321_Scrim4_ns_2: H_SPE_US_AB_Helmet_321_Scrim4_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_2,NET_4,SALAD_2,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_laat_2,"",MTL_SALAD,""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_321_Scrim4_ns_3: H_SPE_US_AB_Helmet_321_Scrim4_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_4,NET_4,SALAD_2,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_laat_4,"",MTL_SALAD,""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_3.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_3.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_321_Scrim4_ns_4: H_SPE_US_AB_Helmet_321_Scrim4_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_5,NET_4,SALAD_1,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_laat_5,"",MTL_SALAD,""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_321_Scrim4_tilt_ns_1: H_SPE_US_AB_Helmet_321_Scrim4_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_3,NET_4,SALAD_2,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_laat_3,"",MTL_SALAD,""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_tilt_ns_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_321_Scrim4_tilt_ns_2: H_SPE_US_AB_Helmet_321_Scrim4_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_5,NET_4,SALAD_1,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_laat_5,"",MTL_SALAD,""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_3.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_tilt_ns_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_Scrim4: H_SPE_US_AB_Helmet_321_Scrim4_os_3
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB NCO Scrim 1/4 (Open)";
		hiddenSelectionsTextures[] = {HELMET_2,NET_4,SALAD_2,""};
		hiddenSelectionsMaterials[] = {US_321_laat_NCO_2,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_3.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_Scrim4_ns: H_SPE_US_AB_Helmet_321_Scrim4_ns_4
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB NCO Scrim 1/4 (Fold)";
		hiddenSelectionsTextures[] = {HELMET_5,NET_4,SALAD_1,""};
		hiddenSelectionsMaterials[] = {US_321_laat_NCO_5,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_321_CO_Scrim4: H_SPE_US_AB_Helmet_321_Scrim4_2
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB Offz Scrim 1/4 (Close)";
		hiddenSelectionsTextures[] = {HELMET_1,NET_4,SALAD_1,""};
		hiddenSelectionsMaterials[] = {US_321_laat_CO_1,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_scrim_ca.paa";
	//	class ItemInfo: ItemInfo
	//	{
	//		hiddenSelectionsTextures[] = {HELMET_1,"","","",CO,"",""};
	//	};
	};
	class H_SPE_US_AB_Helmet_321_CO_Scrim4_ns: H_SPE_US_AB_Helmet_321_Scrim4_ns_3
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB Offz Scrim 1/4 (Fold)";
		hiddenSelectionsTextures[] = {HELMET_3,NET_4,SALAD_2,""};
		hiddenSelectionsMaterials[] = {US_321_laat_CO_3,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_scrim_ca.paa";
	//	class ItemInfo: ItemInfo
	//	{
	//		hiddenSelectionsTextures[] = {HELMET_1,"","","",CO,"",""};
	//	};
	};
	class H_SPE_US_AB_Helmet_321_polar_Scrim4: H_SPE_US_AB_Helmet_321_polar
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB No.1021 Scrim 1/4 (Close)";
		hiddenSelections[] = {"camo","camo0","camo1"};
		hiddenSelectionsTextures[] = {HELMET_1,NET_4,SALAD_2,"","",""};
		hiddenSelectionsMaterials[] = {US_321_laat_1,"",MTL_SALAD};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_polar_scrim_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_polar_net_ns.p3d"; 
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_polar_net_cs.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_321_polar_Scrim4_ns: H_SPE_US_AB_Helmet_321_polar_Scrim4
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB No.1021 Scrim 1/4 (Fold)";
		hiddenSelectionsTextures[] = {HELMET_5,NET_4,SALAD_1,"","",""};
		hiddenSelectionsMaterials[] = {US_321_laat_5,"",MTL_SALAD};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_polar_Scrim_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_polar_net_ns.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_321_polar_Scrim4_os: H_SPE_US_AB_Helmet_321_polar_Scrim4
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB No.1021 Scrim 1/4 (Open)";
		hiddenSelectionsTextures[] = {HELMET_4,NET_4,SALAD_2,"","",""};
		hiddenSelectionsMaterials[] = {US_321_laat_4,"",MTL_SALAD};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_polar_Scrim_os_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_polar_net_os.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	
	
	  
	//pfuck
	class H_SPE_US_AB_Helmet_321_PFAK: H_SPE_US_AB_Helmet_321
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB PFAK (Close)";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
		hiddenSelectionsTextures[] = {HELMET_3,NET_4,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_laat_3,"","",""};
		hiddenSelections[] = {"camo","camo0","camo1"};
		// camo - Helmet
		// camo0 - Net
		// camo1 - Scrim
		// pfak - pfak
		// Liner_erla - erla liner stra
		// Liner - liner strap
		// band - band duh!
		// jokes - A-yokes
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_cs_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_321_PFAK_2: H_SPE_US_AB_Helmet_321_PFAK
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB PFAK (Close)";
		hiddenSelectionsTextures[] = {HELMET_2,NET_4,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_laat_2,"","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_cs_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_PFAK_up: H_SPE_US_AB_Helmet_321_PFAK
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB PFAK (Hook)";
		hiddenSelectionsTextures[] = {HELMET_1,NET_4,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_laat_1,"","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Net_up_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_321_PFAK_os: H_SPE_US_AB_Helmet_321_PFAK
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB PFAK (Open)";
		hiddenSelectionsTextures[] = {HELMET_4,NET_4,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_laat_4,"","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Net_os_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_1.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_PFAK_os_2: H_SPE_US_AB_Helmet_321_PFAK_os
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_5,NET_4,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_laat_5,"","",""}; 
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_PFAK_os_3: H_SPE_US_AB_Helmet_321_PFAK_os
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_2,NET_4,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_laat_2,"","",""}; 
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_3.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","jokes"};
		};
	};
	
	class H_SPE_US_AB_Helmet_321_PFAK_ns: H_SPE_US_AB_Helmet_321_PFAK
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		displayName = "US M2 321GFAB PFAK (Fold)";
		hiddenSelectionsTextures[] = {HELMET_3,NET_4,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_laat_3,"","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Net_ns_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_1.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_321_PFAK_ns_2: H_SPE_US_AB_Helmet_321_PFAK_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_2,NET_4,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_laat_2,"","",""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_PFAK_ns_3: H_SPE_US_AB_Helmet_321_PFAK_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_4,NET_4,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_laat_4,"","",""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_3.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_3.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_321_PFAK_ns_4: H_SPE_US_AB_Helmet_321_PFAK_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_5,NET_4,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_laat_5,"","",""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_PFAK_tilt_ns_1: H_SPE_US_AB_Helmet_321_PFAK_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_3,NET_4,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_laat_3,"","",""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_tilt_ns_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_321_PFAK_tilt_ns_2: H_SPE_US_AB_Helmet_321_PFAK_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_5,NET_4,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_laat_5,"","",""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_3.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_tilt_ns_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_PFAK: H_SPE_US_AB_Helmet_321_PFAK_os_3
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB NCO PFAK (Open)";
		hiddenSelectionsTextures[] = {HELMET_2,NET_4,""};
		hiddenSelectionsMaterials[] = {US_321_laat_NCO_2,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_3.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_PFAK_ns: H_SPE_US_AB_Helmet_321_PFAK_ns_4
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB NCO PFAK (Fold)";
		hiddenSelectionsTextures[] = {HELMET_1,NET_4,""};
		hiddenSelectionsMaterials[] = {US_321_laat_NCO_1,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_321_CO_PFAK: H_SPE_US_AB_Helmet_321_PFAK_2
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB Offz PFAK (Close)";
		hiddenSelectionsTextures[] = {HELMET_2,NET_4,""};
		hiddenSelectionsMaterials[] = {US_321_laat_CO_2,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_CO_Net_ca.paa";
	//	class ItemInfo: ItemInfo
	//	{
	//		hiddenSelectionsTextures[] = {HELMET_1,"","","",CO,"",""};
	//	};
	};
	class H_SPE_US_AB_Helmet_321_CO_PFAK_ns: H_SPE_US_AB_Helmet_321_PFAK_ns_3
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB Offz PFAK (Fold)";
		hiddenSelectionsTextures[] = {HELMET_4,NET_4,""};
		hiddenSelectionsMaterials[] = {US_321_laat_CO_4,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_CO_Net_ca.paa";
	//	class ItemInfo: ItemInfo
	//	{
	//		hiddenSelectionsTextures[] = {HELMET_1,"","","",CO,"",""};
	//	};
	};
	 
	
	//scrimpy
	class H_SPE_US_AB_Helmet_321_PFAK_Scrim: H_SPE_US_AB_Helmet_321
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB Scrim PFAK (Close)";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
		hiddenSelectionsTextures[] = {HELMET_3,NET_4,SALAD_1,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_laat_3,"",MTL_SALAD,""};
		hiddenSelections[] = {"camo","camo0","camo1"};
		// camo - Helmet
		// camo0 - Net
		// camo1 - Scrim
		// pfak - pfak
		// Liner_erla - erla liner stra
		// Liner - liner strap
		// band - band duh!
		// jokes - A-yokes
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_cs_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_321_PFAK_Scrim_2: H_SPE_US_AB_Helmet_321_PFAK_Scrim
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB Scrim PFAK (Close)";
		hiddenSelectionsTextures[] = {HELMET_2,NET_4,SALAD_2,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_laat_2,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_cs_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_321_PFAK_Scrim_up: H_SPE_US_AB_Helmet_321_PFAK_Scrim
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB Scrim PFAK (Hook)";
		hiddenSelectionsTextures[] = {HELMET_1,NET_4,SALAD_2,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_laat_1,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Scrim_up_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_321_PFAK_Scrim_os: H_SPE_US_AB_Helmet_321_PFAK_Scrim
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB Scrim PFAK (Open)";
		hiddenSelectionsTextures[] = {HELMET_4,NET_4,SALAD_1,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_laat_4,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Scrim_os_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_321_PFAK_Scrim_os_2: H_SPE_US_AB_Helmet_321_PFAK_Scrim_os
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_5,NET_4,SALAD_2,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_laat_5,"",MTL_SALAD,""}; 
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_321_PFAK_Scrim_os_3: H_SPE_US_AB_Helmet_321_PFAK_Scrim_os
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_2,NET_4,SALAD_1,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_laat_2,"",MTL_SALAD,""}; 
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_3.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","jokes"};
		};
	};
	
	class H_SPE_US_AB_Helmet_321_PFAK_Scrim_ns: H_SPE_US_AB_Helmet_321_PFAK_Scrim
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		displayName = "US M2 321GFAB Scrim PFAK (Fold)";
		hiddenSelectionsTextures[] = {HELMET_3,NET_4,SALAD_1,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_laat_3,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Scrim_ns_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_1.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_321_PFAK_Scrim_ns_2: H_SPE_US_AB_Helmet_321_PFAK_Scrim_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_2,NET_4,SALAD_2,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_laat_2,"",MTL_SALAD,""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_321_PFAK_Scrim_ns_3: H_SPE_US_AB_Helmet_321_PFAK_Scrim_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_4,NET_4,SALAD_2,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_laat_4,"",MTL_SALAD,""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_3.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_3.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_321_PFAK_Scrim_ns_4: H_SPE_US_AB_Helmet_321_PFAK_Scrim_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_5,NET_4,SALAD_1,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_laat_5,"",MTL_SALAD,""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_321_PFAK_Scrim_tilt_ns_1: H_SPE_US_AB_Helmet_321_PFAK_Scrim_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_3,NET_4,SALAD_2,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_laat_3,"",MTL_SALAD,""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_tilt_ns_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_321_PFAK_Scrim_tilt_ns_2: H_SPE_US_AB_Helmet_321_PFAK_Scrim_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_5,NET_4,SALAD_1,"","","",""};
		hiddenSelectionsMaterials[] = {US_321_laat_5,"",MTL_SALAD,""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_3.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_tilt_ns_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_PFAK_Scrim: H_SPE_US_AB_Helmet_321_PFAK_Scrim_os_3
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB NCO Scrim PFAK (Open)";
		hiddenSelectionsTextures[] = {HELMET_2,NET_4,SALAD_2,""};
		hiddenSelectionsMaterials[] = {US_321_laat_NCO_2,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_3.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_PFAK_Scrim_ns: H_SPE_US_AB_Helmet_321_PFAK_Scrim_ns_4
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB NCO Scrim PFAK (Fold)";
		hiddenSelectionsTextures[] = {HELMET_5,NET_4,SALAD_1,""};
		hiddenSelectionsMaterials[] = {US_321_laat_NCO_5,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_321_CO_PFAK_Scrim: H_SPE_US_AB_Helmet_321_PFAK_Scrim_2
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB Offz Scrim PFAK (Close)";
		hiddenSelectionsTextures[] = {HELMET_1,NET_4,SALAD_1,""};
		hiddenSelectionsMaterials[] = {US_321_laat_CO_1,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_scrim_ca.paa";
	//	class ItemInfo: ItemInfo
	//	{
	//		hiddenSelectionsTextures[] = {HELMET_1,"","","",CO,"",""};
	//	};
	};
	class H_SPE_US_AB_Helmet_321_CO_PFAK_Scrim_ns: H_SPE_US_AB_Helmet_321_PFAK_Scrim_ns_3
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 321GFAB Offz Scrim PFAK (Fold)";
		hiddenSelectionsTextures[] = {HELMET_3,NET_4,SALAD_2,""};
		hiddenSelectionsMaterials[] = {US_321_laat_CO_3,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_scrim_ca.paa";
	//	class ItemInfo: ItemInfo
	//	{
	//		hiddenSelectionsTextures[] = {HELMET_1,"","","",CO,"",""};
	//	};
	}; 