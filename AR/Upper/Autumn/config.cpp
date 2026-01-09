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
	class ADM_ESPEN_AR10_Upper_AR10Upper_Autumn: ADM_ESPEN_AR10_Upper_AR10Upper
	{
		scope = 2;
		displayName = "AR-10 Autumn Upper";
		hiddenSelectionsTextures[] = {"ADMxDemonicRetex\AR\Upper\Autumn\Upper_Autumn.paa"};
	};
	class ADM_ESPEN_AR9_Upper_AR9Upper;
	class ADM_ESPEN_AR9_Upper_AR9Upper_Autumn: ADM_ESPEN_AR9_Upper_AR9Upper
	{
		scope = 2;
		displayName = "AR-9 Autumn Upper";
		hiddenSelectionsTextures[] = {"ADMxDemonicRetex\AR\Upper\Autumn\Upper_Autumn.paa"};
	};
	class ADM_ESPEN_AR15_Upper_AR15Upper;
	class ADM_ESPEN_AR15_Upper_AR15Upper_Autumn: ADM_ESPEN_AR15_Upper_AR15Upper
	{
		scope = 2;
		displayName = "AR-15 Autumn Upper";
		hiddenSelectionsTextures[] = {"ADMxDemonicRetex\AR\Upper\Autumn\Upper_Autumn.paa"};
	};
};
