/*
* ATTENTION A VOS PUTAINS DE VIRGULES MERCI !!
* JEREMY ATOMAZA NE VAS PAS PASSER 2H A RETROUVER VOS ERREURS !!
*/

class WeaponShops {

	// Boutique pour la chasse
	
	class bucheron {
        name = "Armalife Bucheron";
        side = "civ";
        conditions = "license_civ_bucheron";
        items[] = {
            { "Binocular", "", 150, 0, "" },
			{ "Land_Axe_F", "", 150, 75, "" },
            { "ItemGPS", "GPS LIFE", 100, 0, "" },
            { "ItemMap", "CARTE", 50, 0, "" },
            { "ItemCompass", "BOUSSOLE", 50, 0, "" },
			{ "ItemRadio", "Telephone", 50, 0, "" }, 
            { "ItemWatch", "MONTRE", 50, 0, "" },
            { "FirstAidKit", "1er Secours", 150, 0, "" },
            { "NVGoggles", "", 10000, 0, "" },
			{ "hgun_Rook40_F", "", 6500, 0, "" },
            { "hgun_Pistol_01_F", "", 7000, 0, "" },
            { "hgun_Pistol_heavy_02_F", "", 9850, 0, "" },
            { "hgun_ACPC2_F", "", 11500, 0, "" },
            { "SMG_05_F", "", 18000, 0, "" },
            { "hgun_PDW2000_F", "", 20000, 0, "" }
        };
        mags[] = {
			
			{ "16Rnd_9x21_Mag", "", 125, 60, "" },
            { "6Rnd_45ACP_Cylinder", "", 150, 75, "" },
            { "9Rnd_45ACP_Mag", "", 200, 100, "" },
            { "30Rnd_9x21_Mag", "", 250, 125, "" },
            { "30Rnd_9x21_Mag_SMG_02", "", 250, 125, "" },
            { "10Rnd_9x21_Mag", "", 250, 125, "" }
			
		};
        accs[] = {
			
			{ "optic_ACO_grn_smg", "", 2500, 1250, "" }
			
		};
    };
	
	// Boutique pour la chasse
	
	class chasse {
        name = "Armalife Chasseur";
        side = "civ";
        conditions = "license_civ_chasseur";
        items[] = {
            { "Binocular", "", 150, 0, "" },
            { "ItemGPS", "GPS LIFE", 100, 0, "" },
            { "ItemMap", "CARTE", 50, 0, "" },
            { "ItemCompass", "BOUSSOLE", 50, 0, "" },
			{ "ItemRadio", "Telephone", 50, 0, "" }, 
            { "ItemWatch", "MONTRE", 50, 0, "" },
            { "FirstAidKit", "1er Secours", 150, 0, "" },
            { "NVGoggles", "", 10000, 0, "" },
			{ "hgun_Rook40_F", "", 6500, 3250, "" },
            { "hgun_Pistol_01_F", "", 7000, 3500, "" },
            { "hgun_Pistol_heavy_02_F", "", 9850, 4925, "" },
            { "hgun_ACPC2_F", "", 11500, 5750, "" },
            { "SMG_05_F", "", 18000, 9000, "" },
            { "hgun_PDW2000_F", "", 20000, 10000, "" }
        };
        mags[] = {
			
			{ "16Rnd_9x21_Mag", "", 125, 10, "" },
            { "6Rnd_45ACP_Cylinder", "", 150, 75, "" },
            { "9Rnd_45ACP_Mag", "", 200, 100, "" },
            { "30Rnd_9x21_Mag", "", 250, 125, "" },
            { "30Rnd_9x21_Mag_SMG_02", "", 250, 125, "" },
            { "10Rnd_9x21_Mag", "", 250, 125, "" }
			
		};
        accs[] = {
			
			{ "optic_ACO_grn_smg", "", 2500, 1250, "" }
			
		};
    };
	
//boutique pour les civils qui pensent etre rebelle !
	
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        conditions = "license_civ_gun";
        items[] = {
            { "hgun_Rook40_F", "", 6500, 3250, "" },
            { "hgun_Pistol_01_F", "", 7000, 3500, "" }, //Apex DLC
            { "hgun_Pistol_heavy_02_F", "", 9850, 4925, "" },
            { "hgun_ACPC2_F", "", 11500, 5750, "" },
            { "SMG_05_F", "", 18000, 9000, "" }, //Apex DLC
            { "hgun_PDW2000_F", "", 20000, 10000, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125, 60, "" },
            { "6Rnd_45ACP_Cylinder", "", 150, 75, "" },
            { "9Rnd_45ACP_Mag", "", 200, 100, "" },
            { "30Rnd_9x21_Mag", "", 250, 125, "" },
            { "30Rnd_9x21_Mag_SMG_02", "", 250, 125, "" }, //Apex DLC
            { "10Rnd_9x21_Mag", "", 250, 125, "" } //Apex DLC
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 2500, 1250, "" }
        };
    };

