class CfgPatches
{
	class ADM_Demonic_Retex_Armband
	{
		requiredAddons[] = {"DZ_Data","ADM_Demonic_Retex"};
	};
};
class CfgVehicles
{
	class ALV_UpgradedArmband_Double_Colorbase;
	class ALV_Double_Armband_IronHold: ALV_UpgradedArmband_Double_Colorbase
	{
		displayName = "Ironhold Upgraded Armband";
		scope = 2;
		hiddenSelectionsTextures[] = {"ADMxDemonicRetex\Armbands\IronHold\Ironhold.paa"};
	};
};