#pragma once 
#include <vector>
#include <string>
#pragma region Weapon
static std::vector<std::string> weaponNames =
{
	"WEAPON_KNIFE", "WEAPON_NIGHTSTICK", "WEAPON_HAMMER", "WEAPON_BAT", "WEAPON_GOLFCLUB", "WEAPON_CROWBAR",
	"WEAPON_PISTOL", "WEAPON_COMBATPISTOL", "WEAPON_APPISTOL", "WEAPON_PISTOL50", "WEAPON_MICROSMG", "WEAPON_SMG",
	"WEAPON_ASSAULTSMG", "WEAPON_ASSAULTRIFLE", "WEAPON_CARBINERIFLE", "WEAPON_ADVANCEDRIFLE", "WEAPON_MG",
	"WEAPON_COMBATMG", "WEAPON_PUMPSHOTGUN", "WEAPON_SAWNOFFSHOTGUN", "WEAPON_ASSAULTSHOTGUN", "WEAPON_BULLPUPSHOTGUN",
	"WEAPON_STUNGUN", "WEAPON_SNIPERRIFLE", "WEAPON_HEAVYSNIPER", "WEAPON_GRENADELAUNCHER", "WEAPON_GRENADELAUNCHER_SMOKE",
	"WEAPON_RPG", "WEAPON_MINIGUN", "WEAPON_GRENADE", "WEAPON_STICKYBOMB", "WEAPON_SMOKEGRENADE", "WEAPON_BZGAS",
	"WEAPON_MOLOTOV", "WEAPON_FIREEXTINGUISHER", "WEAPON_PETROLCAN",
	"WEAPON_SNSPISTOL", "WEAPON_SPECIALCARBINE", "WEAPON_HEAVYPISTOL", "WEAPON_BULLPUPRIFLE", "WEAPON_HOMINGLAUNCHER",
	"WEAPON_PROXMINE", "WEAPON_SNOWBALL", "WEAPON_VINTAGEPISTOL", "WEAPON_DAGGER", "WEAPON_FIREWORK", "WEAPON_MUSKET",
	"WEAPON_MARKSMANRIFLE", "WEAPON_HEAVYSHOTGUN", "WEAPON_GUSENBERG", "WEAPON_HATCHET", "WEAPON_RAILGUN", "WEAPON_FLAREGUN",
	"WEAPON_KNUCKLE", "GADGET_NIGHTVISION", "GADGET_PARACHUTE", "WEAPON_MARKSMANPISTOL",
	//MK2
	"WEAPON_HEAVYSNIPER_MK2", "WEAPON_BULLPUPRIFLE_MK2","WEAPON_MARKSMANRIFLE_MK2","WEAPON_PUMPSHOTGUN_MK2","WEAPON_REVOLVER_MK2","WEAPON_SNSPISTOL_MK2",
	"WEAPON_SPECIALCARBINE_MK2","WEAPON_PUMPSHOTGUN_MK2","WEAPON_ASSAULTRIFLE_MK2","WEAPON_CARBINERIFLE_MK2","WEAPON_COMBATMG_MK2","WEAPON_PISTOL_MK2","WEAPON_SMG_MK2",
	//1.44
	"WEAPON_STONE_HATCHET"

};

struct WeaponInfo
{

	std::string Hash;
	std::vector<std::vector<std::string>> Compment;
};

