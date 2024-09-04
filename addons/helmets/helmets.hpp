



	class ItemCore;
	class H_HelmetB: ItemCore
	{
		class ItemInfo;
	};
	class H_SPE_HelmetB: H_HelmetB {};
	class H_SPE_US_Helmet: H_SPE_HelmetB
	{
		class ItemInfo;
	};
	class H_SPE_US_AB_Helmet: H_SPE_US_Helmet
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		scope = 2;
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet";
		model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS.p3d";
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_ca.paa";
		//model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS.p3d";
		hiddenSelections[] = {"camo","camo0","camo1","joke"};
		// camo - Helmet
		// camo0 - Net
		// camo3 - Front decal
		// camo4 - Rear decal
		// camo5 - Left decal
		// camo6 - Right Decal
		hiddenSelectionsTextures[] = {HELMET,"","","","",""};
		class ItemInfo: ItemInfo
		{
			mass = 30;
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo","camo0","camo1"};
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
	class H_SPE_US_AB_Helmet_ns: H_SPE_US_AB_Helmet
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_ns";
		hiddenSelectionsTextures[] = {HELMET_ALT,"","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_ns_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_os: H_SPE_US_AB_Helmet
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_os";
		hiddenSelectionsTextures[] = {HELMET_DUNKEL,"","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_os_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_Net: H_SPE_US_AB_Helmet
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_Net";
		hiddenSelectionsTextures[] = {HELMET_DUNKEL,NET,"","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_Net_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_Net_ns: H_SPE_US_AB_Helmet_ns
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_Net_ns";
		hiddenSelectionsTextures[] = {HELMET,NET,"","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_Net_ns_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_Net_up: H_SPE_US_AB_Helmet_ns
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_Net_up";
		hiddenSelectionsTextures[] = {HELMET,NET,"","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_Net_up_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_up.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_up.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_Net_os: H_SPE_US_AB_Helmet_os
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_Net_os";
		hiddenSelectionsTextures[] = {HELMET,NET,"","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_Net_os_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_Scrim: H_SPE_US_AB_Helmet
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_Scrim";
		hiddenSelectionsTextures[] = {HELMET_DUNKEL,SALAD,SALAD,"","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_Scrim_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_Scrim_ns: H_SPE_US_AB_Helmet_ns
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_Scrim_ns";
		hiddenSelectionsTextures[] = {HELMET,SALAD,SALAD,"","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_Scrim_ns_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_Scrim_up: H_SPE_US_AB_Helmet_ns
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_Scrim_up";
		hiddenSelectionsTextures[] = {HELMET,SALAD,SALAD,"","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_Scrim_up_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_up.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_up.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_Scrim_os: H_SPE_US_AB_Helmet_os
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_Scrim_os";
		hiddenSelectionsTextures[] = {HELMET,SALAD,SALAD,"","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_Scrim_os_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
		};
	};


	class H_SPE_US_AB_Helmet_polar: H_SPE_US_AB_Helmet
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		scope = 2;
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_polar";
		hiddenSelectionsTextures[] = {HELMET_DUNKEL,"","","","",""};
		model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_CS.p3d";
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_polar_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_polar_ns: H_SPE_US_AB_Helmet_polar
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_polar_ns";
		hiddenSelectionsTextures[] = {HELMET_ALT,"","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_polar_ns_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_NS.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_NS.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_polar_os: H_SPE_US_AB_Helmet_polar
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_polar_os";
		hiddenSelectionsTextures[] = {HELMET,"","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_polar_os_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_OS.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_OS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_polar_net: H_SPE_US_AB_Helmet_polar
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_polar_net";
		hiddenSelectionsTextures[] = {HELMET_DUNKEL,NET,"","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_polar_net_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_CS.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_polar_net_ns: H_SPE_US_AB_Helmet_polar_ns
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_polar_net_ns";
		hiddenSelectionsTextures[] = {HELMET_ALT,NET,"","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_polar_net_ns_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_NS.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_NS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_polar_net_os: H_SPE_US_AB_Helmet_polar_os
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_polar_net_os";
		hiddenSelectionsTextures[] = {HELMET,NET,"","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_polar_net_os_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_OS.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_OS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_polar_Scrim: H_SPE_US_AB_Helmet_polar
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_polar_Scrim";
		hiddenSelectionsTextures[] = {HELMET_DUNKEL,SALAD,SALAD,"","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_polar_Scrim_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_CS.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_polar_Scrim_ns: H_SPE_US_AB_Helmet_polar_ns
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_polar_Scrim_ns";
		hiddenSelectionsTextures[] = {HELMET_ALT,SALAD,SALAD,"","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_polar_Scrim_ns_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_NS.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_NS.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_polar_Scrim_os: H_SPE_US_AB_Helmet_polar_os
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_polar_Scrim_os";
		hiddenSelectionsTextures[] = {HELMET,SALAD,SALAD,"","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_polar_Scrim_os_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_OS.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_OS.p3d";
		};
	};

	//nco
	class H_SPE_US_AB_Helmet_NCO : H_SPE_US_AB_Helmet
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_NCO";
		hiddenSelectionsTextures[] = {HELMET_ALT,"","","","",""};
		hiddenSelectionsMaterials[] = {NCO,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_NCO_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_NCO_ns: H_SPE_US_AB_Helmet_NCO
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_NCO_ns";
		hiddenSelectionsTextures[] = {HELMET_DUNKEL,"","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_NCO_ns_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_NCO_Net: H_SPE_US_AB_Helmet_NCO
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_NCO_Net";
		hiddenSelectionsTextures[] = {HELMET_DUNKEL,NET,"","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_NCO_Net_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_NCO_Net_ns: H_SPE_US_AB_Helmet_NCO
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_NCO_Net_ns";
		hiddenSelectionsTextures[] = {HELMET,NET,"","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_NCO_Net_ns_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_NCO_Scrim: H_SPE_US_AB_Helmet_NCO
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_NCO_Scrim";
		hiddenSelectionsTextures[] = {HELMET_DUNKEL,SALAD,SALAD,"","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_NCO_Scrim_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_NCO_Scrim_ns: H_SPE_US_AB_Helmet_NCO_Scrim
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_NCO_Scrim_ns";
		hiddenSelectionsTextures[] = {HELMET,SALAD,SALAD,"","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_NCO_Scrim_ns_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};


	class H_SPE_US_AB_Helmet_CO : H_SPE_US_AB_Helmet
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_CO";
		hiddenSelectionsTextures[] = {HELMET_ALT,"","","","",""};
		hiddenSelectionsMaterials[] = {CO,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_CO_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_CO_ns: H_SPE_US_AB_Helmet_CO
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_CO_ns";
		hiddenSelectionsTextures[] = {HELMET_DUNKEL,"","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_CO_ns_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_CO_Net: H_SPE_US_AB_Helmet_CO
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_CO_Net";
		hiddenSelectionsTextures[] = {HELMET_DUNKEL,NET,"","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_CO_Net_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_CO_Net_ns: H_SPE_US_AB_Helmet_CO
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_CO_Net_ns";
		hiddenSelectionsTextures[] = {HELMET,NET,"","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_CO_Net_ns_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_CO_Scrim: H_SPE_US_AB_Helmet_CO
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_CO_Scrim";
		hiddenSelectionsTextures[] = {HELMET_DUNKEL,SALAD,SALAD,"","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_CO_Scrim_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_CO_Scrim_ns: H_SPE_US_AB_Helmet_CO_Scrim
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "$STR_CTH_H_SPE_US_AB_Helmet_CO_Scrim_ns";
		hiddenSelectionsTextures[] = {HELMET,SALAD,SALAD,"","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_CO_Scrim_ns_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
