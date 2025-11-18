

#define US_321 "x\wdc\addons\helmets\US_Airborne\US_Pot_321.rvmat"
#define US_321_NCO "x\wdc\addons\helmets\US_Airborne\US_Pot_321_NCO.rvmat"
#define US_321_CO "x\wdc\addons\helmets\US_Airborne\US_Pot_321_CO.rvmat"

	class H_SPE_US_AB_Helmet_321: H_SPE_US_AB_Helmet
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st";
		hiddenSelectionsTextures[] = {HELMET_ALT,"","","","",""};
		hiddenSelectionsMaterials[] = {US_321,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_ns: H_SPE_US_AB_Helmet_321
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Folded)";
		hiddenSelectionsTextures[] = {HELMET_ALT,"","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_ns_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_os: H_SPE_US_AB_Helmet_321
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Opened)";
		hiddenSelectionsTextures[] = {HELMET_DUNKEL,"","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_os_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_ShrimpNet: H_SPE_US_AB_Helmet_321
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (1/4 Net)";
		hiddenSelectionsTextures[] = {HELMET_DUNKEL,NET_MOTTA,"","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_Net_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_ShrimpNet_ns: H_SPE_US_AB_Helmet_321_ns
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (1/4 Net, Folded)";
		hiddenSelectionsTextures[] = {HELMET,NET_MOTTA,"","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_Net_ns_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_321_ShrimpNet_up: H_SPE_US_AB_Helmet_321_ns
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (1/4 Net, Hooked)";
		hiddenSelectionsTextures[] = {HELMET,NET_MOTTA,"","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_Net_up_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_up.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_up.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_ShrimpNet_os: H_SPE_US_AB_Helmet_321_os
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (1/4 Net, Opened)";
		hiddenSelectionsTextures[] = {HELMET,NET_MOTTA,"","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_Net_os_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_Scrim: H_SPE_US_AB_Helmet_321
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Scrim)";
		hiddenSelectionsTextures[] = {HELMET_DUNKEL,SALAD,SALAD,"","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_Scrim_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_Scrim_ns: H_SPE_US_AB_Helmet_321_ns
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Scrim, Folded)";
		hiddenSelectionsTextures[] = {HELMET,SALAD,SALAD,"","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_Scrim_ns_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_321_Scrim_up: H_SPE_US_AB_Helmet_321_ns
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Scrim, Hooked)";
		hiddenSelectionsTextures[] = {HELMET,SALAD,SALAD,"","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_Scrim_up_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_up.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_up.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_321_Scrim_os: H_SPE_US_AB_Helmet_321_os
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Scrim, Opened)";
		hiddenSelectionsTextures[] = {HELMET,SALAD,SALAD,"","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_Scrim_os_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
		};
	};


	class H_SPE_US_AB_Helmet_321_polar: H_SPE_US_AB_Helmet_321
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		scope = 2;
		displayName = "US AB Helmet, M2 321st (No. 1021)";
		hiddenSelectionsTextures[] = {HELMET_DUNKEL,"","","","",""};
		model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_NS.p3d";
		//model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_CS.p3d";
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_polar_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_polar_ns: H_SPE_US_AB_Helmet_321_polar
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (No. 1021, Folded)";
		hiddenSelectionsTextures[] = {HELMET_ALT,"","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_polar_ns_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_NS.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_NS.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_321_polar_os: H_SPE_US_AB_Helmet_321_polar
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (No. 1021, Opened)";
		hiddenSelectionsTextures[] = {HELMET,"","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_polar_os_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_OS.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_OS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_polar_net: H_SPE_US_AB_Helmet_321_polar
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (No. 1021, Net)";
		hiddenSelectionsTextures[] = {HELMET_DUNKEL,NET,"","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_polar_net_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_CS.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_polar_net_ns: H_SPE_US_AB_Helmet_321_polar_ns
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (No. 1021, Net, Folded)";
		hiddenSelectionsTextures[] = {HELMET_ALT,NET,"","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_polar_net_ns_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_NS.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_NS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_polar_net_os: H_SPE_US_AB_Helmet_321_polar_os
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (No. 1021, Net, Opened)";
		hiddenSelectionsTextures[] = {HELMET,NET,"","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_polar_net_os_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_OS.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_OS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_polar_Shrimpnet: H_SPE_US_AB_Helmet_321_polar
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (No. 1021, 1/4 Net)";
		hiddenSelectionsTextures[] = {HELMET_DUNKEL,NET,"","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_polar_net_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_CS.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_polar_Shrimpnet_ns: H_SPE_US_AB_Helmet_321_polar_ns
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (No. 1021, 1/4 Net, Folded)";
		hiddenSelectionsTextures[] = {HELMET_ALT,NET_MOTTA,"","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_polar_net_ns_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_NS.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_NS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_polar_Shrimpnet_os: H_SPE_US_AB_Helmet_321_polar_os
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (No. 1021, 1/4 Net, Opened)";
		hiddenSelectionsTextures[] = {HELMET,NET_MOTTA,"","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_polar_net_os_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_OS.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_OS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_polar_Scrim: H_SPE_US_AB_Helmet_321_polar
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (No. 1021, Scrim)";
		hiddenSelectionsTextures[] = {HELMET_DUNKEL,SALAD,SALAD,"","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_polar_Scrim_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_CS.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_polar_Scrim_ns: H_SPE_US_AB_Helmet_321_polar_ns
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (No. 1021, Scrim, Folded)";
		hiddenSelectionsTextures[] = {HELMET_ALT,SALAD,SALAD,"","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_polar_Scrim_ns_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_NS.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_NS.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_321_polar_Scrim_os: H_SPE_US_AB_Helmet_321_polar_os
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (No. 1021, Scrim, Opened)";
		hiddenSelectionsTextures[] = {HELMET,SALAD,SALAD,"","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_polar_Scrim_os_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_OS.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_polar_OS.p3d";
		};
	};

	//nco
	class H_SPE_US_AB_Helmet_321_NCO : H_SPE_US_AB_Helmet_321
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (NCO)";
		hiddenSelectionsTextures[] = {HELMET_ALT,"","","","",""};
		hiddenSelectionsMaterials[] = {US_321_NCO,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_ns: H_SPE_US_AB_Helmet_321_NCO
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (NCO, Opened)";
		hiddenSelectionsTextures[] = {HELMET_DUNKEL,"","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_ns_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_Net: H_SPE_US_AB_Helmet_321_NCO
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Net, NCO)";
		hiddenSelectionsTextures[] = {HELMET_DUNKEL,NET,"","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_Net_ns: H_SPE_US_AB_Helmet_321_NCO
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Net, NCO, Opened)";
		hiddenSelectionsTextures[] = {HELMET,NET,"","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ns_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_ShrimpNet: H_SPE_US_AB_Helmet_321_NCO
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (1/4 Net, NCO)";
		hiddenSelectionsTextures[] = {HELMET_DUNKEL,NET_MOTTA,"","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_ShrimpNet_ns: H_SPE_US_AB_Helmet_321_NCO
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (1/4 Net, NCO, Opened)";
		hiddenSelectionsTextures[] = {HELMET,NET_MOTTA,"","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Net_ns_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1"};
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_Scrim: H_SPE_US_AB_Helmet_321_NCO
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Scrim, NCO)";
		hiddenSelectionsTextures[] = {HELMET_DUNKEL,SALAD,SALAD,"","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Scrim_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS_2.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_NCO_Scrim_ns: H_SPE_US_AB_Helmet_321_NCO_Scrim
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Scrim, NCO, Opened)";
		hiddenSelectionsTextures[] = {HELMET,SALAD,SALAD,"","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_NCO_Scrim_ns_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS_2.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};


	class H_SPE_US_AB_Helmet_321_CO : H_SPE_US_AB_Helmet_321
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (CO)";
		hiddenSelectionsTextures[] = {HELMET_ALT,"","","","",""};
		hiddenSelectionsMaterials[] = {US_321_CO,"",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_CO_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_CO_ns: H_SPE_US_AB_Helmet_321_CO
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (CO, Opened)";
		hiddenSelectionsTextures[] = {HELMET_DUNKEL,"","","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_CO_ns_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_CO_Net: H_SPE_US_AB_Helmet_321_CO
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Net, CO)";
		hiddenSelectionsTextures[] = {HELMET_DUNKEL,NET,"","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_CO_Net_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_CO_Net_ns: H_SPE_US_AB_Helmet_321_CO
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Net, CO, Opened)";
		hiddenSelectionsTextures[] = {HELMET,NET,"","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_CO_Net_ns_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_321_CO_ShrimpNet: H_SPE_US_AB_Helmet_321_CO
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (1/4 Net, CO)";
		hiddenSelectionsTextures[] = {HELMET_DUNKEL,NET_MOTTA,"","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_CO_Net_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_CO_ShrimpNet_ns: H_SPE_US_AB_Helmet_321_CO
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (1/4 Net, CO, Opened)";
		hiddenSelectionsTextures[] = {HELMET,NET_MOTTA,"","","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_CO_Net_ns_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_OS.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
	class H_SPE_US_AB_Helmet_321_CO_Scrim: H_SPE_US_AB_Helmet_321_CO
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Scrim, CO)";
		hiddenSelectionsTextures[] = {HELMET_DUNKEL,SALAD,SALAD,"","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_CO_Scrim_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_CS.p3d";
		};
	};
	class H_SPE_US_AB_Helmet_321_CO_Scrim_ns: H_SPE_US_AB_Helmet_321_CO_Scrim
	{
		author = "Heavy Ordnance Works";//"AWAR & IFA3 Team"
		dlc = "SPE";
		displayName = "US AB Helmet, M2 321st (Scrim, CO, Opened)";
		hiddenSelectionsTextures[] = {HELMET,SALAD,SALAD,"","",""};
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_AB_Helmet_502_CO_Scrim_ns_ca.paa";
		//Model = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_U1_m\US_Airborne\SPE_US_Airborne_Helmet_NS.p3d";
			hiddenSelections[] = {"camo","camo0","camo1","joke"};
		};
	};