//boutique des tafioles de rebelles !

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = {
			{ "Rangefinder", "", 150, -1, "" },
            { "Binocular", "", 200, -1, "" },
            { "ItemGPS", "", 800, -1, "" },
            { "ItemRadio", "", 750, -1, "" },
            { "ItemMap", "", 350, -1, "" },
            { "ItemCompass", "", 350, -1, "" },
            { "ItemWatch", "", 350, -1, "" },
            { "FirstAidKit", "", 150, -1, "" },
            { "NVGoggles_tna_F", "", 2000, -1, "" },
            { "Chemlight_red", "", 300, -1, "" },
            { "Chemlight_yellow", "", 300, -1, "" },
            { "Chemlight_green", "", 300, -1, "" },
            { "Chemlight_blue", "", 300, -1, "" },
            { "SmokeShell", "", 400, -1, "" },
            { "SmokeShellYellow", "", 400, -1, "" },
            { "SmokeShellGreen", "", 400, -1, "" },
            { "SmokeShellRed", "", 400, -1, "" },
            { "SmokeShellPurple", "", 400, -1, "" },
            { "SmokeShellOrange", "", 400, -1, "" },
            { "SmokeShellBlue", "", 400, -1, "" },
            { "HandGrenade_Stone", "Grenade Flash", 40000, -1, "" },
            { "MiniGrenade", "", 150000, -1, "" },
			{ "hgun_P07_khk_F", "", 1250, -1, "" }, //P07
			{ "hgun_Pistol_01_F", "", 850, -1, "" }, //PM
            { "arifle_AKM_F", "", 150000, -1, "" }, //AKM
            { "arifle_AKS_F", "", 50000, -1, "" }, //AKS
            { "srifle_DMR_07_hex_F", "", 145000, -1, "" }, //CMR-76 Hex
            { "srifle_DMR_07_ghex_F", "", 145000, -1, "" }, //CMR-76 Green Hex
            { "arifle_Katiba_C_F", "", 50000, -1, "" }, //carabine katiba 
            { "arifle_Katiba_F", "", 50000, -1, "" }, //katiba 
            { "LMG_03_F", "", 350000, -1, "" }, //LIM 
			{ "arifle_ARX_ghex_F", "", 200000, -1, "" }, //Type 115 Green Hex
			{ "arifle_ARX_hex_F", "", 200000, -1, "" }, //Type 115 Hex
			{ "arifle_Mk20_plain_F", "", 30000, -1, "" }, //MK20 trouver un prix
			{ "arifle_Mk20C_F", "", 30000, -1, "" }, //MK20C trouver un prix
			{ "arifle_SDAR_F", "", 20000, -1, "" }, //SDAR
			{ "srifle_DMR_01_F", "", 250000, -1, "" }, //Rahim
			{ "arifle_TRG20_F", "", 100000, -1, "" }, //TRG20
			{ "arifle_TRG21_F", "", 100000, -1, "" }, //TRG21
			{ "SMG_01_F", "", 50000, -1, "" }, //Vermin
			{ "hgun_PDW2000_F", "", 10000, -1, "" }, //PDW2000
			{ "srifle_DMR_02_camo_F", "", 400000, -1, "" }, //MAR-10 Camo --------
            { "arifle_AK12_F", "", 200000, -1, "" }, //AK12 --------------
            { "srifle_DMR_05_hex_F", "", 500000, -1, "" }, //cyrus Hex -------
            { "srifle_DMR_05_tan_f", "", 500000, -1, "" }, //cyrux Tan--------
			{ "srifle_DMR_06_camo_F", "", 300000, -1, "" }, //MK14 Camo --------
			{ "srifle_DMR_06_olive_F", "", 300000, -1, "" }, //MK14 Olive-------
			{ "srifle_DMR_02_sniper_F", "", 300000, -1, "" }, //MAR-10 Sand--------
            { "srifle_EBR_F", "", 350000, 0, "" },// Mk18 -----------------
            { "srifle_DMR_03_F", "", 370000, 0, "" },// Mk-I----------
            { "srifle_LRR_F", "", 650000, 0, "" },// M320 ----------
			{ "srifle_GM6_F", "", 750000, 0, "" } //lynx ------------------
        };
        mags[] = {
			{ "16Rnd_9x21_Mag", "", 60, -1, "" }, //p07
            { "30Rnd_9x21_Mag", "", 60, -1, "" }, //P07
            { "10Rnd_9x21_Mag", "", 60, -1, "" }, //Pm9
            {"6Rnd_45ACP_Cylinder", "", 60, -1, "" }, //zubr
            { "30Rnd_762x39_Mag_F", "", 300, -1, "" }, //akm ak12
            { "30Rnd_545x39_Mag_F", "", 300, -1, "" }, //aks 
            { "20Rnd_650x39_Cased_Mag_F	", "", 275, -1, "" }, //CMR-76
            { "10Rnd_93x64_DMR_05_Mag", "", 1800, -1, "" }, //cyrus
            { "30Rnd_65x39_caseless_green", "", 125, -1, "" }, //katiba
            { "200Rnd_556x45_Box_Tracer_Red_F", "", 500, -1, "" }, //LIM rouge
			{ "200Rnd_556x45_Box_F", "", 500, -1, "" }, //LIM
			{ "30Rnd_65x39_caseless_green_mag_Tracer", "", 125, -1, "" }, //type 115 30
			{ "10Rnd_50BW_Mag_F", "", 125, -1, "" }, //type 115 10
			{ "10Rnd_338_Mag", "", 1500, -1, "" }, //MAR-10
			{ "20Rnd_762x51_Mag", "", 125, -1, "" }, //MK14
			{ "30Rnd_556x45_Stanag_red", "", 125, -1, "" }, //MK20 rouge 
			{ "30Rnd_556x45_Stanag", "", 125, -1, "" }, //MK20
			{ "20Rnd_556x45_UW_mag", "", 125, -1, "" }, //SDAR 20
			{ "30Rnd_556x45_Stanag_Tracer_Red", "", 125, -1, "" }, //SDAR 30 rouge 
			{ "10Rnd_762x54_Mag", "", 350, -1, "" }, //Rahim
			{ "30Rnd_45ACP_Mag_SMG_01", "", 125, -1, "" }, //Vermin
			{ "30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow", "", 125, -1, "" }, //Vermin Jaune
			{ "30Rnd_9x21_Mag", "", 125, -1, "" } //PDW2000
        };
        accs[] = {
            { "optic_Yorris", "", 750, -1, "" },//zubr
            { "optic_Holosight", "", 1000, -1, "" },
            { "optic_ACO_grn_smg", "", 500, -1, "" },
            { "optic_Aco_smg", "", 500, -1, "" },
            { "optic_ACO_grn", "", 500, -1, "" },
            { "optic_Aco", "", 500, -1, "" },
            { "optic_MRCO", "", 1000, -1, "" },
            { "optic_Hamr", "", 1000, -1, "" },
            { "optic_Hamr_khk_F", "", 1000, -1, "" },
            { "optic_Arco", "", 750, -1, "" },
            { "optic_Arco_blk_F", "", 750, -1, "" },
            { "optic_DMS_ghex_F", "", 750, -1, "" },
            { "optic_DMS", "", 750, -1, "" },
            { "optic_NVS", "", 2500, -1, "" },
            { "optic_SOS", "", 2000, -1, "" },
            { "optic_SOS_khk_F", "", 2000, -1, "" },
            { "optic_AMS", "", 2000, -1, "" },
            { "optic_AMS_khk", "", 2000, -1, "" },
            { "optic_AMS_snd", "", 2000, -1, "" },
            { "optic_KHS_blk", "", 2000, -1, "" },
            { "optic_KHS_hex", "", 2000, -1, "" },
            { "optic_KHS_old", "", 2000, -1, "" },
            { "optic_KHS_tan", "", 2000, -1, "" },
            { "optic_ERCO_blk_F", "", 1000, -1, "" },
            { "optic_ERCO_khk_F", "", 1000, -1, "" },
            { "optic_ERCO_snd_F", "", 1000, -1, "" },
            { "optic_Holosight_blk_F", "", 1000, -1, "" },
            { "optic_Holosight_khk_F", "", 1000, -1, "" },
            { "acc_flashlight", "", 450, -1, "" },//lampe
            { "acc_pointer_IR", "", 450, -1, "" },//pointer ir
            { "muzzle_snds_acp", "Silencieux .45", 950, -1, "" },
            { "muzzle_snds_L", "Silencieux 9 mm", 950, -1, "" },
            { "muzzle_snds_93mmg", "Silencieux 9.3 mm Noir", 950, -1, "" },
            { "muzzle_snds_93mmg_tan", "Silencieux 9.3 mm Tan", 950, -1, "" },
            { "muzzle_snds_M", "Silencieux 5.56 mm", 950, -1, "" },
            { "muzzle_snds_58_wdm_F", "", 950, -1, "" },
            { "muzzle_snds_H", "Silencieux 6.5 mm (Noir)", 950, -1, "" },
            { "muzzle_snds_H_khk_F", "Silencieux 6.5 mm (Khaki)", 950, -1, "" },
            { "muzzle_snds_H_snd_F", "Silencieux 6.5 mm (Sable)", 950, -1, "" },
            { "muzzle_snds_65_TI_blk_F", "", 950, -1, "" },
            { "muzzle_snds_65_TI_ghex_F", "", 950, -1, "" },
            { "muzzle_snds_65_TI_hex_F", "", 950, -1, "" },
            { "muzzle_snds_338_green", "Silencieux .338 mm", 950, -1, "" },
            { "muzzle_snds_338_black", "Silencieux .338 mm", 950, -1, "" },
            { "muzzle_snds_B", "Silencieux 7.62 mm", 950, -1, "" },
            { "muzzle_snds_B_khk_F", "Silencieux 7.62 mm", 950, -1, "" },
            { "bipod_01_F_mtp", "", 600, -1, "" },
            { "bipod_01_F_khk", "", 600, -1, "" },
            { "bipod_01_F_blk", "", 600, -1, "" },
            { "bipod_02_F_tan", "", 600, -1, "" },
            { "bipod_02_F_hex", "", 600, -1, "" },
            { "bipod_02_F_blk", "", 600, -1, "" },
            { "bipod_03_F_oli", "", 600, -1, "" },
            { "bipod_03_F_blk", "", 600, -1, "" }
        };
    };