static std::vector<WeaponInfo> Info =
{
	{ "WEAPON_AUTOSHOTGUN",
{
	/*WAPClip*/{ "COMPONENT_AUTOSHOTGUN_CLIP_01", },
}
	},
{ "WEAPON_COMPACTLAUNCHER",
{
	/*WAPClip*/{ "COMPONENT_COMPACTLAUNCHER_CLIP_01", },
}
},
{ "WEAPON_COMPACTRIFLE",
{
	/*WAPClip*/{ "COMPONENT_COMPACTRIFLE_CLIP_01","COMPONENT_COMPACTRIFLE_CLIP_02","COMPONENT_COMPACTRIFLE_CLIP_03", },
}
},
{ "WEAPON_FIREWORK",
{
	/*WAPClip*/{ "COMPONENT_FIREWORK_CLIP_01", },
}
},
{ "WEAPON_GUSENBERG",
{
	/*WAPClip*/{ "COMPONENT_GUSENBERG_CLIP_01","COMPONENT_GUSENBERG_CLIP_02", },
}
},
{ "WEAPON_HEAVYSHOTGUN",
{
	/*WAPClip*/{ "COMPONENT_HEAVYSHOTGUN_CLIP_01","COMPONENT_HEAVYSHOTGUN_CLIP_02","COMPONENT_HEAVYSHOTGUN_CLIP_03", },
	/*WAPFlshLasr*/{ "COMPONENT_AT_AR_FLSH", },
	/*WAPSupp_2*/{ "COMPONENT_AT_AR_SUPP_02", },
	/*WAPGrip_2*/{ "COMPONENT_AT_AR_AFGRIP", },
}
},
{ "WEAPON_HOMINGLAUNCHER",
{
	/*WAPClip*/{ "COMPONENT_HOMINGLAUNCHER_CLIP_01", },
}
},

{ "WEAPON_MACHINEPISTOL",
{
	/*WAPClip*/{ "COMPONENT_MACHINEPISTOL_CLIP_01","COMPONENT_MACHINEPISTOL_CLIP_02","COMPONENT_MACHINEPISTOL_CLIP_03", },
	/*WAPSupp*/{ "COMPONENT_AT_PI_SUPP", },
}
},
{ "WEAPON_MARKSMANPISTOL",
{
	/*WAPClip*/{ "COMPONENT_MARKSMANPISTOL_CLIP_01", },
}
},
{ "WEAPON_MARKSMANRIFLE",
{
	/*WAPClip*/{ "COMPONENT_MARKSMANRIFLE_CLIP_01","COMPONENT_MARKSMANRIFLE_CLIP_02", },
	/*WAPFlshLasr*/{ "COMPONENT_AT_AR_FLSH", },
	/*WAPScop_2*/{ "COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM", },
	/*WAPSupp_2*/{ "COMPONENT_AT_AR_SUPP", },
	/*WAPGrip_2*/{ "COMPONENT_AT_AR_AFGRIP", },
	/*gun_root*/{ "COMPONENT_MARKSMANRIFLE_VARMOD_LUXE", },
	/*gun_gripr*/{ "COMPONENT_GUNRUN_MK2_UPGRADE", },
}
},
{ "WEAPON_MINISMG",
{
	/*WAPClip*/{ "COMPONENT_MINISMG_CLIP_01","COMPONENT_MINISMG_CLIP_02", },
}
},
{ "WEAPON_MUSKET",
{
	/*WAPClip*/{ "COMPONENT_MUSKET_CLIP_01", },
}
},
{ "WEAPON_RAILGUN",
{
	/*WAPClip*/{ "COMPONENT_RAILGUN_CLIP_01", },
}
},
{ "WEAPON_REVOLVER",
{
	/*WAPClip*/{ "COMPONENT_REVOLVER_CLIP_01", },
	/*gun_root*/{ "COMPONENT_REVOLVER_VARMOD_BOSS","COMPONENT_REVOLVER_VARMOD_GOON", },
}
},
{ "WEAPON_SWITCHBLADE",
{
	/*gun_root*/{ "COMPONENT_SWITCHBLADE_VARMOD_BASE","COMPONENT_SWITCHBLADE_VARMOD_VAR1","COMPONENT_SWITCHBLADE_VARMOD_VAR2", },
}
},
{ "WEAPON_ASSAULTRIFLE_MK2",
{
	/*WAPClip*/{ "COMPONENT_ASSAULTRIFLE_MK2_CLIP_01","COMPONENT_ASSAULTRIFLE_MK2_CLIP_02","COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING","COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ","COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY","COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER", },
	/*WAPFlshLasr_2*/{ "COMPONENT_AT_AR_FLSH", },
	/*WAPScop_2*/{ "COMPONENT_AT_SIGHTS","COMPONENT_AT_SCOPE_MACRO_MK2","COMPONENT_AT_SCOPE_MEDIUM_MK2", },
	/*WAPSupp_2*/{ "COMPONENT_AT_AR_SUPP_02","COMPONENT_AT_MUZZLE_01","COMPONENT_AT_MUZZLE_02","COMPONENT_AT_MUZZLE_03","COMPONENT_AT_MUZZLE_04","COMPONENT_AT_MUZZLE_05","COMPONENT_AT_MUZZLE_06","COMPONENT_AT_MUZZLE_07", },
	/*WAPGrip*/{ "COMPONENT_AT_AR_AFGRIP_02", },
	/*WAPBarrel*/{ "COMPONENT_AT_AR_BARREL_01","COMPONENT_AT_AR_BARREL_02", },
	/*gun_root*/{ "COMPONENT_ASSAULTRIFLE_MK2_CAMO","COMPONENT_ASSAULTRIFLE_MK2_CAMO_02","COMPONENT_ASSAULTRIFLE_MK2_CAMO_03","COMPONENT_ASSAULTRIFLE_MK2_CAMO_04","COMPONENT_ASSAULTRIFLE_MK2_CAMO_05","COMPONENT_ASSAULTRIFLE_MK2_CAMO_06","COMPONENT_ASSAULTRIFLE_MK2_CAMO_07","COMPONENT_ASSAULTRIFLE_MK2_CAMO_08","COMPONENT_ASSAULTRIFLE_MK2_CAMO_09","COMPONENT_ASSAULTRIFLE_MK2_CAMO_10","COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01", },
}
},
{ "WEAPON_BULLPUPRIFLE_MK2",
{
	/*WAPClip*/{ "COMPONENT_BULLPUPRIFLE_MK2_CLIP_01","COMPONENT_BULLPUPRIFLE_MK2_CLIP_02","COMPONENT_BULLPUPRIFLE_MK2_CLIP_TRACER","COMPONENT_BULLPUPRIFLE_MK2_CLIP_INCENDIARY","COMPONENT_BULLPUPRIFLE_MK2_CLIP_ARMORPIERCING","COMPONENT_BULLPUPRIFLE_MK2_CLIP_FMJ", },
	/*WAPFlshLasr*/{ "COMPONENT_AT_AR_FLSH", },
	/*WAPScop_2*/{ "COMPONENT_AT_SIGHTS","COMPONENT_AT_SCOPE_MACRO_02_MK2","COMPONENT_AT_SCOPE_SMALL_MK2", },
	/*WAPBarrel*/{ "COMPONENT_AT_BP_BARREL_01","COMPONENT_AT_BP_BARREL_02", },
	/*WAPSupp*/{ "COMPONENT_AT_AR_SUPP","COMPONENT_AT_MUZZLE_01","COMPONENT_AT_MUZZLE_02","COMPONENT_AT_MUZZLE_03","COMPONENT_AT_MUZZLE_04","COMPONENT_AT_MUZZLE_05","COMPONENT_AT_MUZZLE_06","COMPONENT_AT_MUZZLE_07", },
	/*WAPGrip*/{ "COMPONENT_AT_AR_AFGRIP_02", },
	/*gun_root*/{ "COMPONENT_BULLPUPRIFLE_MK2_CAMO","COMPONENT_BULLPUPRIFLE_MK2_CAMO_02","COMPONENT_BULLPUPRIFLE_MK2_CAMO_03","COMPONENT_BULLPUPRIFLE_MK2_CAMO_04","COMPONENT_BULLPUPRIFLE_MK2_CAMO_05","COMPONENT_BULLPUPRIFLE_MK2_CAMO_06","COMPONENT_BULLPUPRIFLE_MK2_CAMO_07","COMPONENT_BULLPUPRIFLE_MK2_CAMO_08","COMPONENT_BULLPUPRIFLE_MK2_CAMO_09","COMPONENT_BULLPUPRIFLE_MK2_CAMO_10","COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01", },
}
},
{ "WEAPON_CARBINERIFLE_MK2",
{
	/*WAPClip*/{ "COMPONENT_CARBINERIFLE_MK2_CLIP_01","COMPONENT_CARBINERIFLE_MK2_CLIP_02","COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING","COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ","COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY","COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER", },
	/*WAPFlshLasr*/{ "COMPONENT_AT_AR_FLSH", },
	/*WAPScop_2*/{ "COMPONENT_AT_SIGHTS","COMPONENT_AT_SCOPE_MACRO_MK2","COMPONENT_AT_SCOPE_MEDIUM_MK2", },
	/*WAPSupp_2*/{ "COMPONENT_AT_AR_SUPP","COMPONENT_AT_MUZZLE_01","COMPONENT_AT_MUZZLE_02","COMPONENT_AT_MUZZLE_03","COMPONENT_AT_MUZZLE_04","COMPONENT_AT_MUZZLE_05","COMPONENT_AT_MUZZLE_06","COMPONENT_AT_MUZZLE_07", },
	/*WAPGrip_2*/{ "COMPONENT_AT_AR_AFGRIP_02", },
	/*WAPBarrel*/{ "COMPONENT_AT_CR_BARREL_01","COMPONENT_AT_CR_BARREL_02", },
	/*gun_root*/{ "COMPONENT_CARBINERIFLE_MK2_CAMO","COMPONENT_CARBINERIFLE_MK2_CAMO_02","COMPONENT_CARBINERIFLE_MK2_CAMO_03","COMPONENT_CARBINERIFLE_MK2_CAMO_04","COMPONENT_CARBINERIFLE_MK2_CAMO_05","COMPONENT_CARBINERIFLE_MK2_CAMO_06","COMPONENT_CARBINERIFLE_MK2_CAMO_07","COMPONENT_CARBINERIFLE_MK2_CAMO_08","COMPONENT_CARBINERIFLE_MK2_CAMO_09","COMPONENT_CARBINERIFLE_MK2_CAMO_10","COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01", },
}
},
{ "WEAPON_COMBATMG_MK2",
{
	/*WAPClip*/{ "COMPONENT_COMBATMG_MK2_CLIP_01","COMPONENT_COMBATMG_MK2_CLIP_02","COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING","COMPONENT_COMBATMG_MK2_CLIP_FMJ","COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY","COMPONENT_COMBATMG_MK2_CLIP_TRACER", },
	/*WAPScop_2*/{ "COMPONENT_AT_SIGHTS","COMPONENT_AT_SCOPE_SMALL_MK2","COMPONENT_AT_SCOPE_MEDIUM_MK2", },
	/*WAPSupp*/{ "COMPONENT_AT_MUZZLE_01","COMPONENT_AT_MUZZLE_02","COMPONENT_AT_MUZZLE_03","COMPONENT_AT_MUZZLE_04","COMPONENT_AT_MUZZLE_05","COMPONENT_AT_MUZZLE_06","COMPONENT_AT_MUZZLE_07", },
	/*WAPGrip_2*/{ "COMPONENT_AT_AR_AFGRIP_02", },
	/*WAPBarrel*/{ "COMPONENT_AT_MG_BARREL_01","COMPONENT_AT_MG_BARREL_02", },
	/*gun_root*/{ "COMPONENT_COMBATMG_MK2_CAMO","COMPONENT_COMBATMG_MK2_CAMO_02","COMPONENT_COMBATMG_MK2_CAMO_03","COMPONENT_COMBATMG_MK2_CAMO_04","COMPONENT_COMBATMG_MK2_CAMO_05","COMPONENT_COMBATMG_MK2_CAMO_06","COMPONENT_COMBATMG_MK2_CAMO_07","COMPONENT_COMBATMG_MK2_CAMO_08","COMPONENT_COMBATMG_MK2_CAMO_09","COMPONENT_COMBATMG_MK2_CAMO_10","COMPONENT_COMBATMG_MK2_CAMO_IND_01", },
}
},
{ "WEAPON_DOUBLEACTION",
{
	/*WAPClip*/{ "COMPONENT_DOUBLEACTION_CLIP_01", },
}
},
{ "WEAPON_HEAVYSNIPER_MK2",
{
	/*WAPClip*/{ "COMPONENT_HEAVYSNIPER_MK2_CLIP_01","COMPONENT_HEAVYSNIPER_MK2_CLIP_02","COMPONENT_HEAVYSNIPER_MK2_CLIP_ARMORPIERCING","COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE","COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ","COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY", },
	/*WAPScop*/{ "COMPONENT_AT_SCOPE_LARGE_MK2","COMPONENT_AT_SCOPE_MAX","COMPONENT_AT_SCOPE_NV","COMPONENT_AT_SCOPE_THERMAL", },
	/*WAPSupp*/{ "COMPONENT_AT_SR_SUPP_03","COMPONENT_AT_MUZZLE_08","COMPONENT_AT_MUZZLE_09", },
	/*WAPBarrel*/{ "COMPONENT_AT_SR_BARREL_01","COMPONENT_AT_SR_BARREL_02", },
	/*gun_root*/{ "COMPONENT_HEAVYSNIPER_MK2_CAMO","COMPONENT_HEAVYSNIPER_MK2_CAMO_02","COMPONENT_HEAVYSNIPER_MK2_CAMO_03","COMPONENT_HEAVYSNIPER_MK2_CAMO_04","COMPONENT_HEAVYSNIPER_MK2_CAMO_05","COMPONENT_HEAVYSNIPER_MK2_CAMO_06","COMPONENT_HEAVYSNIPER_MK2_CAMO_07","COMPONENT_HEAVYSNIPER_MK2_CAMO_08","COMPONENT_HEAVYSNIPER_MK2_CAMO_09","COMPONENT_HEAVYSNIPER_MK2_CAMO_10","COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01", },
}
},
{ "WEAPON_MARKSMANRIFLE_MK2",
{
	/*WAPClip*/{ "COMPONENT_MARKSMANRIFLE_MK2_CLIP_01","COMPONENT_MARKSMANRIFLE_MK2_CLIP_02","COMPONENT_MARKSMANRIFLE_MK2_CLIP_ARMORPIERCING","COMPONENT_MARKSMANRIFLE_MK2_CLIP_FMJ","COMPONENT_MARKSMANRIFLE_MK2_CLIP_INCENDIARY","COMPONENT_MARKSMANRIFLE_MK2_CLIP_TRACER", },
	/*WAPFlshLasr*/{ "COMPONENT_AT_AR_FLSH", },
	/*WAPScop_2*/{ "COMPONENT_AT_SIGHTS","COMPONENT_AT_SCOPE_MEDIUM_MK2","COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM_MK2", },
	/*WAPSupp_2*/{ "COMPONENT_AT_AR_SUPP","COMPONENT_AT_MUZZLE_01","COMPONENT_AT_MUZZLE_02","COMPONENT_AT_MUZZLE_03","COMPONENT_AT_MUZZLE_04","COMPONENT_AT_MUZZLE_05","COMPONENT_AT_MUZZLE_06","COMPONENT_AT_MUZZLE_07", },
	/*WAPGrip_2*/{ "COMPONENT_AT_AR_AFGRIP_02", },
	/*WAPBarrel*/{ "COMPONENT_AT_MRFL_BARREL_01","COMPONENT_AT_MRFL_BARREL_02", },
	/*gun_root*/{ "COMPONENT_MARKSMANRIFLE_MK2_CAMO","COMPONENT_MARKSMANRIFLE_MK2_CAMO_02","COMPONENT_MARKSMANRIFLE_MK2_CAMO_03","COMPONENT_MARKSMANRIFLE_MK2_CAMO_04","COMPONENT_MARKSMANRIFLE_MK2_CAMO_05","COMPONENT_MARKSMANRIFLE_MK2_CAMO_06","COMPONENT_MARKSMANRIFLE_MK2_CAMO_07","COMPONENT_MARKSMANRIFLE_MK2_CAMO_08","COMPONENT_MARKSMANRIFLE_MK2_CAMO_09","COMPONENT_MARKSMANRIFLE_MK2_CAMO_10","COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01", },
}
},
{ "WEAPON_PISTOL_MK2",
{
	/*WAPClip*/{ "COMPONENT_PISTOL_MK2_CLIP_01","COMPONENT_PISTOL_MK2_CLIP_02","COMPONENT_PISTOL_MK2_CLIP_FMJ","COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT","COMPONENT_PISTOL_MK2_CLIP_INCENDIARY","COMPONENT_PISTOL_MK2_CLIP_TRACER", },
	/*WAPScop*/{ "COMPONENT_AT_PI_RAIL", },
	/*WAPFlshLasr*/{ "COMPONENT_AT_PI_FLSH_02", },
	/*WAPSupp*/{ "COMPONENT_AT_PI_SUPP_02","COMPONENT_AT_PI_COMP", },
	/*WAPScop_2*/{ "COMPONENT_PISTOL_MK2_CAMO_SLIDE","COMPONENT_PISTOL_MK2_CAMO_02_SLIDE","COMPONENT_PISTOL_MK2_CAMO_03_SLIDE","COMPONENT_PISTOL_MK2_CAMO_04_SLIDE","COMPONENT_PISTOL_MK2_CAMO_05_SLIDE","COMPONENT_PISTOL_MK2_CAMO_06_SLIDE","COMPONENT_PISTOL_MK2_CAMO_07_SLIDE","COMPONENT_PISTOL_MK2_CAMO_08_SLIDE","COMPONENT_PISTOL_MK2_CAMO_09_SLIDE","COMPONENT_PISTOL_MK2_CAMO_10_SLIDE","COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE", },
	/*gun_root*/{ "COMPONENT_PISTOL_MK2_CAMO","COMPONENT_PISTOL_MK2_CAMO_02","COMPONENT_PISTOL_MK2_CAMO_03","COMPONENT_PISTOL_MK2_CAMO_04","COMPONENT_PISTOL_MK2_CAMO_05","COMPONENT_PISTOL_MK2_CAMO_06","COMPONENT_PISTOL_MK2_CAMO_07","COMPONENT_PISTOL_MK2_CAMO_08","COMPONENT_PISTOL_MK2_CAMO_09","COMPONENT_PISTOL_MK2_CAMO_10","COMPONENT_PISTOL_MK2_CAMO_IND_01", },
}
},
{ "WEAPON_PUMPSHOTGUN_MK2",
{
	/*WAPClip*/{ "COMPONENT_PUMPSHOTGUN_MK2_CLIP_01","COMPONENT_PUMPSHOTGUN_MK2_CLIP_ARMORPIERCING","COMPONENT_PUMPSHOTGUN_MK2_CLIP_EXPLOSIVE","COMPONENT_PUMPSHOTGUN_MK2_CLIP_HOLLOWPOINT","COMPONENT_PUMPSHOTGUN_MK2_CLIP_INCENDIARY", },
	/*WAPScop*/{ "COMPONENT_AT_SIGHTS","COMPONENT_AT_SCOPE_MACRO_MK2","COMPONENT_AT_SCOPE_SMALL_MK2", },
	/*WAPFlshLasr_2*/{ "COMPONENT_AT_AR_FLSH", },
	/*WAPSupp*/{ "COMPONENT_AT_SR_SUPP_03","COMPONENT_AT_MUZZLE_08", },
	/*gun_root*/{ "COMPONENT_PUMPSHOTGUN_MK2_CAMO","COMPONENT_PUMPSHOTGUN_MK2_CAMO_02","COMPONENT_PUMPSHOTGUN_MK2_CAMO_03","COMPONENT_PUMPSHOTGUN_MK2_CAMO_04","COMPONENT_PUMPSHOTGUN_MK2_CAMO_05","COMPONENT_PUMPSHOTGUN_MK2_CAMO_06","COMPONENT_PUMPSHOTGUN_MK2_CAMO_07","COMPONENT_PUMPSHOTGUN_MK2_CAMO_08","COMPONENT_PUMPSHOTGUN_MK2_CAMO_09","COMPONENT_PUMPSHOTGUN_MK2_CAMO_10","COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01", },
}
},
{ "WEAPON_REVOLVER_MK2",
{
	/*WAPClip*/{ "COMPONENT_REVOLVER_MK2_CLIP_01","COMPONENT_REVOLVER_MK2_CLIP_FMJ","COMPONENT_REVOLVER_MK2_CLIP_HOLLOWPOINT","COMPONENT_REVOLVER_MK2_CLIP_INCENDIARY","COMPONENT_REVOLVER_MK2_CLIP_TRACER", },
	/*WAPScop*/{ "COMPONENT_AT_SIGHTS","COMPONENT_AT_SCOPE_MACRO_MK2", },
	/*WAPFlshLasr*/{ "COMPONENT_AT_PI_FLSH", },
	/*WAPSupp*/{ "COMPONENT_AT_PI_COMP_03", },
	/*gun_root*/{ "COMPONENT_REVOLVER_MK2_CAMO","COMPONENT_REVOLVER_MK2_CAMO_02","COMPONENT_REVOLVER_MK2_CAMO_03","COMPONENT_REVOLVER_MK2_CAMO_04","COMPONENT_REVOLVER_MK2_CAMO_05","COMPONENT_REVOLVER_MK2_CAMO_06","COMPONENT_REVOLVER_MK2_CAMO_07","COMPONENT_REVOLVER_MK2_CAMO_08","COMPONENT_REVOLVER_MK2_CAMO_09","COMPONENT_REVOLVER_MK2_CAMO_10","COMPONENT_REVOLVER_MK2_CAMO_IND_01", },
}
},
{ "WEAPON_SMG_MK2",
{
	/*WAPClip*/{ "COMPONENT_SMG_MK2_CLIP_01","COMPONENT_SMG_MK2_CLIP_02","COMPONENT_SMG_MK2_CLIP_FMJ","COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT","COMPONENT_SMG_MK2_CLIP_INCENDIARY","COMPONENT_SMG_MK2_CLIP_TRACER", },
	/*WAPFlshLasr_2*/{ "COMPONENT_AT_AR_FLSH", },
	/*WAPScop*/{ "COMPONENT_AT_SIGHTS_SMG","COMPONENT_AT_SCOPE_MACRO_02_SMG_MK2","COMPONENT_AT_SCOPE_SMALL_SMG_MK2", },
	/*WAPSupp_2*/{ "COMPONENT_AT_PI_SUPP","COMPONENT_AT_MUZZLE_01","COMPONENT_AT_MUZZLE_02","COMPONENT_AT_MUZZLE_03","COMPONENT_AT_MUZZLE_04","COMPONENT_AT_MUZZLE_05","COMPONENT_AT_MUZZLE_06","COMPONENT_AT_MUZZLE_07", },
	/*WAPBarrel*/{ "COMPONENT_AT_SB_BARREL_01","COMPONENT_AT_SB_BARREL_02", },
	/*gun_root*/{ "COMPONENT_SMG_MK2_CAMO","COMPONENT_SMG_MK2_CAMO_02","COMPONENT_SMG_MK2_CAMO_03","COMPONENT_SMG_MK2_CAMO_04","COMPONENT_SMG_MK2_CAMO_05","COMPONENT_SMG_MK2_CAMO_06","COMPONENT_SMG_MK2_CAMO_07","COMPONENT_SMG_MK2_CAMO_08","COMPONENT_SMG_MK2_CAMO_09","COMPONENT_SMG_MK2_CAMO_10","COMPONENT_SMG_MK2_CAMO_IND_01", },
}
},
{ "WEAPON_SNSPISTOL_MK2",
{
	/*WAPClip*/{ "COMPONENT_SNSPISTOL_MK2_CLIP_01","COMPONENT_SNSPISTOL_MK2_CLIP_02","COMPONENT_SNSPISTOL_MK2_CLIP_TRACER","COMPONENT_SNSPISTOL_MK2_CLIP_INCENDIARY","COMPONENT_SNSPISTOL_MK2_CLIP_HOLLOWPOINT","COMPONENT_SNSPISTOL_MK2_CLIP_FMJ", },
	/*WAPFlshLasr_2*/{ "COMPONENT_AT_PI_FLSH_03", },
	/*WAPScop*/{ "COMPONENT_AT_PI_RAIL_02", },
	/*WAPSupp_2*/{ "COMPONENT_AT_PI_SUPP_02","COMPONENT_AT_PI_COMP_02", },
	/*WAPScop_2*/{ "COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE","COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE","COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE","COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE","COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE","COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE","COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE","COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE","COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE","COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE","COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE", },
	/*gun_root*/{ "COMPONENT_SNSPISTOL_MK2_CAMO","COMPONENT_SNSPISTOL_MK2_CAMO_02","COMPONENT_SNSPISTOL_MK2_CAMO_03","COMPONENT_SNSPISTOL_MK2_CAMO_04","COMPONENT_SNSPISTOL_MK2_CAMO_05","COMPONENT_SNSPISTOL_MK2_CAMO_06","COMPONENT_SNSPISTOL_MK2_CAMO_07","COMPONENT_SNSPISTOL_MK2_CAMO_08","COMPONENT_SNSPISTOL_MK2_CAMO_09","COMPONENT_SNSPISTOL_MK2_CAMO_10","COMPONENT_SNSPISTOL_MK2_CAMO_IND_01", },
}
},
{ "WEAPON_SPECIALCARBINE_MK2",
{
	/*WAPClip*/{ "COMPONENT_SPECIALCARBINE_MK2_CLIP_01","COMPONENT_SPECIALCARBINE_MK2_CLIP_02","COMPONENT_SPECIALCARBINE_MK2_CLIP_TRACER","COMPONENT_SPECIALCARBINE_MK2_CLIP_INCENDIARY","COMPONENT_SPECIALCARBINE_MK2_CLIP_ARMORPIERCING","COMPONENT_SPECIALCARBINE_MK2_CLIP_FMJ", },
	/*WAPFlshLasr_2*/{ "COMPONENT_AT_AR_FLSH", },
	/*WAPScop_2*/{ "COMPONENT_AT_SIGHTS","COMPONENT_AT_SCOPE_MACRO_MK2","COMPONENT_AT_SCOPE_MEDIUM_MK2", },
	/*WAPSupp_2*/{ "COMPONENT_AT_AR_SUPP_02","COMPONENT_AT_MUZZLE_01","COMPONENT_AT_MUZZLE_02","COMPONENT_AT_MUZZLE_03","COMPONENT_AT_MUZZLE_04","COMPONENT_AT_MUZZLE_05","COMPONENT_AT_MUZZLE_06","COMPONENT_AT_MUZZLE_07", },
	/*WAPGrip_2*/{ "COMPONENT_AT_AR_AFGRIP_02", },
	/*WAPBarrel*/{ "COMPONENT_AT_SC_BARREL_01","COMPONENT_AT_SC_BARREL_02", },
	/*gun_root*/{ "COMPONENT_SPECIALCARBINE_MK2_CAMO","COMPONENT_SPECIALCARBINE_MK2_CAMO_02","COMPONENT_SPECIALCARBINE_MK2_CAMO_03","COMPONENT_SPECIALCARBINE_MK2_CAMO_04","COMPONENT_SPECIALCARBINE_MK2_CAMO_05","COMPONENT_SPECIALCARBINE_MK2_CAMO_06","COMPONENT_SPECIALCARBINE_MK2_CAMO_07","COMPONENT_SPECIALCARBINE_MK2_CAMO_08","COMPONENT_SPECIALCARBINE_MK2_CAMO_09","COMPONENT_SPECIALCARBINE_MK2_CAMO_10","COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01", },
}
},
{ "VEHICLE_WEAPON_TURRET_LIMO",
{
}
},
{ "WEAPON_VINTAGEPISTOL",
{
	/*WAPClip*/{ "COMPONENT_VINTAGEPISTOL_CLIP_01","COMPONENT_VINTAGEPISTOL_CLIP_02", },
	/*WAPSupp_2*/{ "COMPONENT_AT_PI_SUPP", },
}
},
{ "WEAPON_WRENCH",
{
}
},

};


void update_weapon_menu();
void update_weapon_game();
#pragma endregion