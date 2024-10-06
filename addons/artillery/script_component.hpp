#define COMPONENT artillery
#define COMPONENT_BEAUTIFIED artillery
#include "\x\cba\addons\main\script_macros_common.hpp"
#include "\x\wdc\addons\main\script_mod.hpp"

//#define DISABLE_COMPILE_CACHE

#ifdef DISABLE_COMPILE_CACHE
    #undef PREP
    #define PREP(fncName) TRIPLES(ADDON,fnc,fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
#else
    #undef PREP
    #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#endif

#define PREP_SUB(subfolder,fncName) [QPATHTOF(functions\subfolder\DOUBLES(fnc,fncName).sqf), QUOTE(DFUNC(DOUBLES(subfolder,fncName)))] call CBA_fnc_compileFunction

#define WDC_ARTILLERY(cmp,fncName) wdc_artillery##_##cmp##_##fnc##_##fncName
//#define TBD_MORT(cmp,fncName) tbd##_##cmp##_##fnc##_##fncName

#define WDC_M3 wdc_m3
#define WDC_M3_WEAPON wdc_m3_weapon

#define WDC_M3_SHOT_SOUNDSET wdc_m3_shot_soundset
#define WDC_M3_SHOT_SOUNDSHADER wdc_M3_shot_soundshader

#define wdc_artillery_SPE_M3_M1_HE_BOX wdc_artillery_SPE_M3_M1_HE_box

#define wdc_artillery_SPE_M3_M1_HE_Tube wdc_artillery_SPE_M3_M1_HE_Tube
#define wdc_artillery_SPE_M3_M1_HE_VT_Tube wdc_artillery_SPE_M3_M1_HE_VT_Tube
#define wdc_artillery_SPE_M3_M60_WP_Tube wdc_artillery_SPE_M3_M60_WP_Tube
#define wdc_artillery_SPE_M3_M67_HEAT_Tube wdc_artillery_SPE_M3_M67_HEAT_Tube

#define wdc_artillery_SPE_M3_CASING_CHARGE wdc_artillery_SPE_M3_CASING_CHARGE
#define wdc_artillery_SPE_M3_CASING_CHARGE_1 wdc_artillery_SPE_M3_CASING_CHARGE_1
#define wdc_artillery_SPE_M3_CASING_CHARGE_2 wdc_artillery_SPE_M3_CASING_CHARGE_2
#define wdc_artillery_SPE_M3_CASING_CHARGE_3 wdc_artillery_SPE_M3_CASING_CHARGE_3
#define wdc_artillery_SPE_M3_CASING_CHARGE_4 wdc_artillery_SPE_M3_CASING_CHARGE_4
#define wdc_artillery_SPE_M3_CASING_CHARGE_5 wdc_artillery_SPE_M3_CASING_CHARGE_5


#define wdc_artillery_SPE_M3_M1_HE_SHELL_HE wdc_artillery_SPE_M3_M1_HE_SHELL_HE
#define wdc_artillery_SPE_M3_M1_HE_CHARGE wdc_artillery_SPE_M3_M1_HE_charge
#define wdc_artillery_SPE_M3_M1_HE_CHARGE_1 wdc_artillery_SPE_M3_M1_HE_charge_1
#define wdc_artillery_SPE_M3_M1_HE_CHARGE_2 wdc_artillery_SPE_M3_M1_HE_charge_2
#define wdc_artillery_SPE_M3_M1_HE_CHARGE_3 wdc_artillery_SPE_M3_M1_HE_charge_3
#define wdc_artillery_SPE_M3_M1_HE_CHARGE_4 wdc_artillery_SPE_M3_M1_HE_charge_4
#define wdc_artillery_SPE_M3_M1_HE_CHARGE_5 wdc_artillery_SPE_M3_M1_HE_charge_5
#define wdc_artillery_SPE_M3_M1_HE_CHARGE_MAG_1 wdc_artillery_SPE_M3_M1_HE_charge_mag_1
#define wdc_artillery_SPE_M3_M1_HE_CHARGE_MAG_2 wdc_artillery_SPE_M3_M1_HE_charge_mag_2
#define wdc_artillery_SPE_M3_M1_HE_CHARGE_MAG_3 wdc_artillery_SPE_M3_M1_HE_charge_mag_3
#define wdc_artillery_SPE_M3_M1_HE_CHARGE_MAG_4 wdc_artillery_SPE_M3_M1_HE_charge_mag_4
#define wdc_artillery_SPE_M3_M1_HE_CHARGE_MAG_5 wdc_artillery_SPE_M3_M1_HE_charge_mag_5

