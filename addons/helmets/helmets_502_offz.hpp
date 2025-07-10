	#define US_502_CO_person "x\wdc\addons\helmets\US_Airborne\US_Pot_502_CO_person.rvmat"

	class H_SPE_US_AB_Helmet_502_CO_person: H_SPE_US_AB_Helmet_502
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US M2 502PIR Offz (Person, Close)";
		hiddenSelectionsTextures[] = {HELMET_3,"","","","",""};
		hiddenSelectionsMaterials[] = {US_502_CO_person,"",""};
			hiddenSelections[] = {"camo","band","jokes"};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_CO_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "\simc_lcd_42\lcd_us_helmet_m2_CS.p3d";
			hiddenSelections[] = {"camo","band"};
		};
	};
	class H_SPE_US_AB_Helmet_502_CO_ns_person: H_SPE_US_AB_Helmet_502_CO_ns
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US M2 502PIR Offz (Person, Fold)";
		hiddenSelectionsTextures[] = {HELMET_2,"","","","",""};
		hiddenSelectionsMaterials[] = {US_502_CO_person,"",""};
		hiddenSelections[] = {"camo","band","jokes"};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_CO_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "\simc_lcd_42\lcd_us_helmet_m2_ns.p3d";
			hiddenSelections[] = {"camo","band","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_502_CO_Net_person: H_SPE_US_AB_Helmet_502_CO_Net
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR Offz Net 1/2 (Person, Close)";
		hiddenSelectionsTextures[] = {HELMET_1,NET,""};
		hiddenSelectionsMaterials[] = {US_502_CO_person,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_CO_Net_ca.paa";
	//	class ItemInfo: ItemInfo
	//	{
	//		hiddenSelectionsTextures[] = {HELMET_1,"","","",CO,"",""};
	//	};
	};
	class H_SPE_US_AB_Helmet_502_CO_Net_ns_person: H_SPE_US_AB_Helmet_502_CO_Net_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR Offz Net 1/2 (Person, Fold)";
		hiddenSelectionsTextures[] = {HELMET_3,NET,""};
		hiddenSelectionsMaterials[] = {US_502_CO_person,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_CO_Net_ca.paa";
	//	class ItemInfo: ItemInfo
	//	{
	//		hiddenSelectionsTextures[] = {HELMET_1,"","","",CO,"",""};
	//	};
	};
	class H_SPE_US_AB_Helmet_502_CO_Scrim_person: H_SPE_US_AB_Helmet_502_CO_Scrim
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR Offz Scrim 1/2 (Person, Close)";
		hiddenSelectionsTextures[] = {HELMET_1,NET,SALAD_1,""};
		hiddenSelectionsMaterials[] = {US_502_CO_person,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_scrim_ca.paa";
	    class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_cs_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_502_CO_Scrim_ns_person: H_SPE_US_AB_Helmet_502_CO_Scrim_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR Offz Scrim 1/2 (Person, Fold)";
		hiddenSelectionsTextures[] = {HELMET_4,NET,SALAD_2,""};
		hiddenSelectionsMaterials[] = {US_502_CO_person,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_502_CO_Net4_person: H_SPE_US_AB_Helmet_502_CO_Net4
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR Offz Net 1/4 (Person, Close)";
		hiddenSelectionsTextures[] = {HELMET_2,NET_4,""};
		hiddenSelectionsMaterials[] = {US_502_CO_person,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_CO_Net_ca.paa";
	//	class ItemInfo: ItemInfo
	//	{
	//		hiddenSelectionsTextures[] = {HELMET_1,"","","",CO,"",""};
	//	};
	};
	class H_SPE_US_AB_Helmet_502_CO_Net4_ns_person: H_SPE_US_AB_Helmet_502_CO_Net4_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR Offz Net 1/4 (Person, Fold)";
		hiddenSelectionsTextures[] = {HELMET_4,NET_4,""};
		hiddenSelectionsMaterials[] = {US_502_CO_person,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_CO_Net_ca.paa";
	//	class ItemInfo: ItemInfo
	//	{
	//		hiddenSelectionsTextures[] = {HELMET_1,"","","",CO,"",""};
	//	};
	};
	class H_SPE_US_AB_Helmet_502_CO_Scrim4_person: H_SPE_US_AB_Helmet_502_CO_Scrim4
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR Offz Scrim 1/4 (Person, Close)";
		hiddenSelectionsTextures[] = {HELMET_1,NET_4,SALAD_1,""};
		hiddenSelectionsMaterials[] = {US_502_CO_person,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_scrim_ca.paa";
	//	class ItemInfo: ItemInfo
	//	{
	//		hiddenSelectionsTextures[] = {HELMET_1,"","","",CO,"",""};
	//	};
	};
	class H_SPE_US_AB_Helmet_502_CO_Scrim4_ns_person: H_SPE_US_AB_Helmet_502_CO_Scrim4_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR Offz Scrim 1/4 (Person, Fold)";
		hiddenSelectionsTextures[] = {HELMET_3,NET_4,SALAD_2,""};
		hiddenSelectionsMaterials[] = {US_502_CO_person,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_scrim_ca.paa";
	//	class ItemInfo: ItemInfo
	//	{
	//		hiddenSelectionsTextures[] = {HELMET_1,"","","",CO,"",""};
	//	};
	};
	class H_SPE_US_AB_Helmet_502_CO_PFAK_person: H_SPE_US_AB_Helmet_502_CO_PFAK
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR Offz PFAK (Person, Close)";
		hiddenSelectionsTextures[] = {HELMET_2,NET_4,""};
		hiddenSelectionsMaterials[] = {US_502_CO_person,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_CO_Net_ca.paa";
	//	class ItemInfo: ItemInfo
	//	{
	//		hiddenSelectionsTextures[] = {HELMET_1,"","","",CO,"",""};
	//	};
	};
	class H_SPE_US_AB_Helmet_502_CO_PFAK_ns_person: H_SPE_US_AB_Helmet_502_CO_PFAK_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR Offz PFAK (Person, Fold)";
		hiddenSelectionsTextures[] = {HELMET_4,NET_4,""};
		hiddenSelectionsMaterials[] = {US_502_CO_person,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_CO_Net_ca.paa";
	//	class ItemInfo: ItemInfo
	//	{
	//		hiddenSelectionsTextures[] = {HELMET_1,"","","",CO,"",""};
	//	};
	};
	class H_SPE_US_AB_Helmet_502_CO_PFAK_Scrim_person: H_SPE_US_AB_Helmet_502_CO_PFAK_Scrim
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR Offz Scrim PFAK (Person, Close)";
		hiddenSelectionsTextures[] = {HELMET_1,NET_4,SALAD_1,""};
		hiddenSelectionsMaterials[] = {US_502_CO_person,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_scrim_ca.paa";
	//	class ItemInfo: ItemInfo
	//	{
	//		hiddenSelectionsTextures[] = {HELMET_1,"","","",CO,"",""};
	//	};
	};
	class H_SPE_US_AB_Helmet_502_CO_PFAK_Scrim_ns_person: H_SPE_US_AB_Helmet_502_CO_PFAK_Scrim_ns
	{
		author = "Motta + Ethridge";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US M2 502PIR Offz Scrim PFAK (Person, Fold)";
		hiddenSelectionsTextures[] = {HELMET_3,NET_4,SALAD_2,""};
		hiddenSelectionsMaterials[] = {US_502_CO_person,"",MTL_SALAD,""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_scrim_ca.paa";
	//	class ItemInfo: ItemInfo
	//	{
	//		hiddenSelectionsTextures[] = {HELMET_1,"","","",CO,"",""};
	//	};
	}; 