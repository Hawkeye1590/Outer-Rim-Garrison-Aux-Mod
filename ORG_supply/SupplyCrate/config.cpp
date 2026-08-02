class CfgPatches
{
	class ORG_Supply
	{
		author = "ORG_AUX_TEAM";

		units[]=
		{
			"ORG_Ammobox_medical",
			"ORG_Ammobox_rearm",
		};
		
		weapons[]=
		{
			""
		};
				
		requiredAddons[]=
		{
			
		};
		
		authors[] =
        {
			"ORG_AUX_TEAM",
			"Hawkeye"
        };
	};
};

class CfgEditorCategories
{
	class ORG_Objects
	{
		displayName = "[ORG] Outer Rim Garrison Objects";
	};
};

class CfgEditorSubcategories
{
	class ORG_Objects_Containers
	{
		displayName = "Resupplies";
	};
};

//reference link https://community.bistudio.com/wiki/CfgVehicles_Config_Reference#magazine
//reference link https://ace3.acemod.org/wiki/framework/dragging-framework.html
//reference link https://wiki.thecoolerserver.com/mission-making/scripts
//reference link https://ace3.acemod.org/wiki/framework/rearm-framework.html#31-make-an-object-into-a-rearm-source
//reference link https://ace3.acemod.org/wiki/framework/refuel-framework.html#21-make-an-object-into-a-refuel-source
//reference link https://ace3.acemod.org/wiki/framework/repair-framework.html#22-make-an-object-into-a-repair-facility

class CfgVehicles
{
	class JLTS_Ammobox_support_GAR;
	class JLTS_Ammobox_ammo_GAR;

	class ORG_Ammobox_medical : JLTS_Ammobox_support_GAR
	{
		displayName = "[ORG] Medical Supply Crate";
		editorCategory = "ORG_Objects";
		editorSubcategory = "ORG_Objects_Containers";
		author = "Hawkeye";
		ace_dragging_canDrag = 1
		ace_dragging_canCarry = 1
		ace_dragging_dragPosition[] = {0, 1.2, 0};
		ace_dragging_dragDirection = 0;
		ace_dragging_carryDirection = 0;
		transportMaxWeapons = 1200;
		transportMaxMagazines = 666000;
		maximumLoad = 666000;
		armor = 666;
		class TransportItems
		{
			class xx_ORG_BactaBandage
			{
				name = "ORG_BactaBandage";
				count = 120;
			};
			class xx_ORG_BasicBandage
			{
				name = "ORG_BasicBandage";
				count = 120;
			};
			class xx_ACE_tourniquet
			{
				name = "ACE_tourniquet";
				count = 120;
			};
			class xx_ORG_MorphineStim
			{
				name = "ORG_MorphineStim";
				count = 120;
			};
			class xx_ORG_EpinephrineStim
			{
				name = "ORG_EpinephrineStim";
				count = 120;
			};
			class xx_ACE_splint
			{
				name = "ACE_splint";
				count = 120;
			};
			class xx_ORG_AdenosineStim
			{
				name = "ORG_AdenosineStim";
				count = 120;
			};
			class xx_ORG_Kolto_1000
			{
				name = "ORG_Kolto_1000";
				count = 120;
			};
			class xx_ORG_Kolto_500
			{
				name = "ORG_Kolto_500";
				count = 120;
			};
			class xx_ORG_Kolto_250
			{
				name = "ORG_Kolto_250";
				count = 120;
			};
			class xx_ORG_Bacta_1000
			{
				name = "ORG_Bacta_1000";
				count = 120;
			};
			class xx_ORG_Bacta_500
			{
				name = "ORG_Bacta_500";
				count = 120;
			};
			class xx_ORG_Bacta_250
			{
				name = "ORG_Bacta_250";
				count = 120;
			};
			class xx_ORG_Cauterizer
			{
				name = "ORG_Cauterizer";
				count = 20;
			};
		};
	};

	class ORG_Ammobox_rearm : JLTS_Ammobox_ammo_GAR
	{
		displayName = "[ORG] Vehicle Rearm Supply Crate";
		editorCategory = "ORG_Objects";
		editorSubcategory = "ORG_Objects_Containers";
		author = "Hawkeye";
		ace_dragging_canDrag = 1
		ace_dragging_canCarry = 1
		ACE_maxWeightCarry = 66600;
		ACE_maxWeightDrag = 66600;
		transportMaxWeapons = 1200;
		transportMaxMagazines = 66600;
		maximumLoad = 66600;
		armor = 666;
		ace_rearm_defaultSupply = 1200;
		ace_refuel_fuelCargo=5000;
		ace_refuel_hooks[]= {{0.38,-3.17,-.7},{-0.41,-3.17,-.7}};
		class TransportItems
		{
		};
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
	};	
};
	
class cfgMods
{
	author="ORG_AUX_TEAM";
	timepacked="1687930196";
};