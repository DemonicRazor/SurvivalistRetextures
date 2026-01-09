class CfgPatches
{
	class ADM_Demonic_Retex_Grip_Tan
	{
		requiredAddons[] = {"DZ_Data","ADM_Custom_Weapons_AR_Base"};
	};
};
class CfgVehicles
{
	class ADM_ESPEN_AR_Grip_StraightGrip;
	class ADM_ESPEN_AR_Grip_StraightGrip_Tan: ADM_ESPEN_AR_Grip_StraightGrip
		{
		scope = 2;
		displayName = "ELI AR Straight Tan Grip";
		hiddenSelections[] = {"Grip"};
		hiddenSelectionsTextures[] = {"ADMxDemonicRetex\AR\Attachments\Grip's\Tan\StraightGrip_CO.paa"};
	};
	class ADM_ESPEN_AR_Grip_OverGrip;
	class ADM_ESPEN_AR_Grip_OverGrip_Tan: ADM_ESPEN_AR_Grip_OverGrip
	{
		scope = 2;
		displayName = "ELI AR Over Tan Grip";
		hiddenSelections[] = {"Grip"};
		hiddenSelectionsTextures[] = {"ADMxDemonicRetex\AR\Attachments\Grip's\Tan\OverGrip_CO.paa"};
	};
	class ADM_ESPEN_AR_Grip_PlasticGrip;
	class ADM_ESPEN_AR_Grip_PlasticGrip_Tan: ADM_ESPEN_AR_Grip_PlasticGrip
	{
		scope = 2;
		displayName = "ELI AR Plastic Tan Grip";
		hiddenSelections[] = {"Grip"};
		hiddenSelectionsTextures[] = {"ADMxDemonicRetex\AR\Attachments\Grip's\Tan\PlasticGrip_CO.paa"};
	};
	
	};
	