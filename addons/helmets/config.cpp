class CfgPatches
{
	class wdc_helemts
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"WW2_SPE_Assets_c_Characters_Americans_c_US_Army_Gear"};
	};
};

class cfgWeapons
{
	class U_BasicBody;
	class U_SPE_BasicBody: U_BasicBody
	{
		class ItemInfo;
	};

	//Needed/Includes SPE Defines
	#define HELMET_1 "\simc_lcd_43\data\lcd_us_pot_1_co.paa"
	#define HELMET_2 "\simc_lcd_43\data\lcd_us_pot_2_co.paa"
	#define HELMET_3 "\simc_lcd_43\data\lcd_us_pot_3_co.paa"
	#define HELMET_4 "\simc_lcd_43\data\lcd_us_pot_4_co.paa"
	#define HELMET_5 "\simc_lcd_43\data\lcd_us_pot_5_co.paa"
	#define HELMET_MEDIC "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Med_co.paa"
	#define HELMET_MEDIC_ALT "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_Med_Alt_co.paa"
	#define NET "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa" 
	#define NET_4 "\simc_lcd_43\data\lcd_helmet_net_2_co.paa"
	#define SALAD_1 "\simc_lcd_43\data\lcd_scrim_1_co.paa"
	#define SALAD_2 "\simc_lcd_43\data\lcd_scrim_2_co.paa"
	
	#define MTL_SALAD "simc_lcd_43\data\lcd_scrim.rvmat"
	#define FIR_LT "WW2\SPE_Assets_r\Characters\Americans_r\US_Army\US_Pot_1LT.rvmat"
	#define SEC_LT "WW2\SPE_Assets_r\Characters\Americans_r\US_Army\US_Pot_2LT.rvmat"
	#define CAP "WW2\SPE_Assets_r\Characters\Americans_r\US_Army\US_Pot_CPT.rvmat"
	#define NCO "WW2\SPE_Assets_r\Characters\Americans_r\US_Army\US_Pot_NCO.rvmat"
	#define CO "WW2\SPE_Assets_r\Characters\Americans_r\US_Army\US_Pot_CO.rvmat"
	#define US_MP "WW2\SPE_Assets_r\Characters\Americans_r\US_Army\US_Pot_MP.rvmat"

	#include "helmets.hpp"
	
	//Custom Include

	#include "helmets_321.hpp"
	#include "helmets_321_briel.hpp"
	#include "helmets_321_molohon.hpp"
	#include "helmets_321_mordica.hpp"
	#include "helmets_321_smith.hpp"

	#include "helmets_502.hpp"
	#include "helmets_502_huot.hpp"
	#include "helmets_502_archer.hpp"
	#include "helmets_502_sledge.hpp"
	#include "helmets_502_zalewska.hpp"
	#include "helmets_502_briel.hpp"
	#include "helmets_502_hardy.hpp"
	#include "helmets_502_ledford.hpp"
	#include "helmets_502_mantle.hpp"
	#include "helmets_502_marshall.hpp"
	#include "helmets_502_molohon.hpp"
	#include "helmets_502_mordica.hpp"
	#include "helmets_502_smith.hpp"
	#include "helmets_502_randazzo.hpp"
	#include "helmets_502_robinson.hpp"
	#include "helmets_502_cooper.hpp"
};