class CfgPatches
{
	class ArmaGlow
	{
		author = "Milo";
		name = "Arma Glow";
		requiredAddons[] =
		{
			"A3_Data_F_AoW_Loadorder"
		};
		requiredVersion = 2.20;
		units[] = {};
		weapons[] = {};
		version[] = {0,1,0};
		versionStr = "0.1.0";
	};
};

class CfgFunctions
{
	class ArmaGlow
	{
		class Functions
		{
			file = "\armaglow\addons\armaglow\Functions";
			class preInit { preInit = 1; };
		};
	};
};