//Boutique des gangs !

    class gang {
        name = "Hideout Armament";
        side = "civ";
        conditions = "";
        items[] = {
            { "hgun_Rook40_F", "", 1500, 750, "" },
            { "hgun_Pistol_heavy_02_F", "", 2500, 1250, "" },
            { "hgun_ACPC2_F", "", 4500, 2250, "" },
            { "hgun_PDW2000_F", "", 9500, 4750, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125, 60, "" },
            { "6Rnd_45ACP_Cylinder", "", 150, 75, "" },
            { "9Rnd_45ACP_Mag", "", 200, 100, "" },
            { "30Rnd_9x21_Mag", "", 250, 125, "" }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 950, 475, "" }
        };
    };

    //Boutique classique civil
	
    class genstore {
        name = "Altis General Store";
        side = "civ";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, 0, "" },
            { "ItemGPS", "", 100, 50, "" },
            { "ItemMap", "", 50, 25, "" },
            { "ItemCompass", "", 50, 25, "" },
			{ "ItemRadio", "Telephone", 50, 25, "" }, 
            { "ItemWatch", "", 50, 25, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "NVGoggles", "", 2000, 1000, "" },
            { "Chemlight_red", "", 300, 150, "" },
            { "Chemlight_yellow", "", 300, 150, "" },
            { "Chemlight_green", "", 300, 150, "" },
            { "Chemlight_blue", "", 300, 150, "" }
        };
        mags[] = {};
        accs[] = {};
    };

