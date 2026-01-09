class CfgPatches
{
	class ADM_Custom_Weapons_ESPEN_AR10_Upper
	{
		requiredAddons[] = {"DZ_Data","ADM_Custom_Weapons_AR_Base"};
	};
};
class CfgWeapons
{
	class ADM_ESPEN_AR10_Upper_AR10Upper;
	class ADM_ESPEN_AR10_Upper_AR10Upper_Tan: ADM_ESPEN_AR10_Upper_AR10Upper
	{
		scope = 2;
		displayName = "AR-10 Tan Upper";
		hiddenSelectionsTextures[] = {"ADMxDemonicRetex\AR\Upper\Tan\Upper_Tan.paa"};
	};
	class ADM_ESPEN_AR9_Upper_AR9Upper;
	class ADM_ESPEN_AR9_Upper_AR9Upper_Tan: ADM_ESPEN_AR9_Upper_AR9Upper
	{
		scope = 2;
		displayName = "AR-9 Tan Upper";
		hiddenSelectionsTextures[] = {"ADMxDemonicRetex\AR\Upper\Tan\Upper_Tan.paa"};
	};
	class ADM_ESPEN_AR15_Upper_AR15Upper;
	class ADM_ESPEN_AR15_Upper_AR15Upper_Tan: ADM_ESPEN_AR15_Upper_AR15Upper
	{
		scope = 2;
		displayName = "AR-15 Tan Upper";
		hiddenSelectionsTextures[] = {"ADMxDemonicRetex\AR\Upper\Tan\Upper_Tan.paa"};
	};
};
