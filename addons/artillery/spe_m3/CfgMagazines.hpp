class CfgMagazines {
	class Default;
	class CA_Magazine: Default {};
	class VehicleMagazine: CA_Magazine {};
	class 32Rnd_155mm_Mo_shells: VehicleMagazine {};
	class 8Rnd_82mm_Mo_shells: 32Rnd_155mm_Mo_shells {};

	class wdc_artillery_SPE_M3_CASING_CHARGE_1: 8Rnd_82mm_Mo_shells {
		scope = 2;
		scopeArsenal = 2;
		author = "WDC Team";
        displayName = "105mm Casing, Charge 1";
		displayNameShort = CSTRING(105_casing_charge_1_short);
		descriptionShort = CSTRING(105_casing_charge_1_desc);
        model = "\WW2\SPE_Assets_m\Weapons\Misc_U1_m\Particles\SPE_Shellcases_M1.p3d";
        editorPreview = QPATHTOF(spe_m3\data\casing.jpg);
		picture = QPATHTOF(spe_m3\data\casing.paa);
        mass = 20;
		count = 1;
		type = 256;
	};

	class wdc_artillery_SPE_M3_CASING_CHARGE_2: wdc_artillery_SPE_M3_CASING_CHARGE_1 {
        displayName = CSTRING(105_casing_charge_2);
		displayNameShort = CSTRING(105_casing_charge_2_short);
		descriptionShort = CSTRING(105_casing_charge_2_desc);
	};

	class wdc_artillery_SPE_M3_CASING_CHARGE_3: wdc_artillery_SPE_M3_CASING_CHARGE_1 {
		displayName = CSTRING(105_casing_charge_3);
		displayNameShort = CSTRING(105_casing_charge_3_short);
		descriptionShort = CSTRING(105_casing_charge_3_desc);
	};

	class wdc_artillery_SPE_M3_CASING_CHARGE_4: wdc_artillery_SPE_M3_CASING_CHARGE_1 {
		displayName = CSTRING(105_casing_charge_4);
		displayNameShort = CSTRING(105_casing_charge_4_short);
		descriptionShort = CSTRING(105_casing_charge_4_desc);
	};

	class wdc_artillery_SPE_M3_CASING_CHARGE_5: wdc_artillery_SPE_M3_CASING_CHARGE_1 {
		displayName = CSTRING(105_casing_charge_5);
		displayNameShort = CSTRING(105_casing_charge_5_short);
		descriptionShort = CSTRING(105_casing_charge_5_desc);
	};
	
	class wdc_artillery_SPE_M3_M1_HE_Tube: 8Rnd_82mm_Mo_shells
	{
		scope = 2;
		scopeArsenal = 2;
		author = "War Development Center";
        displayName = "105mm M1 HE, Fiberboard Tube";
		displayNameShort = "105mm HE tube";
        model = QPATHTOF(spe_m3\wdc_105_M1_HE_M54_PD\wdc_105_fiberBoard_M1_HE_PD);
        editorPreview = QPATHTOF(spe_m3\wdc_105_M1_HE_M54_PD\data\HE_FIBERBOARD.jpg);
		picture = QPATHTOF(spe_m3\data\tube.paa);
		descriptionShort = "A tube containing a M1 HE shell and a casing";
        mass = 50;
		count = 1;
		type = 256;
	};

	class wdc_artillery_SPE_M3_M1_HE_SHELL_HE: 8Rnd_82mm_Mo_shells {
		scope = 2;
		scopeArsenal = 2;
		author = "TBD Team";
        displayName = "105mm HE shell";
		displayNameShort = "105mm HE shell";
        model = QPATHTOF(spe_m3\wdc_105_M1_HE_M54_PD\wdc_105_bullet_M1_HE_PD);
        editorPreview = QPATHTOF(spe_m3\data\HE_shell.jpg);
		picture = QPATHTOF(spe_m3\data\shell.paa);
		descriptionShort = "A 105mm HE shell";
        mass = 30;
		count = 1;
		type = 256;
	};

	class wdc_artillery_SPE_M3_M1_HE_CHARGE_MAG_1: 8Rnd_82mm_Mo_shells {
		scope = 1;
		scopeArsenal = 1;
		author = "wdc Team";
		displayName = CSTRING(105mm_HE_CHARGE_1);
		displayNameShort = CSTRING(105mm_HE_CHARGE_1);
		model = QPATHTOF(spe_m3\wdc_105_M1_HE_M54_PD\wdc_105_shell_M1_HE_PD);
		descriptionShort = CSTRING(105mm_HE_CHARGE_DESC);
		initSpeed = 110;
		mass = 50;
		count = 1;
		ammo = QUOTE(wdc_artillery_SPE_M3_M1_HE_SHELL_HE);
		type = 256;
	};

	class wdc_artillery_SPE_M3_M1_HE_CHARGE_MAG_2: wdc_artillery_SPE_M3_M1_HE_CHARGE_MAG_1 {
		displayName = CSTRING(105mm_HE_CHARGE_2);
		displayNameShort = CSTRING(105mm_HE_CHARGE_2);
		model = QPATHTOF(spe_m3\wdc_105_M1_HE_M54_PD\wdc_105_shell_M1_HE_PD);
		initSpeed = 143;
	};

	class wdc_artillery_SPE_M3_M1_HE_CHARGE_MAG_3: wdc_artillery_SPE_M3_M1_HE_CHARGE_MAG_1 {
		displayName = CSTRING(105mm_HE_CHARGE_3);
		displayNameShort = CSTRING(105mm_HE_CHARGE_3);
		model = QPATHTOF(spe_m3\wdc_105_M1_HE_M54_PD\wdc_105_shell_M1_HE_PD);
		initSpeed = 186;
	};

	class wdc_artillery_SPE_M3_M1_HE_CHARGE_MAG_4: wdc_artillery_SPE_M3_M1_HE_CHARGE_MAG_1 {
		displayName = CSTRING(105mm_HE_CHARGE_4);
		displayNameShort = CSTRING(105mm_HE_CHARGE_4);
		model = QPATHTOF(spe_m3\wdc_105_M1_HE_M54_PD\wdc_105_shell_M1_HE_PD);
		initSpeed = 248;
	};

	class wdc_artillery_SPE_M3_M1_HE_CHARGE_MAG_5: wdc_artillery_SPE_M3_M1_HE_CHARGE_MAG_1 {
		displayName = CSTRING(105mm_HE_CHARGE_5);
		displayNameShort = CSTRING(105mm_HE_CHARGE_5);
		model = QPATHTOF(spe_m3\wdc_105_M1_HE_M54_PD\wdc_105_shell_M1_HE_PD);
		initSpeed = 311;
	};

	class wdc_artillery_SPE_M3_M1_HE_VT_Tube: 8Rnd_82mm_Mo_shells
	{
		scope = 2;
		scopeArsenal = 2;
		author = "War Development Center";
        displayName = "105mm M1 HE/VT, Fiberboard Tube";
		displayNameShort = "105mm HE/VT tube";
        model = QPATHTOF(spe_m3\wdc_105_M1_HE_VT_T80E6\wdc_105_fiberBoard_M1_HE_VT);
        editorPreview = QPATHTOF(spe_m3\wdc_105_M1_HE_VT_T80E6\data\HE_VT_FIBERBOARD.jpg);
		picture = QPATHTOF(spe_m3\data\tube.paa);
		descriptionShort = "A tube containing a M1 HE/VT shell and a casing";
        mass = 50;
		count = 1;
		type = 256;
	};

	class wdc_artillery_SPE_M3_M1_HE_SHELL_VT: 8Rnd_82mm_Mo_shells {
		scope = 2;
		scopeArsenal = 2;
		author = "TBD Team";
        displayName = "105mm HE/VT shell";
		displayNameShort = "105mm HE/VT shell";
        model = QPATHTOF(spe_m3\wdc_105_M1_HE_VT_T80E6\wdc_105_bullet_M1_HE_VT);
        editorPreview = QPATHTOF(spe_m3\data\HE_shell.jpg);
		picture = QPATHTOF(spe_m3\data\shell.paa);
		descriptionShort = "A 105mm HE/VT shell";
        mass = 30;
		count = 1;
		type = 256;
	};

	class wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_MAG_1: 8Rnd_82mm_Mo_shells {
		scope = 1;
		scopeArsenal = 1;
		author = "wdc Team";
		displayName = CSTRING(105mm_HE_VT_CHARGE_1);
		displayNameShort = CSTRING(105mm_HE_CHARGE_1);
		model = QPATHTOF(spe_m3\wdc_105_M1_HE_VT_T80E6\wdc_105_shell_M1_HE_VT);
		descriptionShort = CSTRING(105mm_HE_CHARGE_DESC);
		initSpeed = 110;
		mass = 50;
		count = 1;
		ammo = QUOTE(wdc_artillery_SPE_M3_M1_HE_SHELL_VT);
		type = 256;
	};

	class wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_MAG_2: wdc_artillery_SPE_M3_M1_HE_CHARGE_MAG_1 {
		displayName = CSTRING(105mm_HE_VT_CHARGE_2);
		displayNameShort = CSTRING(105mm_HE_VT_CHARGE_2);
		model = QPATHTOF(spe_m3\wdc_105_M1_HE_VT_T80E6\wdc_105_shell_M1_HE_VT);
		ammo = QUOTE(wdc_artillery_SPE_M3_M1_HE_SHELL_VT);
		initSpeed = 143;
	};

	class wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_MAG_3: wdc_artillery_SPE_M3_M1_HE_CHARGE_MAG_1 {
		displayName = CSTRING(105mm_HE_VT_CHARGE_3);
		displayNameShort = CSTRING(105mm_HE_VT_CHARGE_3);
		model = QPATHTOF(spe_m3\wdc_105_M1_HE_VT_T80E6\wdc_105_shell_M1_HE_VT);
		ammo = QUOTE(wdc_artillery_SPE_M3_M1_HE_SHELL_VT);
		initSpeed = 186;
	};

	class wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_MAG_4: wdc_artillery_SPE_M3_M1_HE_CHARGE_MAG_1 {
		displayName = CSTRING(105mm_HE_VT_CHARGE_4);
		displayNameShort = CSTRING(105mm_HE_VT_CHARGE_4);
		model = QPATHTOF(spe_m3\wdc_105_M1_HE_VT_T80E6\wdc_105_shell_M1_HE_VT);
		ammo = QUOTE(wdc_artillery_SPE_M3_M1_HE_SHELL_VT);
		initSpeed = 248;
	};

	class wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_MAG_5: wdc_artillery_SPE_M3_M1_HE_CHARGE_MAG_1 {
		displayName = CSTRING(105mm_HE_VT_CHARGE_5);
		displayNameShort = CSTRING(105mm_HE_VT_CHARGE_5);
		model = QPATHTOF(spe_m3\wdc_105_M1_HE_VT_T80E6\wdc_105_shell_M1_HE_VT);
		ammo = QUOTE(wdc_artillery_SPE_M3_M1_HE_SHELL_VT);
		initSpeed = 311;
	};


	class wdc_artillery_SPE_M3_M67_HEAT_Tube: 8Rnd_82mm_Mo_shells
	{
		scope = 2;
		scopeArsenal = 2;
		author = "War Development Center";
        displayName = "105mm M67 HEAT, Fiberboard Tube";
		displayNameShort = "105mm HEAT tube";
        model = QPATHTOF(spe_m3\wdc_105_M67_HEAT_BD_M62\wdc_105_fiberBoard_M67_HEAT);
        editorPreview = QPATHTOF(spe_m3\wdc_105_M67_HEAT_BD_M62\data\HEAT_FIBERBOARD.jpg);
		picture = QPATHTOF(spe_m3\data\tube.paa);
		descriptionShort = "A tube containing a M67 HEAT shell and a casing";
        mass = 50;
		count = 1;
		type = 256;
	};

	class wdc_artillery_SPE_M3_M67_HEAT_SHELL_HEAT: 8Rnd_82mm_Mo_shells {
		scope = 2;
		scopeArsenal = 2;
		author = "TBD Team";
        displayName = "105mm HEAT shell";
		displayNameShort = "105mm HEAT shell";
        model = QPATHTOF(spe_m3\wdc_105_M67_HEAT_BD_M62\wdc_105_bullet_M67_HEAT);
        editorPreview = QPATHTOF(spe_m3\data\HE_shell.jpg);
		picture = QPATHTOF(spe_m3\data\shell.paa);
		descriptionShort = "A 105mm HEAT shell";
        mass = 30;
		count = 1;
		type = 256;
	};

	class wdc_artillery_SPE_M3_M67_HEAT_CHARGE_MAG_5: 8Rnd_82mm_Mo_shells {
		scope = 1;
		scopeArsenal = 1;
		author = "wdc Team";
		displayName = CSTRING(105mm_HEAT);
		displayNameShort = CSTRING(105mm_HEAT_SHORT);
		model = QPATHTOF(spe_m3\wdc_105_M67_HEAT_BD_M62\wdc_105_shell_M67_HEAT);
		descriptionShort = CSTRING(105mm_HEAT_DESC);
		initSpeed = 311;
		mass = 50;
		count = 1;
		ammo = QUOTE(SPE_M3_M67_HEAT);
		type = 256;
	};


	class wdc_artillery_SPE_M3_M60_WP_Tube: 8Rnd_82mm_Mo_shells
	{
		scope = 2;
		scopeArsenal = 2;
		author = "War Development Center";
        displayName = "105mm M60 WP, Fiberboard Tube";
		displayNameShort = "105mm WP tube";
        model = QPATHTOF(spe_m3\wdc_105_M60_WP_PD_M57\wdc_105_fiberBoard_M60_WP);
        editorPreview = QPATHTOF(spe_m3\wdc_105_M60_WP_PD_M57\data\WP_FIBERBOARD.jpg);
		picture = QPATHTOF(spe_m3\data\tube.paa);
		descriptionShort = "A tube containing a M60 WP shell and a casing";
        mass = 50;
		count = 1;
		type = 256;
	};

	class wdc_artillery_SPE_M3_M60_WP_SHELL_WP: 8Rnd_82mm_Mo_shells {
		scope = 2;
		scopeArsenal = 2;
		author = "TBD Team";
        displayName = "105mm WP shell";
		displayNameShort = "105mm WP shell";
         model = QPATHTOF(spe_m3\wdc_105_M60_WP_PD_M57\wdc_105_shell_M60_WP);
        editorPreview = QPATHTOF(spe_m3\data\SMK_shell.jpg);
		picture = QPATHTOF(spe_m3\data\shell.paa);
		descriptionShort = "A 105mm WP shell";
        mass = 30;
		count = 1;
		type = 256;
	};

	class wdc_artillery_SPE_M3_M60_WP_CHARGE_MAG_1: 8Rnd_82mm_Mo_shells {
		scope = 1;
		scopeArsenal = 1;
		author = "War Development Center";
		displayName = CSTRING(105mm_WP_CHARGE_1);
		displayNameShort = CSTRING(105mm_WP_CHARGE_1);
		model = QPATHTOF(spe_m3\wdc_105_M60_WP_PD_M57\wdc_105_shell_M60_WP);
		descriptionShort = CSTRING(105mm_WP_CHARGE_DESC);
		initSpeed = 110;
		mass = 50;
		count = 1;
		ammo = QUOTE(wdc_artillery_SPE_M3_M60_WP_SHELL_WP);
		type = 256;
	};
	
	class wdc_artillery_SPE_M3_M60_WP_CHARGE_MAG_2: wdc_artillery_SPE_M3_M60_WP_CHARGE_MAG_1 {
		displayName = CSTRING(105mm_WP_CHARGE_2);
		displayNameShort = CSTRING(105mm_WP_CHARGE_2);
		model = QPATHTOF(spe_m3\wdc_105_M60_WP_PD_M57\wdc_105_shell_M60_WP);
		initSpeed = 143;
	};

	class wdc_artillery_SPE_M3_M60_WP_CHARGE_MAG_3: wdc_artillery_SPE_M3_M60_WP_CHARGE_MAG_1 {
		displayName = CSTRING(105mm_WP_CHARGE_3);
		displayNameShort = CSTRING(105mm_WP_CHARGE_3);
		model = QPATHTOF(spe_m3\wdc_105_M60_WP_PD_M57\wdc_105_shell_M60_WP);
		initSpeed = 186;
	};

	class wdc_artillery_SPE_M3_M60_WP_CHARGE_MAG_4: wdc_artillery_SPE_M3_M60_WP_CHARGE_MAG_1 {
		displayName = CSTRING(105mm_WP_CHARGE_4);
		displayNameShort = CSTRING(105mm_WP_CHARGE_4);
		model = QPATHTOF(spe_m3\wdc_105_M60_WP_PD_M57\wdc_105_shell_M60_WP);
		initSpeed = 248;
	};
	
	class wdc_artillery_SPE_M3_M60_WP_CHARGE_MAG_5: wdc_artillery_SPE_M3_M60_WP_CHARGE_MAG_1 {
		displayName = CSTRING(105mm_WP_CHARGE_5);
		displayNameShort = CSTRING(105mm_WP_CHARGE_5);
		model = QPATHTOF(spe_m3\wdc_105_M60_WP_PD_M57\wdc_105_shell_M60_WP);
		initSpeed = 311;
	};
};		