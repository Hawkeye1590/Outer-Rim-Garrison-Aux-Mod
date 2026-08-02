class CfgPatches
{
	class Outer_Rim_Garrison
	{
		author= "ORG_AUX_TEAM";
		units[]=
		{

		};
		weapons[]=
		{

		};
		requiredAddons[]=
		{

		};
		authors[] =
        {
			"ORG_AUX_TEAM",
			"Hawkeye",
        };
	};
};

class Extended_PostInit_EventHandlers
{
	class initPlayerLocal_event
	{
		init="call compile preprocessFileLineNumbers 'ORG_main\functions\initPlayerLocal.sqf'";
	};
};

class cfgMods
{
	author="ORG_AUX_TEAM";
	timepacked="1687930196";
};