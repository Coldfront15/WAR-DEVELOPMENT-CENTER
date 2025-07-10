

	#define US_502_1 "simc_lcd_44_eden\MTL\US_Pot_1_502.rvmat"	  
	#define US_502_2 "simc_lcd_44_eden\MTL\US_Pot_2_502.rvmat"	  
	#define US_502_3 "simc_lcd_44_eden\MTL\US_Pot_3_502.rvmat"
	#define US_502_4 "simc_lcd_44_eden\MTL\US_Pot_4_502.rvmat"
	#define US_502_5 "simc_lcd_44_eden\MTL\US_Pot_5_502.rvmat"
	
	#define US_502_NCO_1 "simc_lcd_44_eden\MTL\US_Pot_1_502_NCO.rvmat"
	#define US_502_NCO_2 "simc_lcd_44_eden\MTL\US_Pot_2_502_NCO.rvmat"
	#define US_502_NCO_3 "simc_lcd_44_eden\MTL\US_Pot_3_502_NCO.rvmat"
	#define US_502_NCO_4 "simc_lcd_44_eden\MTL\US_Pot_4_502_NCO.rvmat"
	#define US_502_NCO_5 "simc_lcd_44_eden\MTL\US_Pot_5_502_NCO.rvmat"
	  	  
	#define US_502_CO_1 "simc_lcd_44_eden\MTL\US_Pot_1_502_CO.rvmat"  
	#define US_502_CO_2 "simc_lcd_44_eden\MTL\US_Pot_2_502_CO.rvmat"  
	#define US_502_CO_3 "simc_lcd_44_eden\MTL\US_Pot_3_502_CO.rvmat"  
	#define US_502_CO_4 "simc_lcd_44_eden\MTL\US_Pot_4_502_CO.rvmat"  
	#define US_502_CO_5 "simc_lcd_44_eden\MTL\US_Pot_5_502_CO.rvmat"  
	
	#define US_502_laat_1 "simc_lcd_44_eden\MTL\US_Pot_1_502_laat.rvmat"	  
	#define US_502_laat_2 "simc_lcd_44_eden\MTL\US_Pot_2_502_laat.rvmat"	  
	#define US_502_laat_3 "simc_lcd_44_eden\MTL\US_Pot_3_502_laat.rvmat"
	#define US_502_laat_4 "simc_lcd_44_eden\MTL\US_Pot_4_502_laat.rvmat"
	#define US_502_laat_5 "simc_lcd_44_eden\MTL\US_Pot_5_502_laat.rvmat"
	
	#define US_502_laat_NCO_1 "simc_lcd_44_eden\MTL\US_Pot_1_502_laat_NCO.rvmat"
	#define US_502_laat_NCO_2 "simc_lcd_44_eden\MTL\US_Pot_2_502_laat_NCO.rvmat"
	#define US_502_laat_NCO_3 "simc_lcd_44_eden\MTL\US_Pot_3_502_laat_NCO.rvmat"
	#define US_502_laat_NCO_4 "simc_lcd_44_eden\MTL\US_Pot_4_502_laat_NCO.rvmat"
	#define US_502_laat_NCO_5 "simc_lcd_44_eden\MTL\US_Pot_5_502_laat_NCO.rvmat"
	  	  
	#define US_502_laat_CO_1 "simc_lcd_44_eden\MTL\US_Pot_1_502_laat_CO.rvmat"  
	#define US_502_laat_CO_2 "simc_lcd_44_eden\MTL\US_Pot_2_502_laat_CO.rvmat"  
	#define US_502_laat_CO_3 "simc_lcd_44_eden\MTL\US_Pot_3_502_laat_CO.rvmat"  
	#define US_502_laat_CO_4 "simc_lcd_44_eden\MTL\US_Pot_4_502_laat_CO.rvmat"  
	#define US_502_laat_CO_5 "simc_lcd_44_eden\MTL\US_Pot_5_502_laat_CO.rvmat"  

	class H_SPE_US_AB_Helmet_502: H_SPE_US_Helmet
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		scope = 2;
		displayName = "US M2 502PIR (Close)";
		model = "\simc_lcd_42\lcd_us_helmet_m2_NS.p3d";
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_ca.paa";
		hiddenSelections[] = {"camo","camo0","camo1","jokes"};
		hiddenSelectionsTextures[] = {HELMET_1,"","","","",""};
		hiddenSelectionsMaterials[] = {US_502_1,"","","","",""};
		class ItemInfo: ItemInfo
		{
			mass = 30;
			uniformmodel = "\simc_lcd_42\lcd_us_helmet_m2_CS.p3d";
			modelSides[] = {6}; 
		};
	};
	class H_SPE_US_AB_Helmet_502_43: H_SPE_US_AB_Helmet_502
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR (Close)";
		hiddenSelectionsTextures[] = {HELMET_2,"","","","",""};
		hiddenSelectionsMaterials[] = {US_502_2,"","","","",""};
		hiddenSelections[] = {"camo","band","jokes"};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "\simc_lcd_42\lcd_us_helmet_m2_cs.p3d";
			hiddenSelections[] = {"camo","band","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_502_ns: H_SPE_US_AB_Helmet_502
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US M2 502PIR (Fold)";
		hiddenSelectionsTextures[] = {HELMET_4,"","","","",""};
		hiddenSelectionsMaterials[] = {US_502_4,"","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "\simc_lcd_42\lcd_us_helmet_m2_NS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_ns_43: H_SPE_US_AB_Helmet_502_ns
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US M2 502PIR (Fold)";
		hiddenSelections[] = {"camo","band","jokes"};
		hiddenSelectionsTextures[] = {HELMET_3,"","","","",""};
		hiddenSelectionsMaterials[] = {US_502_3,"","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "\simc_lcd_42\lcd_us_helmet_m2_NS.p3d";
			hiddenSelections[] = {"camo","band","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_502_os: H_SPE_US_AB_Helmet_502
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US M2 502PIR (Open)";
		hiddenSelectionsTextures[] = {HELMET_5,"","","","",""};
		hiddenSelectionsMaterials[] = {US_502_5,"","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_os_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "\simc_lcd_42\lcd_us_helmet_m2_OS.p3d";
			hiddenSelections[] = {"camo","band","jokes","liner","liner_erla"};
		};
	};
	class H_SPE_US_AB_Helmet_502_os_42: H_SPE_US_AB_Helmet_502_os
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR (Open)";
		hiddenSelectionsTextures[] = {HELMET_4,"","","","",""};
		hiddenSelectionsMaterials[] = {US_502_4,"","","","",""};
		hiddenSelections[] = {"camo","band","jokes","liner_erla"};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_os_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "\simc_lcd_42\lcd_us_helmet_m2_OS.p3d";
			hiddenSelections[] = {"camo","band","liner_erla"};
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO: H_SPE_US_AB_Helmet_502
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US M2 502PIR NCO (Close)";
		hiddenSelectionsTextures[] = {HELMET_3,"","","","",""};
		hiddenSelectionsMaterials[] = {US_502_NCO_3,"","","","",""}; 
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_NCO_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "\simc_lcd_42\lcd_us_helmet_m2_cs.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_ns: H_SPE_US_AB_Helmet_502_NCO
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US M2 502PIR NCO (Open)";
		hiddenSelectionsTextures[] = {HELMET_5,"","","","",""};
		hiddenSelectionsMaterials[] = {US_502_NCO_5,"","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_NCO_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "\simc_lcd_42\lcd_us_helmet_m2_OS.p3d";
			hiddenSelections[] = {"camo","band","jokes","liner","liner_erla"};
		};
	};
	class H_SPE_US_AB_Helmet_502_CO: H_SPE_US_AB_Helmet_502
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US M2 502PIR Offz (Close)";
		hiddenSelectionsTextures[] = {HELMET_3,"","","","",""};
		hiddenSelectionsMaterials[] = {US_502_CO_3,"",""};
			hiddenSelections[] = {"camo","band","jokes"};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_CO_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "\simc_lcd_42\lcd_us_helmet_m2_CS.p3d";
			hiddenSelections[] = {"camo","band"};
		};
	};
	class H_SPE_US_AB_Helmet_502_CO_ns: H_SPE_US_AB_Helmet_502_CO
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US M2 502PIR Offz (Fold)";
		hiddenSelectionsTextures[] = {HELMET_2,"","","","",""};
		hiddenSelectionsMaterials[] = {US_502_CO_2,"",""};
		hiddenSelections[] = {"camo","band","jokes"};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_CO_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "\simc_lcd_42\lcd_us_helmet_m2_ns.p3d";
			hiddenSelections[] = {"camo","band","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_502_polar: H_SPE_US_AB_Helmet_502
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		scope = 2;
		displayName = "US M2 502PIR No.1021 (Close)";
		hiddenSelectionsTextures[] = {HELMET_4,"","","","",""};
		hiddenSelectionsMaterials[] = {US_502_4,"",""};
		model = "\simc_lcd_42\lcd_us_helmet_m2_polar_NS.p3d";
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_polar_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "\simc_lcd_42\lcd_us_helmet_m2_polar_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_polar_ns: H_SPE_US_AB_Helmet_502_polar
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US M2 502PIR No.1021 (Fold)";
		hiddenSelectionsTextures[] = {HELMET_3,"","","","",""};
		hiddenSelectionsMaterials[] = {US_502_3,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_polar_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "\simc_lcd_42\lcd_us_helmet_m2_polar_NS.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_502_polar_os: H_SPE_US_AB_Helmet_502_polar
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US M2 502PIR No.1021 (Open)";
		hiddenSelectionsTextures[] = {HELMET_2,"","","","",""};
		hiddenSelectionsMaterials[] = {US_502_2,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_polar_os_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "\simc_lcd_42\lcd_us_helmet_m2_polar_OS.p3d";
		};
	};
	
	
	class H_SPE_US_AB_Helmet_502_Net: H_SPE_US_AB_Helmet_502
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR Net 1/2 (Close)";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
		hiddenSelectionsTextures[] = {HELMET_3,NET,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_3,"","",""};
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
	class H_SPE_US_AB_Helmet_502_Net_2: H_SPE_US_AB_Helmet_502_Net
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR Net 1/2 (Close)";
		hiddenSelectionsTextures[] = {HELMET_2,NET,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_2,"","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_cs_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_502_Net_up: H_SPE_US_AB_Helmet_502_Net
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR Net 1/2 (Hook)";
		hiddenSelectionsTextures[] = {HELMET_1,NET,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_1,"","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Net_up_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_502_Net_os: H_SPE_US_AB_Helmet_502_Net
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR Net 1/2 (Open)";
		hiddenSelectionsTextures[] = {HELMET_4,NET,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_4,"","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Net_os_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_502_Net_os_2: H_SPE_US_AB_Helmet_502_Net_os
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_5,NET,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_5,"","",""}; 
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_502_Net_os_3: H_SPE_US_AB_Helmet_502_Net_os
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_2,NET,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_2,"","",""}; 
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_3.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	
	class H_SPE_US_AB_Helmet_502_Net_ns: H_SPE_US_AB_Helmet_502_Net
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		displayName = "US M2 502PIR Net 1/2 (Fold)";
		hiddenSelectionsTextures[] = {HELMET_3,NET,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_3,"","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Net_ns_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_1.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_502_Net_ns_2: H_SPE_US_AB_Helmet_502_Net_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_2,NET,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_2,"","",""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_502_Net_ns_3: H_SPE_US_AB_Helmet_502_Net_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_4,NET,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_4,"","",""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_3.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_3.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_502_Net_ns_4: H_SPE_US_AB_Helmet_502_Net_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_5,NET,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_5,"","",""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_502_Net_tilt_ns_1: H_SPE_US_AB_Helmet_502_Net_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_3,NET,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_3,"","",""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_tilt_ns_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_502_Net_tilt_ns_2: H_SPE_US_AB_Helmet_502_Net_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_5,NET,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_5,"","",""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_3.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_tilt_ns_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_net: H_SPE_US_AB_Helmet_502_Net_os_3
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR NCO Net 1/2 (Open)";
		hiddenSelectionsTextures[] = {HELMET_2,NET,""};
		hiddenSelectionsMaterials[] = {US_502_NCO_2,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_3.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_net_ns: H_SPE_US_AB_Helmet_502_Net_ns_4
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR NCO Net 1/2 (Fold)";
		hiddenSelectionsTextures[] = {HELMET_4,NET,""};
		hiddenSelectionsMaterials[] = {US_502_NCO_4,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_502_CO_Net: H_SPE_US_AB_Helmet_502_Net_2
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR Offz Net 1/2 (Close)";
		hiddenSelectionsTextures[] = {HELMET_1,NET,""};
		hiddenSelectionsMaterials[] = {US_502_CO_1,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_CO_Net_ca.paa";
	//	class ItemInfo: ItemInfo
	//	{
	//		hiddenSelectionsTextures[] = {HELMET_1,"","","",CO,"",""};
	//	};
	};
	class H_SPE_US_AB_Helmet_502_CO_Net_ns: H_SPE_US_AB_Helmet_502_Net_ns_3
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR Offz Net 1/2 (Fold)";
		hiddenSelectionsTextures[] = {HELMET_3,NET,""};
		hiddenSelectionsMaterials[] = {US_502_CO_3,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_CO_Net_ca.paa";
	//	class ItemInfo: ItemInfo
	//	{
	//		hiddenSelectionsTextures[] = {HELMET_1,"","","",CO,"",""};
	//	};
	};
	
	class H_SPE_US_AB_Helmet_502_polar_net: H_SPE_US_AB_Helmet_502_polar
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR No.1021 Net 1/2 (Close)";
		hiddenSelections[] = {"camo","camo0","camo1"};
		hiddenSelectionsTextures[] = {HELMET_1,NET,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_1,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_polar_net_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_polar_net_ns.p3d"; 
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_polar_net_cs.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_502_polar_net_ns: H_SPE_US_AB_Helmet_502_polar_net
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR No.1021 Net 1/2 (Fold)";
		hiddenSelectionsTextures[] = {HELMET_5,NET,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_5,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_polar_net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_polar_net_ns.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_502_polar_net_os: H_SPE_US_AB_Helmet_502_polar_net
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR No.1021 Net 1/2 (Open)";
		hiddenSelectionsTextures[] = {HELMET_4,NET,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_4,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_polar_net_os_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_polar_net_os.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	
	//scrimpy
	class H_SPE_US_AB_Helmet_502_Scrim: H_SPE_US_AB_Helmet_502
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR Scrim 1/2 (Close)";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
		hiddenSelectionsTextures[] = {HELMET_3,NET,SALAD_1,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_3,"",MTL_SALAD,""};
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
	class H_SPE_US_AB_Helmet_502_Scrim_2: H_SPE_US_AB_Helmet_502_Scrim
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR Scrim 1/2 (Close)";
		hiddenSelectionsTextures[] = {HELMET_2,NET,SALAD_2,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_2,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_cs_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_502_Scrim_up: H_SPE_US_AB_Helmet_502_Scrim
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR Scrim 1/2 (Hook)";
		hiddenSelectionsTextures[] = {HELMET_1,NET,SALAD_2,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_1,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Scrim_up_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_502_Scrim_os: H_SPE_US_AB_Helmet_502_Scrim
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR Scrim 1/2 (Open)";
		hiddenSelectionsTextures[] = {HELMET_4,NET,SALAD_1,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_4,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Scrim_os_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_502_Scrim_os_2: H_SPE_US_AB_Helmet_502_Scrim_os
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_5,NET,SALAD_2,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_5,"",MTL_SALAD,""}; 
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_502_Scrim_os_3: H_SPE_US_AB_Helmet_502_Scrim_os
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_2,NET,SALAD_1,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_2,"",MTL_SALAD,""}; 
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_3.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	
	class H_SPE_US_AB_Helmet_502_Scrim_ns: H_SPE_US_AB_Helmet_502_Scrim
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		displayName = "US M2 502PIR Scrim 1/2 (Fold)";
		hiddenSelectionsTextures[] = {HELMET_3,NET,SALAD_1,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_3,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Scrim_ns_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_1.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_502_Scrim_ns_2: H_SPE_US_AB_Helmet_502_Scrim_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_2,NET,SALAD_2,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_2,"",MTL_SALAD,""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_502_Scrim_ns_3: H_SPE_US_AB_Helmet_502_Scrim_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_4,NET,SALAD_2,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_4,"",MTL_SALAD,""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_3.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_3.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_502_Scrim_ns_4: H_SPE_US_AB_Helmet_502_Scrim_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_5,NET,SALAD_1,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_5,"",MTL_SALAD,""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_502_Scrim_tilt_ns_1: H_SPE_US_AB_Helmet_502_Scrim_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_3,NET,SALAD_2,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_3,"",MTL_SALAD,""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_tilt_ns_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_502_Scrim_tilt_ns_2: H_SPE_US_AB_Helmet_502_Scrim_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_5,NET,SALAD_1,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_5,"",MTL_SALAD,""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_3.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_tilt_ns_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Scrim: H_SPE_US_AB_Helmet_502_Scrim_os_3
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR NCO Scrim 1/2 (Open)";
		hiddenSelectionsTextures[] = {HELMET_2,NET,SALAD_2,""};
		hiddenSelectionsMaterials[] = {US_502_NCO_2,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_Scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_3.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Scrim_ns: H_SPE_US_AB_Helmet_502_Scrim_ns_4
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR NCO Scrim 1/2 (Fold)";
		hiddenSelectionsTextures[] = {HELMET_1,NET,SALAD_1,""};
		hiddenSelectionsMaterials[] = {US_502_NCO_1,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_Scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_502_CO_Scrim: H_SPE_US_AB_Helmet_502_Scrim_2
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR Offz Scrim 1/2 (Close)";
		hiddenSelectionsTextures[] = {HELMET_1,NET,SALAD_1,""};
		hiddenSelectionsMaterials[] = {US_502_CO_1,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_scrim_ca.paa";
	    class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_cs_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_502_CO_Scrim_ns: H_SPE_US_AB_Helmet_502_Scrim_ns_3
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR Offz Scrim 1/2 (Fold)";
		hiddenSelectionsTextures[] = {HELMET_4,NET,SALAD_2,""};
		hiddenSelectionsMaterials[] = {US_502_CO_4,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_502_polar_Scrim: H_SPE_US_AB_Helmet_502_polar
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR No.1021 Scrim 1/2 (Close)";
		hiddenSelections[] = {"camo","camo0","camo1"};
		hiddenSelectionsTextures[] = {HELMET_1,NET,SALAD_2,"","",""};
		hiddenSelectionsMaterials[] = {US_502_1,"",MTL_SALAD};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_polar_Scrim_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_polar_net_ns.p3d"; 
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_polar_net_cs.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_502_polar_Scrim_ns: H_SPE_US_AB_Helmet_502_polar_Scrim
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR No.1021 Scrim 1/2 (Fold)";
		hiddenSelectionsTextures[] = {HELMET_5,NET,SALAD_1,"","",""};
		hiddenSelectionsMaterials[] = {US_502_5,"",MTL_SALAD};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_polar_Scrim_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_polar_net_ns.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_502_polar_Scrim_os: H_SPE_US_AB_Helmet_502_polar_Scrim
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR No.1021 Scrim 1/2 (Open)";
		hiddenSelectionsTextures[] = {HELMET_4,NET,SALAD_2,"","",""};
		hiddenSelectionsMaterials[] = {US_502_4,"",MTL_SALAD};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_polar_Scrim_os_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_polar_net_os.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	
	//netz 1/4
	class H_SPE_US_AB_Helmet_502_Net4: H_SPE_US_AB_Helmet_502
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR Net 1/4 (Close)";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
		hiddenSelectionsTextures[] = {HELMET_3,NET_4,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_laat_3,"","",""};
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
	class H_SPE_US_AB_Helmet_502_Net4_2: H_SPE_US_AB_Helmet_502_Net4
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR Net 1/4 (Close)";
		hiddenSelectionsTextures[] = {HELMET_2,NET_4,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_laat_2,"","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_cs_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_Net4_up: H_SPE_US_AB_Helmet_502_Net4
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR Net 1/4 (Hook)";
		hiddenSelectionsTextures[] = {HELMET_1,NET_4,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_laat_1,"","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Net_up_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_502_Net4_os: H_SPE_US_AB_Helmet_502_Net4
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR Net 1/4 (Open)";
		hiddenSelectionsTextures[] = {HELMET_4,NET_4,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_laat_4,"","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Net_os_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_1.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_Net4_os_2: H_SPE_US_AB_Helmet_502_Net4_os
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_5,NET_4,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_laat_5,"","",""}; 
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_Net4_os_3: H_SPE_US_AB_Helmet_502_Net4_os
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_2,NET_4,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_laat_2,"","",""}; 
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_3.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	
	class H_SPE_US_AB_Helmet_502_Net4_ns: H_SPE_US_AB_Helmet_502_Net4
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		displayName = "US M2 502PIR Net 1/4 (Fold)";
		hiddenSelectionsTextures[] = {HELMET_3,NET_4,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_laat_3,"","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Net_ns_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_1.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_502_Net4_ns_2: H_SPE_US_AB_Helmet_502_Net4_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_2,NET_4,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_laat_2,"","",""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_Net4_ns_3: H_SPE_US_AB_Helmet_502_Net4_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_4,NET_4,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_laat_4,"","",""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_3.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_3.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_502_Net4_ns_4: H_SPE_US_AB_Helmet_502_Net4_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_5,NET_4,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_laat_5,"","",""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_Net4_tilt_ns_1: H_SPE_US_AB_Helmet_502_Net4_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_3,NET_4,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_laat_3,"","",""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_tilt_ns_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_502_Net4_tilt_ns_2: H_SPE_US_AB_Helmet_502_Net4_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_5,NET_4,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_laat_5,"","",""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_3.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_tilt_ns_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_net4: H_SPE_US_AB_Helmet_502_Net4_os_3
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR NCO Net 1/4 (Open)";
		hiddenSelectionsTextures[] = {HELMET_2,NET_4,""};
		hiddenSelectionsMaterials[] = {US_502_laat_NCO_2,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_3.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_net4_ns: H_SPE_US_AB_Helmet_502_Net4_ns_4
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR NCO Net 1/4 (Fold)";
		hiddenSelectionsTextures[] = {HELMET_1,NET_4,""};
		hiddenSelectionsMaterials[] = {US_502_laat_NCO_1,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_502_CO_Net4: H_SPE_US_AB_Helmet_502_Net4_2
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR Offz Net 1/4 (Close)";
		hiddenSelectionsTextures[] = {HELMET_2,NET_4,""};
		hiddenSelectionsMaterials[] = {US_502_laat_CO_2,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_CO_Net_ca.paa";
	//	class ItemInfo: ItemInfo
	//	{
	//		hiddenSelectionsTextures[] = {HELMET_1,"","","",CO,"",""};
	//	};
	};
	class H_SPE_US_AB_Helmet_502_CO_Net4_ns: H_SPE_US_AB_Helmet_502_Net4_ns_3
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR Offz Net 1/4 (Fold)";
		hiddenSelectionsTextures[] = {HELMET_4,NET_4,""};
		hiddenSelectionsMaterials[] = {US_502_laat_CO_4,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_CO_Net_ca.paa";
	//	class ItemInfo: ItemInfo
	//	{
	//		hiddenSelectionsTextures[] = {HELMET_1,"","","",CO,"",""};
	//	};
	};
	
	class H_SPE_US_AB_Helmet_502_polar_net4: H_SPE_US_AB_Helmet_502_polar
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR No.1021 Net 1/4 (Close)";
		hiddenSelectionsTextures[] = {HELMET_1,NET_4,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_laat_1,"",""};
		hiddenSelections[] = {"camo","camo0","camo1"};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_polar_net_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_polar_net_ns.p3d"; 
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_polar_net_cs.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_502_polar_net4_ns: H_SPE_US_AB_Helmet_502_polar_net4
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR No.1021 Net 1/4 (Fold)";
		hiddenSelectionsTextures[] = {HELMET_5,NET_4,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_laat_5,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_polar_net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_polar_net_ns.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_502_polar_net4_os: H_SPE_US_AB_Helmet_502_polar_net4
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR No.1021 Net 1/4 (Open)";
		hiddenSelectionsTextures[] = {HELMET_4,NET_4,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_laat_4,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_polar_net_os_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_polar_net_os.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	
	//scrimpy
	class H_SPE_US_AB_Helmet_502_Scrim4: H_SPE_US_AB_Helmet_502
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR Scrim 1/4 (Close)";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
		hiddenSelectionsTextures[] = {HELMET_3,NET_4,SALAD_1,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_laat_3,"",MTL_SALAD,""};
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
	class H_SPE_US_AB_Helmet_502_Scrim4_2: H_SPE_US_AB_Helmet_502_Scrim4
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR Scrim 1/4 (Close)";
		hiddenSelectionsTextures[] = {HELMET_2,NET_4,SALAD_2,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_laat_2,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_cs_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_502_Scrim4_up: H_SPE_US_AB_Helmet_502_Scrim4
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR Scrim 1/4 (Hook)";
		hiddenSelectionsTextures[] = {HELMET_1,NET_4,SALAD_2,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_laat_1,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Scrim_up_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_502_Scrim4_os: H_SPE_US_AB_Helmet_502_Scrim4
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR Scrim 1/4 (Open)";
		hiddenSelectionsTextures[] = {HELMET_4,NET_4,SALAD_1,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_laat_4,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Scrim_os_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_502_Scrim4_os_2: H_SPE_US_AB_Helmet_502_Scrim4_os
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_5,NET_4,SALAD_2,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_laat_5,"",MTL_SALAD,""}; 
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_502_Scrim4_os_3: H_SPE_US_AB_Helmet_502_Scrim4_os
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_2,NET_4,SALAD_1,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_laat_2,"",MTL_SALAD,""}; 
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_3.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	
	class H_SPE_US_AB_Helmet_502_Scrim4_ns: H_SPE_US_AB_Helmet_502_Scrim4
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		displayName = "US M2 502PIR Scrim 1/4 (Fold)";
		hiddenSelectionsTextures[] = {HELMET_3,NET_4,SALAD_1,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_laat_3,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Scrim_ns_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_1.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_502_Scrim4_ns_2: H_SPE_US_AB_Helmet_502_Scrim4_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_2,NET_4,SALAD_2,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_laat_2,"",MTL_SALAD,""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_502_Scrim4_ns_3: H_SPE_US_AB_Helmet_502_Scrim4_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_4,NET_4,SALAD_2,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_laat_4,"",MTL_SALAD,""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_3.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_3.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_502_Scrim4_ns_4: H_SPE_US_AB_Helmet_502_Scrim4_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_5,NET_4,SALAD_1,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_laat_5,"",MTL_SALAD,""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_502_Scrim4_tilt_ns_1: H_SPE_US_AB_Helmet_502_Scrim4_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_3,NET_4,SALAD_2,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_laat_3,"",MTL_SALAD,""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_tilt_ns_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_502_Scrim4_tilt_ns_2: H_SPE_US_AB_Helmet_502_Scrim4_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_5,NET_4,SALAD_1,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_laat_5,"",MTL_SALAD,""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_3.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_tilt_ns_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Scrim4: H_SPE_US_AB_Helmet_502_Scrim4_os_3
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR NCO Scrim 1/4 (Open)";
		hiddenSelectionsTextures[] = {HELMET_2,NET_4,SALAD_2,""};
		hiddenSelectionsMaterials[] = {US_502_laat_NCO_2,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_3.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_Scrim4_ns: H_SPE_US_AB_Helmet_502_Scrim4_ns_4
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR NCO Scrim 1/4 (Fold)";
		hiddenSelectionsTextures[] = {HELMET_5,NET_4,SALAD_1,""};
		hiddenSelectionsMaterials[] = {US_502_laat_NCO_5,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_502_CO_Scrim4: H_SPE_US_AB_Helmet_502_Scrim4_2
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR Offz Scrim 1/4 (Close)";
		hiddenSelectionsTextures[] = {HELMET_1,NET_4,SALAD_1,""};
		hiddenSelectionsMaterials[] = {US_502_laat_CO_1,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_scrim_ca.paa";
	//	class ItemInfo: ItemInfo
	//	{
	//		hiddenSelectionsTextures[] = {HELMET_1,"","","",CO,"",""};
	//	};
	};
	class H_SPE_US_AB_Helmet_502_CO_Scrim4_ns: H_SPE_US_AB_Helmet_502_Scrim4_ns_3
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR Offz Scrim 1/4 (Fold)";
		hiddenSelectionsTextures[] = {HELMET_3,NET_4,SALAD_2,""};
		hiddenSelectionsMaterials[] = {US_502_laat_CO_3,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_scrim_ca.paa";
	//	class ItemInfo: ItemInfo
	//	{
	//		hiddenSelectionsTextures[] = {HELMET_1,"","","",CO,"",""};
	//	};
	};
	class H_SPE_US_AB_Helmet_502_polar_Scrim4: H_SPE_US_AB_Helmet_502_polar
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR No.1021 Scrim 1/4 (Close)";
		hiddenSelections[] = {"camo","camo0","camo1"};
		hiddenSelectionsTextures[] = {HELMET_1,NET_4,SALAD_2,"","",""};
		hiddenSelectionsMaterials[] = {US_502_laat_1,"",MTL_SALAD};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_polar_scrim_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_polar_net_ns.p3d"; 
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_polar_net_cs.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_502_polar_Scrim4_ns: H_SPE_US_AB_Helmet_502_polar_Scrim4
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR No.1021 Scrim 1/4 (Fold)";
		hiddenSelectionsTextures[] = {HELMET_5,NET_4,SALAD_1,"","",""};
		hiddenSelectionsMaterials[] = {US_502_laat_5,"",MTL_SALAD};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_polar_Scrim_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_polar_net_ns.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_502_polar_Scrim4_os: H_SPE_US_AB_Helmet_502_polar_Scrim4
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR No.1021 Scrim 1/4 (Open)";
		hiddenSelectionsTextures[] = {HELMET_4,NET_4,SALAD_2,"","",""};
		hiddenSelectionsMaterials[] = {US_502_laat_4,"",MTL_SALAD};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_polar_Scrim_os_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_polar_net_os.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	
	
	  
	//pfuck
	class H_SPE_US_AB_Helmet_502_PFAK: H_SPE_US_AB_Helmet_502
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR PFAK (Close)";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
		hiddenSelectionsTextures[] = {HELMET_3,NET_4,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_laat_3,"","",""};
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
	class H_SPE_US_AB_Helmet_502_PFAK_2: H_SPE_US_AB_Helmet_502_PFAK
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR PFAK (Close)";
		hiddenSelectionsTextures[] = {HELMET_2,NET_4,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_laat_2,"","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_cs_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_PFAK_up: H_SPE_US_AB_Helmet_502_PFAK
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR PFAK (Hook)";
		hiddenSelectionsTextures[] = {HELMET_1,NET_4,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_laat_1,"","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Net_up_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_502_PFAK_os: H_SPE_US_AB_Helmet_502_PFAK
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR PFAK (Open)";
		hiddenSelectionsTextures[] = {HELMET_4,NET_4,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_laat_4,"","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Net_os_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_1.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_PFAK_os_2: H_SPE_US_AB_Helmet_502_PFAK_os
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_5,NET_4,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_laat_5,"","",""}; 
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_PFAK_os_3: H_SPE_US_AB_Helmet_502_PFAK_os
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_2,NET_4,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_laat_2,"","",""}; 
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_3.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","jokes"};
		};
	};
	
	class H_SPE_US_AB_Helmet_502_PFAK_ns: H_SPE_US_AB_Helmet_502_PFAK
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		displayName = "US M2 502PIR PFAK (Fold)";
		hiddenSelectionsTextures[] = {HELMET_3,NET_4,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_laat_3,"","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Net_ns_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_1.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_502_PFAK_ns_2: H_SPE_US_AB_Helmet_502_PFAK_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_2,NET_4,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_laat_2,"","",""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_PFAK_ns_3: H_SPE_US_AB_Helmet_502_PFAK_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_4,NET_4,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_laat_4,"","",""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_3.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_3.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_502_PFAK_ns_4: H_SPE_US_AB_Helmet_502_PFAK_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_5,NET_4,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_laat_5,"","",""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_PFAK_tilt_ns_1: H_SPE_US_AB_Helmet_502_PFAK_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_3,NET_4,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_laat_3,"","",""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_tilt_ns_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_502_PFAK_tilt_ns_2: H_SPE_US_AB_Helmet_502_PFAK_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_5,NET_4,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_laat_5,"","",""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_3.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_tilt_ns_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_PFAK: H_SPE_US_AB_Helmet_502_PFAK_os_3
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR NCO PFAK (Open)";
		hiddenSelectionsTextures[] = {HELMET_2,NET_4,""};
		hiddenSelectionsMaterials[] = {US_502_laat_NCO_2,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_3.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_PFAK_ns: H_SPE_US_AB_Helmet_502_PFAK_ns_4
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR NCO PFAK (Fold)";
		hiddenSelectionsTextures[] = {HELMET_1,NET_4,""};
		hiddenSelectionsMaterials[] = {US_502_laat_NCO_1,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_502_CO_PFAK: H_SPE_US_AB_Helmet_502_PFAK_2
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR Offz PFAK (Close)";
		hiddenSelectionsTextures[] = {HELMET_2,NET_4,""};
		hiddenSelectionsMaterials[] = {US_502_laat_CO_2,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_CO_Net_ca.paa";
	//	class ItemInfo: ItemInfo
	//	{
	//		hiddenSelectionsTextures[] = {HELMET_1,"","","",CO,"",""};
	//	};
	};
	class H_SPE_US_AB_Helmet_502_CO_PFAK_ns: H_SPE_US_AB_Helmet_502_PFAK_ns_3
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR Offz PFAK (Fold)";
		hiddenSelectionsTextures[] = {HELMET_4,NET_4,""};
		hiddenSelectionsMaterials[] = {US_502_laat_CO_4,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_CO_Net_ca.paa";
	//	class ItemInfo: ItemInfo
	//	{
	//		hiddenSelectionsTextures[] = {HELMET_1,"","","",CO,"",""};
	//	};
	};
	 
	
	//scrimpy
	class H_SPE_US_AB_Helmet_502_PFAK_Scrim: H_SPE_US_AB_Helmet_502
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR Scrim PFAK (Close)";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
		hiddenSelectionsTextures[] = {HELMET_3,NET_4,SALAD_1,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_laat_3,"",MTL_SALAD,""};
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
	class H_SPE_US_AB_Helmet_502_PFAK_Scrim_2: H_SPE_US_AB_Helmet_502_PFAK_Scrim
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR Scrim PFAK (Close)";
		hiddenSelectionsTextures[] = {HELMET_2,NET_4,SALAD_2,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_laat_2,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_cs_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_502_PFAK_Scrim_up: H_SPE_US_AB_Helmet_502_PFAK_Scrim
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR Scrim PFAK (Hook)";
		hiddenSelectionsTextures[] = {HELMET_1,NET_4,SALAD_2,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_laat_1,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Scrim_up_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_502_PFAK_Scrim_os: H_SPE_US_AB_Helmet_502_PFAK_Scrim
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR Scrim PFAK (Open)";
		hiddenSelectionsTextures[] = {HELMET_4,NET_4,SALAD_1,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_laat_4,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Scrim_os_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_502_PFAK_Scrim_os_2: H_SPE_US_AB_Helmet_502_PFAK_Scrim_os
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_5,NET_4,SALAD_2,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_laat_5,"",MTL_SALAD,""}; 
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_502_PFAK_Scrim_os_3: H_SPE_US_AB_Helmet_502_PFAK_Scrim_os
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_2,NET_4,SALAD_1,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_laat_2,"",MTL_SALAD,""}; 
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_3.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","jokes"};
		};
	};
	
	class H_SPE_US_AB_Helmet_502_PFAK_Scrim_ns: H_SPE_US_AB_Helmet_502_PFAK_Scrim
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		displayName = "US M2 502PIR Scrim PFAK (Fold)";
		hiddenSelectionsTextures[] = {HELMET_3,NET_4,SALAD_1,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_laat_3,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Scrim_ns_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_1.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_502_PFAK_Scrim_ns_2: H_SPE_US_AB_Helmet_502_PFAK_Scrim_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_2,NET_4,SALAD_2,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_laat_2,"",MTL_SALAD,""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_502_PFAK_Scrim_ns_3: H_SPE_US_AB_Helmet_502_PFAK_Scrim_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_4,NET_4,SALAD_2,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_laat_4,"",MTL_SALAD,""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_3.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_3.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_502_PFAK_Scrim_ns_4: H_SPE_US_AB_Helmet_502_PFAK_Scrim_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_5,NET_4,SALAD_1,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_laat_5,"",MTL_SALAD,""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_502_PFAK_Scrim_tilt_ns_1: H_SPE_US_AB_Helmet_502_PFAK_Scrim_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_3,NET_4,SALAD_2,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_laat_3,"",MTL_SALAD,""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_tilt_ns_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_502_PFAK_Scrim_tilt_ns_2: H_SPE_US_AB_Helmet_502_PFAK_Scrim_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE"; 
		hiddenSelectionsTextures[] = {HELMET_5,NET_4,SALAD_1,"","","",""};
		hiddenSelectionsMaterials[] = {US_502_laat_5,"",MTL_SALAD,""}; 
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_3.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_tilt_ns_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_PFAK_Scrim: H_SPE_US_AB_Helmet_502_PFAK_Scrim_os_3
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR NCO Scrim PFAK (Open)";
		hiddenSelectionsTextures[] = {HELMET_2,NET_4,SALAD_2,""};
		hiddenSelectionsMaterials[] = {US_502_laat_NCO_2,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_3.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_502_NCO_PFAK_Scrim_ns: H_SPE_US_AB_Helmet_502_PFAK_Scrim_ns_4
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR NCO Scrim PFAK (Fold)";
		hiddenSelectionsTextures[] = {HELMET_5,NET_4,SALAD_1,""};
		hiddenSelectionsMaterials[] = {US_502_laat_NCO_5,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_502_CO_PFAK_Scrim: H_SPE_US_AB_Helmet_502_PFAK_Scrim_2
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR Offz Scrim PFAK (Close)";
		hiddenSelectionsTextures[] = {HELMET_1,NET_4,SALAD_1,""};
		hiddenSelectionsMaterials[] = {US_502_laat_CO_1,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_scrim_ca.paa";
	//	class ItemInfo: ItemInfo
	//	{
	//		hiddenSelectionsTextures[] = {HELMET_1,"","","",CO,"",""};
	//	};
	};
	class H_SPE_US_AB_Helmet_502_CO_PFAK_Scrim_ns: H_SPE_US_AB_Helmet_502_PFAK_Scrim_ns_3
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR Offz Scrim PFAK (Fold)";
		hiddenSelectionsTextures[] = {HELMET_3,NET_4,SALAD_2,""};
		hiddenSelectionsMaterials[] = {US_502_laat_CO_3,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_scrim_ca.paa";
	//	class ItemInfo: ItemInfo
	//	{
	//		hiddenSelectionsTextures[] = {HELMET_1,"","","",CO,"",""};
	//	};
	}; 