//Boutique des stations

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        conditions = "";
        items[] = {
            { "Binocular", "", 750, 0, "" },
            { "ItemGPS", "", 500, 50, "" },
            { "ItemMap", "", 250, 25, "" },
            { "ItemCompass", "", 250, 25, "" },
			{ "ItemRadio", "Telephone", 50, 25, "" }, 
            { "ItemWatch", "", 250, 25, "" },
            { "FirstAidKit", "", 750, 75, "" },
            { "NVGoggles", "", 10000, 1000, "" },
            { "Chemlight_red", "", 1500, 150, "" },
            { "Chemlight_yellow", "", 1500, 150, "" },
            { "Chemlight_green", "", 1500, 150, "" },
            { "Chemlight_blue", "", 1500, 150, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    //Boutique des keufs 
	
    class cop_basic {
        name = "Armurerie Gendarme";
        side = "cop";
        conditions = "";
        items[] = {
            { "Binocular", "", 0, 0, "" },// Jumelles
            { "Rangefinder", "", 0, 0, "" },//Telemettre
            { "ItemGPS", "", 0, 0, "" }, //Gps,
            { "ItemRadio", "", 0, 0, "" }, //Radio
			{ "ItemMap", "", 0, -1, "" }, //map
            { "ItemCompass", "", 0, -1, "" }, //boussole
            { "ItemWatch", "", 0, -1, "" }, //montre
            { "FirstAidKit", "", 0, 0, "" }, //FirstAidKit
            { "NVGoggles_OPFOR", "", 0, 0, "" },// JVN Noires
			{ "hgun_P07_snds_F", "", 0, 0, "call life_coplevel >= 1" }, //taz
            { "HandGrenade_Stone", "", 0, 0, "" },//Flashbang
			{ "SmokeShell", "", 0, -1, "" }, //smoke
            { "hgun_ACPC2_F", "",0,0,""},//ACP-C2
            { "hgun_Pistol_heavy_01_F","",0,0,""},//4-five
			{ "arifle_SDAR_F","", 15000, 0, "call life_coplevel >= 2" }, //SDAR
            { "SMG_05_F", "", 25000, 0, "call life_coplevel >= 1" },// Protector
            { "hgun_PDW2000_F", "", 1000, 0, "call life_coplevel >= 1" },// PDW
			{ "SMG_03_black", "", 5000, 0, "call life_coplevel >= 3" },// ADR
			{ "SMG_03_TR_black", "", 5000, 0, "call life_coplevel >= 3" },// ADR TR
			{ "SMG_03C_black", "", 5000, 0, "call life_coplevel >= 3" },// ADR C
			{ "SMG_03C_TR_black", "", 5000, 0, "call life_coplevel >= 3" },// ADR C TR
            { "arifle_SPAR_01_blk_F", "", 45000, 0, "call life_coplevel >= 2" },// SPAR-16
            { "arifle_SPAR_02_blk_F", "", 58000, 0, "call life_coplevel >= 2" },// SPAR-16S
            { "arifle_SPAR_03_blk_F", "", 67000, 0, "call life_coplevel >= 4" },// SPAR-17
            { "srifle_EBR_F", "", 35000, 0, "call life_coplevel >= 4" },// Mk18
            { "srifle_DMR_03_F", "", 37000, 0, "call life_coplevel >= 4" },// Mk-I
            { "srifle_LRR_F", "T.E.L.D", 450000, 0, "call life_coplevel >= 5" },// M320
            { "srifle_DMR_02_F", "", 80000, 0, "call life_coplevel >= 5" },// MAR-10
            { "srifle_DMR_04_F", "", 500000, 0, "call life_coplevel >= 7" },// ASP-1
            { "srifle_DMR_05_blk_F", "", 700000, 0, "call life_coplevel >= 6" } // Cyrus
        };
        mags[] = {
            {"11Rnd_45ACP_Mag","",0,""},//4-five
            {"9Rnd_45ACP_Mag","",0,0""},//ACP-C2
			{ "30Rnd_9x21_Mag", "", 125, -1, "" }, //PDW2000
			{ "16Rnd_9x21_Mag", "Taz", 60, -1, "" }, //p07
            { "30Rnd_9x21_Mag_SMG_02", "", 0, 0, "" },// Protector
			{ "50Rnd_570x28_SMG_03", "", 0, 0, "" },// ADR
            { "30Rnd_556x45_Stanag", "", 0, 0, "" },// Spar 16
            { "150Rnd_556x45_Drum_Mag_F", "", 0, 0, "" },// SPAR-16S
            { "20Rnd_762x51_Mag", "", 0, 0, "" },// 7.62
            { "7Rnd_408_Mag", "T.E.L.D", 0, 0, "" },// M320
            { "10Rnd_338_Mag", "", 0, 0, "" },// MAR-10
            { "10Rnd_127x54_Mag", "", 0, 0, "" },// ASP-1
            { "10Rnd_93x64_DMR_05_Mag", "", 0, 0, "" } // Cyrus
        };
        accs[] = {
            { "muzzle_snds_L", "", 0, 0, "" },// PDW
            { "muzzle_snds_M", "", 0, 0, "" },// Silencieux 5.56
            { "muzzle_snds_H", "", 0, 0, "" },// Silencieux 6.5
			{ "muzzle_snds_570", "", 0, 0, "" },// Silencieux 5.7
            { "muzzle_snds_B", "", 0, 0, "" },// Silencieux 7.62
            { "muzzle_snds_338_black", "", 0, 0, "" },// Silencieux .338
            { "muzzle_snds_93mmg", "", 0, 0, "" },// Silencieux 9.3
            { "bipod_02_F_blk", "", 0, 0, "" },// Bipied CSAT Noir
            { "bipod_01_F_blk", "", 0, 0, "" },// Bipied (Black) [NATO]
            { "acc_flashlight", "", 0, 0, "" },// Lampe torche
            { "acc_pointer_IR", "", 0, 0, "" },// Pointeur Laser
            { "optic_Aco", "", 0, 0, "" },//    ACO Rouge
            { "optic_ACO_grn", "", 0, 0, "" },//    ACO Vert
            { "optic_Aco_smg", "", 0, 0, "" },// ACO SMG Rouge
            { "optic_ACO_grn_smg", "", 0, 0, "" },// ACO SMG Vert
            { "optic_Holosight_blk_F", "", 0, 0, "" },// Holo
            { "optic_Holosight_smg_blk_F", "", 0, 0, "" },// Holo SMG
            { "optic_Hamr", "", 0, 0, "" },// RCO
            { "optic_Arco_blk_F", "", 0, 0, "" },// ARCO
            { "optic_ERCO_blk_F", "", 0, 0, "" },// ERCO
            { "optic_MRCO", "", 0, 0, "" },// MRCO
            { "optic_NVS", "", 0, 0, "" },// NVS
            { "optic_DMS", "", 0, 0, "" },// DMS
            { "optic_SOS", "", 0, 0, "" },// MOS
            { "optic_AMS", "", 0, 0, "" },// AMS
            { "optic_KHS_blk", "", 0, 0, "" },// Kahlia
			{ "optic_LRPS", "", 0, 0, "" } // LRPS
        };
    };

    //Boutique des medecins
	
    class med_basic {
        name = "store";
        side = "med";
        conditions = "";
        items[] = {
            { "ItemGPS", "", 100, 50, "" },
            { "Binocular", "", 150, 0, "" },
			{ "ItemRadio", "Telephone", 50, 25, "" }, 
            { "FirstAidKit", "", 150, 75, "" },
            { "NVGoggles", "", 1200, 600, "" }
        };
        mags[] = {};
        accs[] = {};
    };
};
