	class ItemCore;
	class H_HelmetB: ItemCore
	{
		class ItemInfo;
	};
	class H_SPE_HelmetB: H_HelmetB{};
	class H_SPE_US_Helmet: H_SPE_HelmetB
	{
		class ItemInfo;
	};
	class H_SPE_US_AB_Helmet: H_SPE_US_Helmet
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		scope = 2;
		displayName = "US M2 (Close)";
		model = "\simc_lcd_42\lcd_us_helmet_m2_NS.p3d";
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_ca.paa";
		hiddenSelections[] = {"camo","camo0","camo1","jokes"};
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_1_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_1.rvmat","","","","",""};
		class ItemInfo: ItemInfo
		{
			mass = 30;
			uniformmodel = "\simc_lcd_42\lcd_us_helmet_m2_CS.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo","band","Liner"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 5;
					passThrough = 0.8;
				};
			};
		};
	};
	class H_SPE_US_AB_Helmet_43: H_SPE_US_AB_Helmet
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M2 (Close)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_2_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_2.rvmat","","","","",""};
		hiddenSelections[] = {"camo","band","jokes"};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "\simc_lcd_42\lcd_us_helmet_m2_cs.p3d";
			hiddenSelections[] = {"camo","band","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_ns: H_SPE_US_AB_Helmet
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US M2 (Fold)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_4_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_4.rvmat","","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "\simc_lcd_42\lcd_us_helmet_m2_NS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_ns_43: H_SPE_US_AB_Helmet_ns
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US M2 (Fold)";
		hiddenSelections[] = {"camo","band","jokes"};
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_3_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_3.rvmat","","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "\simc_lcd_42\lcd_us_helmet_m2_NS.p3d";
			hiddenSelections[] = {"camo","band","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_os: H_SPE_US_AB_Helmet
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US M2 (Open)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_5_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_5.rvmat","","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_os_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "\simc_lcd_42\lcd_us_helmet_m2_OS.p3d";
			hiddenSelections[] = {"camo","band","jokes","liner","liner_erla"};
		};
	};
	class H_SPE_US_AB_Helmet_os_42: H_SPE_US_AB_Helmet_os
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M2 (Open)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_4_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_4.rvmat","","","","",""};
		hiddenSelections[] = {"camo","band","jokes","liner_erla"};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_os_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "\simc_lcd_42\lcd_us_helmet_m2_OS.p3d";
			hiddenSelections[] = {"camo","band","liner_erla"};
		};
	};
	class H_SPE_US_AB_Helmet_NCO: H_SPE_US_AB_Helmet
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US M2 NCO (Close)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_3_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_44_eden\MTL\US_Pot_3_NCO.rvmat","","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_NCO_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "\simc_lcd_42\lcd_us_helmet_m2_cs.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_NCO_ns: H_SPE_US_AB_Helmet_NCO
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US M2 NCO (Open)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_5_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_44_eden\MTL\US_Pot_5_NCO.rvmat","","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_NCO_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "\simc_lcd_42\lcd_us_helmet_m2_OS.p3d";
			hiddenSelections[] = {"camo","band","jokes","liner","liner_erla"};
		};
	};
	class H_SPE_US_AB_Helmet_CO: H_SPE_US_AB_Helmet
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US M2 Offz (Close)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_3_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_44_eden\MTL\US_Pot_3_CO.rvmat","",""};
		hiddenSelections[] = {"camo","band","jokes"};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_CO_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "\simc_lcd_42\lcd_us_helmet_m2_CS.p3d";
			hiddenSelections[] = {"camo","band"};
		};
	};
	class H_SPE_US_AB_Helmet_CO_ns: H_SPE_US_AB_Helmet_CO
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US M2 Offz (Fold)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_2_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_44_eden\MTL\US_Pot_2_CO.rvmat","",""};
		hiddenSelections[] = {"camo","band","jokes"};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_CO_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "\simc_lcd_42\lcd_us_helmet_m2_ns.p3d";
			hiddenSelections[] = {"camo","band","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_polar: H_SPE_US_AB_Helmet
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		scope = 2;
		displayName = "US M2 No.1021 (Close)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_4_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_4.rvmat","",""};
		model = "\simc_lcd_42\lcd_us_helmet_m2_polar_NS.p3d";
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_polar_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "\simc_lcd_42\lcd_us_helmet_m2_polar_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_polar_ns: H_SPE_US_AB_Helmet_polar
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US M2 No.1021 (Fold)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_3_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_3.rvmat","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_polar_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "\simc_lcd_42\lcd_us_helmet_m2_polar_NS.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_polar_os: H_SPE_US_AB_Helmet_polar
	{
		author = "Heavy Ordnance Works";
		dlc = "SPE";
		displayName = "US M2 No.1021 (Open)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_2_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_2.rvmat","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_polar_os_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "\simc_lcd_42\lcd_us_helmet_m2_polar_OS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_Net: H_SPE_US_AB_Helmet
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M2 Net 1/2 (Close)";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_3_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_3.rvmat","","",""};
		hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_cs_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_Net_2: H_SPE_US_AB_Helmet_Net
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M2 Net 1/2 (Close)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_2_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_2.rvmat","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_cs_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_Net_up: H_SPE_US_AB_Helmet_Net
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M2 Net 1/2 (Hook)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_1_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_1.rvmat","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Net_up_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_Net_os: H_SPE_US_AB_Helmet_Net
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M2 Net 1/2 (Open)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_4_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_4.rvmat","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Net_os_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_Net_os_2: H_SPE_US_AB_Helmet_Net_os
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_5_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_5.rvmat","","",""};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_Net_os_3: H_SPE_US_AB_Helmet_Net_os
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_2_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_2.rvmat","","",""};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_3.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_Net_ns: H_SPE_US_AB_Helmet_Net
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M2 Net 1/2 (Fold)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_3_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_3.rvmat","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Net_ns_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_1.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_Net_ns_2: H_SPE_US_AB_Helmet_Net_ns
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_2_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_2.rvmat","","",""};
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_Net_ns_3: H_SPE_US_AB_Helmet_Net_ns
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_4_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_4.rvmat","","",""};
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_3.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_3.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_Net_ns_4: H_SPE_US_AB_Helmet_Net_ns
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_5_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_5.rvmat","","",""};
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_Net_tilt_ns_1: H_SPE_US_AB_Helmet_Net_ns
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_3_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_3.rvmat","","",""};
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_tilt_ns_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_Net_tilt_ns_2: H_SPE_US_AB_Helmet_Net_ns
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_5_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_5.rvmat","","",""};
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_3.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_tilt_ns_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_NCO_net: H_SPE_US_AB_Helmet_Net_os_3
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M2 NCO Net 1/2 (Open)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_2_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_44_eden\MTL\US_Pot_2_NCO.rvmat","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_3.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_NCO_net_ns: H_SPE_US_AB_Helmet_Net_ns_4
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M2 NCO Net 1/2 (Fold)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_4_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_44_eden\MTL\US_Pot_4_NCO.rvmat","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_CO_Net: H_SPE_US_AB_Helmet_Net_2
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M2 Offz Net 1/2 (Close)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_1_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_44_eden\MTL\US_Pot_1_CO.rvmat","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_CO_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_cs_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_CO_Net_ns: H_SPE_US_AB_Helmet_Net_ns_3
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M2 Offz Net 1/2 (Fold)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_3_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_44_eden\MTL\US_Pot_3_CO.rvmat","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_CO_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_3.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_polar_net: H_SPE_US_AB_Helmet_polar
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M2 No.1021 Net 1/2 (Close)";
		hiddenSelections[] = {"camo","camo0","camo1"};
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_1_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_1.rvmat","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_polar_net_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_polar_net_ns.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_polar_net_cs.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_polar_net_ns: H_SPE_US_AB_Helmet_polar_net
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M2 No.1021 Net 1/2 (Fold)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_5_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_5.rvmat","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_polar_net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_polar_net_ns.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_polar_net_os: H_SPE_US_AB_Helmet_polar_net
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M2 No.1021 Net 1/2 (Open)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_4_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_4.rvmat","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_polar_net_os_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_polar_net_os.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_Scrim: H_SPE_US_AB_Helmet
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M2 Scrim 1/2 (Close)";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_3_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","\simc_lcd_43\data\lcd_scrim_1_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_3.rvmat","","simc_lcd_43\data\lcd_scrim.rvmat",""};
		hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_cs_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_Scrim_2: H_SPE_US_AB_Helmet_Scrim
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M2 Scrim 1/2 (Close)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_2_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","\simc_lcd_43\data\lcd_scrim_2_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_2.rvmat","","simc_lcd_43\data\lcd_scrim.rvmat",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_cs_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_Scrim_up: H_SPE_US_AB_Helmet_Scrim
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M2 Scrim 1/2 (Hook)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_1_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","\simc_lcd_43\data\lcd_scrim_2_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_1.rvmat","","simc_lcd_43\data\lcd_scrim.rvmat",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Scrim_up_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_Scrim_os: H_SPE_US_AB_Helmet_Scrim
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M2 Scrim 1/2 (Open)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_4_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","\simc_lcd_43\data\lcd_scrim_1_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_4.rvmat","","simc_lcd_43\data\lcd_scrim.rvmat",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Scrim_os_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_Scrim_os_2: H_SPE_US_AB_Helmet_Scrim_os
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_5_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","\simc_lcd_43\data\lcd_scrim_2_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_5.rvmat","","simc_lcd_43\data\lcd_scrim.rvmat",""};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_Scrim_os_3: H_SPE_US_AB_Helmet_Scrim_os
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_2_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","\simc_lcd_43\data\lcd_scrim_1_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_2.rvmat","","simc_lcd_43\data\lcd_scrim.rvmat",""};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_3.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_Scrim_ns: H_SPE_US_AB_Helmet_Scrim
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M2 Scrim 1/2 (Fold)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_3_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","\simc_lcd_43\data\lcd_scrim_1_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_3.rvmat","","simc_lcd_43\data\lcd_scrim.rvmat",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Scrim_ns_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_1.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_Scrim_ns_2: H_SPE_US_AB_Helmet_Scrim_ns
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_2_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","\simc_lcd_43\data\lcd_scrim_2_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_2.rvmat","","simc_lcd_43\data\lcd_scrim.rvmat",""};
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_Scrim_ns_3: H_SPE_US_AB_Helmet_Scrim_ns
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_4_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","\simc_lcd_43\data\lcd_scrim_2_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_4.rvmat","","simc_lcd_43\data\lcd_scrim.rvmat",""};
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_3.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_3.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_Scrim_ns_4: H_SPE_US_AB_Helmet_Scrim_ns
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_5_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","\simc_lcd_43\data\lcd_scrim_1_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_5.rvmat","","simc_lcd_43\data\lcd_scrim.rvmat",""};
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_Scrim_tilt_ns_1: H_SPE_US_AB_Helmet_Scrim_ns
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_3_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","\simc_lcd_43\data\lcd_scrim_2_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_3.rvmat","","simc_lcd_43\data\lcd_scrim.rvmat",""};
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_tilt_ns_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_Scrim_tilt_ns_2: H_SPE_US_AB_Helmet_Scrim_ns
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_5_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","\simc_lcd_43\data\lcd_scrim_1_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_5.rvmat","","simc_lcd_43\data\lcd_scrim.rvmat",""};
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_3.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_tilt_ns_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_NCO_Scrim: H_SPE_US_AB_Helmet_Scrim_os_3
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M2 NCO Scrim 1/2 (Open)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_2_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","\simc_lcd_43\data\lcd_scrim_2_co.paa",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_44_eden\MTL\US_Pot_2_NCO.rvmat","","simc_lcd_43\data\lcd_scrim.rvmat",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_Scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_3.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_NCO_Scrim_ns: H_SPE_US_AB_Helmet_Scrim_ns_4
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M2 NCO Scrim 1/2 (Fold)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_1_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","\simc_lcd_43\data\lcd_scrim_1_co.paa",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_44_eden\MTL\US_Pot_1_NCO.rvmat","","simc_lcd_43\data\lcd_scrim.rvmat",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_Scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_CO_Scrim: H_SPE_US_AB_Helmet_Scrim_2
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M2 Offz Scrim 1/2 (Close)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_1_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","\simc_lcd_43\data\lcd_scrim_1_co.paa",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_44_eden\MTL\US_Pot_1_CO.rvmat","","simc_lcd_43\data\lcd_scrim.rvmat",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_cs_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_CO_Scrim_ns: H_SPE_US_AB_Helmet_Scrim_ns_3
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M2 Offz Scrim 1/2 (Fold)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_4_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","\simc_lcd_43\data\lcd_scrim_2_co.paa",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_44_eden\MTL\US_Pot_4_CO.rvmat","","simc_lcd_43\data\lcd_scrim.rvmat",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_polar_Scrim: H_SPE_US_AB_Helmet_polar
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M2 No.1021 Scrim 1/2 (Close)";
		hiddenSelections[] = {"camo","camo0","camo1"};
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_1_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","\simc_lcd_43\data\lcd_scrim_2_co.paa","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_1.rvmat","","simc_lcd_43\data\lcd_scrim.rvmat"};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_polar_Scrim_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_polar_net_ns.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_polar_net_cs.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_polar_Scrim_ns: H_SPE_US_AB_Helmet_polar_Scrim
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M2 No.1021 Scrim 1/2 (Fold)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_5_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","\simc_lcd_43\data\lcd_scrim_1_co.paa","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_5.rvmat","","simc_lcd_43\data\lcd_scrim.rvmat"};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_polar_Scrim_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_polar_net_ns.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_polar_Scrim_os: H_SPE_US_AB_Helmet_polar_Scrim
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M2 No.1021 Scrim 1/2 (Open)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_4_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","\simc_lcd_43\data\lcd_scrim_2_co.paa","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_4.rvmat","","simc_lcd_43\data\lcd_scrim.rvmat"};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_polar_Scrim_os_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_polar_net_os.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_Net4: H_SPE_US_AB_Helmet
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M2 Net 1/4 (Close)";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_3_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_3.rvmat","","",""};
		hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_cs_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_Net4_2: H_SPE_US_AB_Helmet_Net4
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M2 Net 1/4 (Close)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_2_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_2.rvmat","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_cs_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_Net4_up: H_SPE_US_AB_Helmet_Net4
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M2 Net 1/4 (Hook)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_1_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_1.rvmat","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Net_up_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_Net4_os: H_SPE_US_AB_Helmet_Net4
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M2 Net 1/4 (Open)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_4_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_4.rvmat","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Net_os_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_1.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_Net4_os_2: H_SPE_US_AB_Helmet_Net4_os
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_5_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_5.rvmat","","",""};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_Net4_os_3: H_SPE_US_AB_Helmet_Net4_os
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_2_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_2.rvmat","","",""};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_3.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_Net4_ns: H_SPE_US_AB_Helmet_Net4
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M2 Net 1/4 (Fold)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_3_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_3.rvmat","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Net_ns_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_1.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_Net4_ns_2: H_SPE_US_AB_Helmet_Net4_ns
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_2_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_2.rvmat","","",""};
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_Net4_ns_3: H_SPE_US_AB_Helmet_Net4_ns
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_4_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_4.rvmat","","",""};
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_3.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_3.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_Net4_ns_4: H_SPE_US_AB_Helmet_Net4_ns
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_5_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_5.rvmat","","",""};
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_Net4_tilt_ns_1: H_SPE_US_AB_Helmet_Net4_ns
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_3_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_3.rvmat","","",""};
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_tilt_ns_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_Net4_tilt_ns_2: H_SPE_US_AB_Helmet_Net4_ns
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_5_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_5.rvmat","","",""};
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_3.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_tilt_ns_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_NCO_net4: H_SPE_US_AB_Helmet_Net4_os_3
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M2 NCO Net 1/4 (Open)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_2_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_44_eden\MTL\US_Pot_2_NCO.rvmat","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_3.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_NCO_net4_ns: H_SPE_US_AB_Helmet_Net4_ns_4
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M2 NCO Net 1/4 (Fold)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_1_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_44_eden\MTL\US_Pot_1_NCO.rvmat","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_CO_Net4: H_SPE_US_AB_Helmet_Net4_2
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M2 Offz Net 1/4 (Close)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_2_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_44_eden\MTL\US_Pot_2_CO.rvmat","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_CO_Net_ca.paa";
	};
	class H_SPE_US_AB_Helmet_CO_Net4_ns: H_SPE_US_AB_Helmet_Net4_ns_3
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M2 Offz Net 1/4 (Fold)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_4_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_44_eden\MTL\US_Pot_4_CO.rvmat","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_CO_Net_ca.paa";
	};
	class H_SPE_US_AB_Helmet_polar_net4: H_SPE_US_AB_Helmet_polar
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M2 No.1021 Net 1/4 (Close)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_1_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_1.rvmat","",""};
		hiddenSelections[] = {"camo","camo0","camo1"};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_polar_net_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_polar_net_ns.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_polar_net_cs.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_polar_net4_ns: H_SPE_US_AB_Helmet_polar_net4
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M2 No.1021 Net 1/4 (Fold)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_5_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_5.rvmat","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_polar_net_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_polar_net_ns.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_polar_net4_os: H_SPE_US_AB_Helmet_polar_net4
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M2 No.1021 Net 1/4 (Open)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_4_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_4.rvmat","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_polar_net_os_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_polar_net_os.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_Scrim4: H_SPE_US_AB_Helmet
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M2 Scrim 1/4 (Close)";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_3_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","\simc_lcd_43\data\lcd_scrim_1_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_3.rvmat","","simc_lcd_43\data\lcd_scrim.rvmat",""};
		hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_cs_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_Scrim4_2: H_SPE_US_AB_Helmet_Scrim4
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M2 Scrim 1/4 (Close)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_2_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","\simc_lcd_43\data\lcd_scrim_2_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_2.rvmat","","simc_lcd_43\data\lcd_scrim.rvmat",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_cs_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_Scrim4_up: H_SPE_US_AB_Helmet_Scrim4
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M2 Scrim 1/4 (Hook)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_1_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","\simc_lcd_43\data\lcd_scrim_2_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_1.rvmat","","simc_lcd_43\data\lcd_scrim.rvmat",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Scrim_up_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_Scrim4_os: H_SPE_US_AB_Helmet_Scrim4
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M2 Scrim 1/4 (Open)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_4_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","\simc_lcd_43\data\lcd_scrim_1_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_4.rvmat","","simc_lcd_43\data\lcd_scrim.rvmat",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Scrim_os_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_up.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_Scrim4_os_2: H_SPE_US_AB_Helmet_Scrim4_os
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_5_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","\simc_lcd_43\data\lcd_scrim_2_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_5.rvmat","","simc_lcd_43\data\lcd_scrim.rvmat",""};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_Scrim4_os_3: H_SPE_US_AB_Helmet_Scrim4_os
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_2_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","\simc_lcd_43\data\lcd_scrim_1_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_2.rvmat","","simc_lcd_43\data\lcd_scrim.rvmat",""};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_3.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_Scrim4_ns: H_SPE_US_AB_Helmet_Scrim4
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M2 Scrim 1/4 (Fold)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_3_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","\simc_lcd_43\data\lcd_scrim_1_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_3.rvmat","","simc_lcd_43\data\lcd_scrim.rvmat",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Scrim_ns_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_1.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_Scrim4_ns_2: H_SPE_US_AB_Helmet_Scrim4_ns
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_2_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","\simc_lcd_43\data\lcd_scrim_2_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_2.rvmat","","simc_lcd_43\data\lcd_scrim.rvmat",""};
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_Scrim4_ns_3: H_SPE_US_AB_Helmet_Scrim4_ns
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_4_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","\simc_lcd_43\data\lcd_scrim_2_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_4.rvmat","","simc_lcd_43\data\lcd_scrim.rvmat",""};
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_3.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_3.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_Scrim4_ns_4: H_SPE_US_AB_Helmet_Scrim4_ns
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_5_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","\simc_lcd_43\data\lcd_scrim_1_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_5.rvmat","","simc_lcd_43\data\lcd_scrim.rvmat",""};
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_Scrim4_tilt_ns_1: H_SPE_US_AB_Helmet_Scrim4_ns
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_3_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","\simc_lcd_43\data\lcd_scrim_2_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_3.rvmat","","simc_lcd_43\data\lcd_scrim.rvmat",""};
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_tilt_ns_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_Scrim4_tilt_ns_2: H_SPE_US_AB_Helmet_Scrim4_ns
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_5_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","\simc_lcd_43\data\lcd_scrim_1_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_5.rvmat","","simc_lcd_43\data\lcd_scrim.rvmat",""};
		Model = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_3.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_tilt_ns_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_NCO_Scrim4: H_SPE_US_AB_Helmet_Scrim4_os_3
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M2 NCO Scrim 1/4 (Open)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_2_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","\simc_lcd_43\data\lcd_scrim_2_co.paa",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_44_eden\MTL\US_Pot_2_NCO.rvmat","","simc_lcd_43\data\lcd_scrim.rvmat",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_os_3.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak"};
		};
	};
	class H_SPE_US_AB_Helmet_NCO_Scrim4_ns: H_SPE_US_AB_Helmet_Scrim4_ns_4
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M2 NCO Scrim 1/4 (Fold)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_5_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","\simc_lcd_43\data\lcd_scrim_1_co.paa",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_44_eden\MTL\US_Pot_5_NCO.rvmat","","simc_lcd_43\data\lcd_scrim.rvmat",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_scrim_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_net_ns_4.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","pfak","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_CO_Scrim4: H_SPE_US_AB_Helmet_Scrim4_2
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M2 Offz Scrim 1/4 (Close)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_1_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","\simc_lcd_43\data\lcd_scrim_1_co.paa",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_44_eden\MTL\US_Pot_1_CO.rvmat","","simc_lcd_43\data\lcd_scrim.rvmat",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_scrim_ca.paa";
	};
	class H_SPE_US_AB_Helmet_CO_Scrim4_ns: H_SPE_US_AB_Helmet_Scrim4_ns_3
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M2 Offz Scrim 1/4 (Fold)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_3_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","\simc_lcd_43\data\lcd_scrim_2_co.paa",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_44_eden\MTL\US_Pot_3_CO.rvmat","","simc_lcd_43\data\lcd_scrim.rvmat",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_scrim_ca.paa";
	};
	class H_SPE_US_AB_Helmet_polar_Scrim4: H_SPE_US_AB_Helmet_polar
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M2 No.1021 Scrim 1/4 (Close)";
		hiddenSelections[] = {"camo","camo0","camo1"};
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_1_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","\simc_lcd_43\data\lcd_scrim_2_co.paa","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_1.rvmat","","simc_lcd_43\data\lcd_scrim.rvmat"};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_polar_scrim_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m2_polar_net_ns.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_polar_net_cs.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_polar_Scrim4_ns: H_SPE_US_AB_Helmet_polar_Scrim4
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M2 No.1021 Scrim 1/4 (Fold)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_5_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","\simc_lcd_43\data\lcd_scrim_1_co.paa","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_5.rvmat","","simc_lcd_43\data\lcd_scrim.rvmat"};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_polar_Scrim_ns_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_polar_net_ns.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_polar_Scrim4_os: H_SPE_US_AB_Helmet_polar_Scrim4
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M2 No.1021 Scrim 1/4 (Open)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_4_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","\simc_lcd_43\data\lcd_scrim_2_co.paa","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_4.rvmat","","simc_lcd_43\data\lcd_scrim.rvmat"};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_polar_Scrim_os_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m2_polar_net_os.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_PFAK: H_SPE_US_AB_Helmet
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M1C PFAK (Close)";
		Model = "\simc_lcd_42\lcd_us_helmet_m1c_net_up.p3d";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_3_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_3.rvmat","","",""};
		hiddenSelections[] = {"camo","camo0","camo1"};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m1c_net_cs_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_PFAK_2: H_SPE_US_AB_Helmet_PFAK
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M1C PFAK (Close)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_2_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_2.rvmat","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m1c_net_cs_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_PFAK_up: H_SPE_US_AB_Helmet_PFAK
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M1C PFAK (Hook)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_1_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_1.rvmat","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Net_up_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m1c_net_up.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m1c_net_up.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_PFAK_os: H_SPE_US_AB_Helmet_PFAK
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M1C PFAK (Open)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_4_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_4.rvmat","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Net_os_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m1c_net_up.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m1c_net_os_1.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_PFAK_os_2: H_SPE_US_AB_Helmet_PFAK_os
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_5_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_5.rvmat","","",""};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m1c_net_os_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_PFAK_os_3: H_SPE_US_AB_Helmet_PFAK_os
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_2_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_2.rvmat","","",""};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m1c_net_os_3.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_PFAK_ns: H_SPE_US_AB_Helmet_PFAK
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M1C PFAK (Fold)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_3_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_3.rvmat","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Net_ns_ca.paa";
		Model = "\simc_lcd_42\lcd_us_helmet_m1c_net_ns_1.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m1c_net_ns_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_PFAK_ns_2: H_SPE_US_AB_Helmet_PFAK_ns
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_2_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_2.rvmat","","",""};
		Model = "\simc_lcd_42\lcd_us_helmet_m1c_net_ns_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m1c_net_ns_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_PFAK_ns_3: H_SPE_US_AB_Helmet_PFAK_ns
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_4_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_4.rvmat","","",""};
		Model = "\simc_lcd_42\lcd_us_helmet_m1c_net_ns_3.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m1c_net_ns_3.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_PFAK_ns_4: H_SPE_US_AB_Helmet_PFAK_ns
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_5_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_5.rvmat","","",""};
		Model = "\simc_lcd_42\lcd_us_helmet_m1c_net_ns_4.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m1c_net_ns_4.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_PFAK_tilt_ns_1: H_SPE_US_AB_Helmet_PFAK_ns
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_3_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_3.rvmat","","",""};
		Model = "\simc_lcd_42\lcd_us_helmet_m1c_net_ns_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m1c_net_tilt_ns_1.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_PFAK_tilt_ns_2: H_SPE_US_AB_Helmet_PFAK_ns
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_5_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_5.rvmat","","",""};
		Model = "\simc_lcd_42\lcd_us_helmet_m1c_net_ns_3.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m1c_net_tilt_ns_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_NCO_PFAK: H_SPE_US_AB_Helmet_PFAK_os_3
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M2 NCO PFAK (Open)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_2_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_44_eden\MTL\US_Pot_2_NCO.rvmat","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m1c_net_os_3.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_NCO_PFAK_ns: H_SPE_US_AB_Helmet_PFAK_ns_4
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M2 NCO PFAK (Fold)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_1_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_44_eden\MTL\US_Pot_1_NCO.rvmat","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_NCO_net_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_lcd_42\lcd_us_helmet_m1c_net_ns_4.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","jokes"};
		};
	};
	class H_SPE_US_AB_Helmet_CO_PFAK: H_SPE_US_AB_Helmet_PFAK_2
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M2 Offz PFAK (Close)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_2_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_44_eden\MTL\US_Pot_2_CO.rvmat","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_CO_Net_ca.paa";
	};
	class H_SPE_US_AB_Helmet_CO_PFAK_ns: H_SPE_US_AB_Helmet_PFAK_ns_3
	{
		author = "Motta + Ethridge";
		dlc = "SPE";
		displayName = "US M2 Offz PFAK (Fold)";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_4_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_44_eden\MTL\US_Pot_4_CO.rvmat","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_CO_Net_ca.paa";
	};