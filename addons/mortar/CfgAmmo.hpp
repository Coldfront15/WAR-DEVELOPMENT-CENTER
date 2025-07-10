class CfgAmmo {
    class ShellCore;
    class ShellBase: ShellCore {};
    class Sh_82mm_AMOS;
	class SPE_Sh_82_HE: Sh_82mm_AMOS {};
    class SPEX_Sh_M302_60_WP: ShellBase
    {
        ACE_damageType = "ace_compat_spe_explosive_incendiary";
        SPE_WP_Delay = 0.8; //How often damage is dealt, minimum 0.5
		SPE_WP_Intensity = 0.1; // How much damage
        SPE_Fire_Range = 4;
        SPE_Fire_BurnTime= 5;
		SPE_WP_BurnTime = 35; //How long the cloud deals damage
		SPE_WP_Range = 12; // Range of damage
        class EventHandlers
		{
			class WDC_Fire
			{
				init = "_this call wdc_medical_equipment_fnc_WPFire";
			};
		};
    };
    class SPE_Sh_81_HE: SPE_Sh_82_HE {};
	class SPE_M57_81_WP: SPE_Sh_81_HE
	{
		ACE_damageType = "ace_compat_spe_explosive_incendiary";
        SPE_Fire_Range = 6;
        SPE_Fire_BurnTime= 5;
        class EventHandlers
		{
			class WDC_Fire
			{
				init = "_this call wdc_medical_equipment_fnc_WPFire";
			};
		};
	};
};