#define wdc_artillery_SPE_M3_M1_HE_SHELL_VT wdc_artillery_SPE_M3_M1_HE_SHELL_VT
#define wdc_artillery_SPE_M3_M1_HE_VT_CHARGE wdc_artillery_SPE_M3_M1_HE_vt_charge
#define wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_1 wdc_artillery_SPE_M3_M1_HE_VT_charge_1
#define wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_2 wdc_artillery_SPE_M3_M1_HE_VT_charge_2
#define wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_3 wdc_artillery_SPE_M3_M1_HE_VT_charge_3
#define wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_4 wdc_artillery_SPE_M3_M1_HE_VT_charge_4
#define wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_5 wdc_artillery_SPE_M3_M1_HE_VT_charge_5
#define wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_MAG_1 wdc_artillery_SPE_M3_M1_HE_VT_charge_mag_1
#define wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_MAG_2 wdc_artillery_SPE_M3_M1_HE_VT_charge_mag_2
#define wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_MAG_3 wdc_artillery_SPE_M3_M1_HE_VT_charge_mag_3
#define wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_MAG_4 wdc_artillery_SPE_M3_M1_HE_VT_charge_mag_4
#define wdc_artillery_SPE_M3_M1_HE_VT_CHARGE_MAG_5 wdc_artillery_SPE_M3_M1_HE_VT_charge_mag_5

#define wdc_artillery_SPE_M3_M67_HEAT_SHELL_HEAT wdc_artillery_SPE_M3_M67_HEAT_SHELL_HEAT
#define wdc_artillery_SPE_M3_M67_HEAT_CHARGE wdc_artillery_SPE_M3_M67_HEAT_charge
#define wdc_artillery_SPE_M3_M67_HEAT_CHARGE_5 wdc_artillery_SPE_M3_M67_HEAT_charge_5
#define wdc_artillery_SPE_M3_M67_HEAT_CHARGE_MAG_5 wdc_artillery_SPE_M3_M67_HEAT_charge_mag_5

#define wdc_artillery_SPE_M3_M60_WP_SHELL_WP wdc_artillery_SPE_M3_M60_WP_SHELL_WP
#define wdc_artillery_SPE_M3_M60_WP_CHARGE wdc_artillery_SPE_M3_M60_WP_charge
#define wdc_artillery_SPE_M3_M60_WP_CHARGE_1 wdc_artillery_SPE_M3_M60_WP_charge_1
#define wdc_artillery_SPE_M3_M60_WP_CHARGE_2 wdc_artillery_SPE_M3_M60_WP_charge_2
#define wdc_artillery_SPE_M3_M60_WP_CHARGE_3 wdc_artillery_SPE_M3_M60_WP_charge_3
#define wdc_artillery_SPE_M3_M60_WP_CHARGE_4 wdc_artillery_SPE_M3_M60_WP_charge_4
#define wdc_artillery_SPE_M3_M60_WP_CHARGE_5 wdc_artillery_SPE_M3_M60_WP_charge_5
#define wdc_artillery_SPE_M3_M60_WP_CHARGE_MAG_1 wdc_artillery_SPE_M3_M60_WP_charge_mag_1
#define wdc_artillery_SPE_M3_M60_WP_CHARGE_MAG_2 wdc_artillery_SPE_M3_M60_WP_charge_mag_2
#define wdc_artillery_SPE_M3_M60_WP_CHARGE_MAG_3 wdc_artillery_SPE_M3_M60_WP_charge_mag_3
#define wdc_artillery_SPE_M3_M60_WP_CHARGE_MAG_4 wdc_artillery_SPE_M3_M60_WP_charge_mag_4
#define wdc_artillery_SPE_M3_M60_WP_CHARGE_MAG_5 wdc_artillery_SPE_M3_M60_WP_charge_mag_5

#define TOW_RADIUS 10
#define ATTACH_RADIUS 2

