class CfgPatches
{
	class azw_SpaggieNeon
	{
		units[]				=	{"azw_SpaggieNeon"};
		weapons[]			=	{};
		requiredVersion		=	0.1;
		requiredAddons[]	=	{"DZ_Data","DZ_Scripts"};
	};
};

class CfgMods
{
	class azw_SpaggieNeon
	{
		name				=	"azw_SpaggieNeon";
		credits				=	"AndreZ";
		author				=	"AndreZ";
		authorID			=	"0";
		type				=	"mod";
		dependencies[]		=	{"World", "Game"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[]		=	{"azw_SpaggieNeon/scripts/3_Game"};
			};
			class worldScriptModule
			{
				value		=	"";
				files[]		=	{"azw_SpaggieNeon/scripts/4_world"};
			};
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	class azw_SpaggieNeon : Inventory_Base
	{
		scope=2;
		model="azw_SpaggieNeon\azw_SpaggieNeon.p3d";
	};
};