/* Smoother Weapon config */
#define PACKAGE(WPNNAME,TAILNAME,PREFIX) soundSetShot[] = {TRIPLE(PREFIX,WPNNAME,Shot_SoundSet),TRIPLE(PREFIX,TAILNAME,Tail_SoundSet)};
#define PACKAGELAYER(WPNNAME,TAILNAME,PREFIX) soundSetShot[] = {TRIPLE(PREFIX,WPNNAME,Shot_SoundSet),TRIPLE(PREFIX,TAILNAME,Tail_SoundSet),TRIPLE(PREFIX,WPNNAME,stereoLayer_SoundSet)};
#define PACKAGELAYERCASINGS(WPNNAME,TAILNAME,CASINGSNAME,PREFIX) soundSetShot[] = {TRIPLE(PREFIX,WPNNAME,Shot_SoundSet),TRIPLE(PREFIX,TAILNAME,Tail_SoundSet),TRIPLE(PREFIX,WPNNAME,stereoLayer_SoundSet),TRIPLE(PREFIX,CASINGSNAME,bulletCasings_SoundSet)};

/* Quick framework-compatible misc weapon stuff */
#define MACRO_RELOADSOUND(WEAPONNAME,SOUNDVOLUME,PITCHVALUE,MAXDISTANCE,FILEPATH) reloadMagazineSound[] = {##FILEPATH##\specific\##WEAPONNAME##\reload, SOUNDVOLUME , PITCHVALUE , MAXDISTANCE };
#define MACRO_DRYSOUND(WEAPONNAME,SOUNDVOLUME,PITCHVALUE,MAXDISTANCE,FILEPATH) drySound[] = {##FILEPATH##\specific\##WEAPONNAME##\empty, SOUNDVOLUME , PITCHVALUE , MAXDISTANCE };
#define MACRO_FIREMODESOUND(WEAPONNAME,SOUNDVOLUME,PITCHVALUE,MAXDISTANCE,FILEPATH) changeFiremodeSound[] = {##FILEPATH##\specific\##WEAPONNAME##\firemode, SOUNDVOLUME , PITCHVALUE , MAXDISTANCE };
#define MACRO_SILENTRELOAD(FILEPATH) reloadMagazineSound[] = {##FILEPATH##\shared\silence,0,1,0};
#define MACRO_BIPODUP(WEAPONNAME,SOUNDVOLUME,PITCHVALUE,MAXDISTANCE,FILEPATH) soundBipodUp[]	= {##FILEPATH##\specific\##WEAPONNAME##\bipodUp, SOUNDVOLUME , PITCHVALUE , MAXDISTANCE };
#define MACRO_BIPODDOWN(WEAPONNAME,SOUNDVOLUME,PITCHVALUE,MAXDISTANCE,FILEPATH) soundBipodDown[]	= {##FILEPATH##\specific\##WEAPONNAME##\bipodUp, SOUNDVOLUME , PITCHVALUE , MAXDISTANCE };


/* Recurring scripted functions */
// Sidechain
#define MACRO_SIDECHAIN(WEAPON,SUFFIX,PREFIX) \
	class DOUBLE(PREFIX,sideChainEH) { \
		fired = QUOTE(_this params ['_unit']; [ARR_5(_unit,TRIPLE(PREFIX,sideChainDist,SUFFIX),TRIPLE(PREFIX,sideChainBottom,SUFFIX),TRIPLE(PREFIX,sideChainHold,SUFFIX),TRIPLE(PREFIX,sideChainEnd,SUFFIX))] call SPE_soundFunction_vehicleSidechainFired); \
	};

#define MACRO_CUSTOMSIDECHAIN(WEAPON,DIST,BOTTOM,HOLD,END,PREFIX) \
	class DOUBLE(PREFIX,sideChainEH) { \
		fired = QUOTE(_this params ['_unit']; [ARR_5(_unit,DIST,BOTTOM,HOLD,END)] call SPE_soundFunction_vehicleSidechainFired;); \
	};

// Incoming projectiles
#define MACRO_INCOMINGPROJECTILE(WEAPON,SOUNDSETSOURCENAME,PREFIX) \
	class TRIPLE(PREFIX,WEAPON,incomingEH) { \
		init = QUOTE(_this params ['_projectile']; [ARR_2(_projectile,QQUOTE(SOUNDSETSOURCENAME))] call SPE_fnc_attachIncomingSound;); \
	};
