/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        3: STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/




class Clothing {
	
	
		//vetements pour le bucheron

    class bucheron {
        title = "Vetements de bucheron";
        conditions = "license_civ_bucheron";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_C_HunterBody_grn", "Tenue de bucheron", 1500, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Booniehat_grn", "", 1000, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
			{ "G_Sport_Checkered", "", 500, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
			{ "V_Rangemaster_belt", "", 500, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
			{ "", "", 500, "" }
        };
    };
	
	
	
	//vetements pour la chasse 

    class chasseur {
        title = "Vetements de chasseur";
        conditions = "license_civ_chasseur";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_C_HunterBody_grn", "Tenue de Chasse", 1500, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Booniehat_grn", "", 1000, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
			{ "G_Sport_Checkered", "", 500, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
			{ "V_Rangemaster_belt", "", 500, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
			{ "", "", 500, "" }
        };
    };
	

    class bruce {
        title = "STR_Shops_C_Bruce";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_C_Poloshirt_stripped", "", 125, "" },
            { "U_C_Poloshirt_redwhite", "", 150, "" },
            { "U_C_Poloshirt_salmon", "", 175, "" },
            { "U_C_Poloshirt_blue", "", 250, "" },
            { "U_C_Poloshirt_burgundy", "", 275, "" },
            { "U_C_Poloshirt_tricolour", "", 350, "" },
            { "U_C_Poor_2", "", 250, "" },
            { "U_IG_Guerilla2_2", "", 650, "" },
            { "U_IG_Guerilla3_1", "", 735, "" },
            { "U_OrestesBody", "", 1100, "" },
            { "U_IG_Guerilla2_3", "", 1200, "" },
            { "U_C_HunterBody_grn", "", 1500, "" },
            { "U_C_WorkerCoveralls", "", 2500, "" },
            { "U_NikosBody", "", 3000, "" },
            { "U_NikosAgedBody", $STR_C_Civ_Niko, 5000, "" },
            { "U_C_Man_casual_1_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_2_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_3_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_4_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_5_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_6_F", "", 5000, "" }, //Apex DLC
            { "U_C_man_sport_1_F", "", 5000, "" }, //Apex DLC
            { "U_C_man_sport_2_F", "", 5000, "" }, //Apex DLC
            { "U_C_man_sport_3_F", "", 5000, "" } //Apex DLC
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Bandanna_camo", "", 120, "" },
            { "H_Bandanna_surfer", "", 130, "" },
            { "H_Bandanna_khk", "", 145, "" },
            { "H_Cap_blu", "", 150, "" },
            { "H_Cap_grn", "", 150, "" },
            { "H_Cap_grn_BI", "", 150, "" },
            { "H_Cap_oli", "", 150, "" },
            { "H_Cap_red", "", 150, "" },
            { "H_Cap_tan", "", 150, "" },
            { "H_Helmet_Skate", "", 150, "" }, //Apex DLC
            { "H_Bandanna_gry", "", 150, "" },
            { "H_Bandanna_sgg", "", 160, "" },
            { "H_Bandanna_cbr", "", 165, "" },
            { "H_StrawHat", "", 225, "" },
            { "H_Hat_tan", "", 265, "" },
            { "H_Hat_brown", "", 276, "" },
            { "H_Hat_grey", "", 280, "" },
            { "H_BandMask_blk", $STR_C_Civ_BandMask, 300, "" },
            { "H_Hat_blue", "", 310, "" },
            { "H_Hat_checker", "", 340, "" },
            { "H_Booniehat_tan", "", 425, "" },
            { "H_Booniehat_grn", "", 425, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Shades_Green", "", 20, "" },
            { "G_Shades_Red", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Greenblack", "", 25, "" },
            { "G_Sport_Red", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Aviator", "", 100, "" },
            { "G_Combat", "", 125, "" },
            { "G_Lady_Mirror", "", 150, "" },
            { "G_Lady_Dark", "", 150, "" },
            { "G_Lady_Blue", "", 150, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_AssaultPack_tna_f", "", 2000, "" }, //Apex DLC
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_FieldPack_ghex_f", "", 5000, "" }, //Apex DLC
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_Bergen_blk", "", 6500, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" },
            { "B_Carryall_ghex_f", "", 7500, "" }, //Apex DLC
            { "B_Bergen_dgtl_f", "", 9500, "" }, //Apex DLC
            { "B_Bergen_tna_f", "", 9500, "" } //Apex DLC
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        conditions = "";
        side = "cop";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_Rangemaster", $STR_C_Cop_uniforms, 25, "" },
            { "U_B_CombatUniform_mcam_tshirt", "", 350, "call life_coplevel >= 1" },
            { "U_B_CombatUniform_mcam_worn", "", 550, "call life_coplevel >= 2" },
            { "U_B_survival_uniform", "", 1250, "call life_coplevel >= 1" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Cap_police", "", 25, "" },
            { "H_Booniehat_mcamo", "", 120, "call life_coplevel >= 1" },
            { "H_HelmetB_plain_mcamo", "", 75, "call life_coplevel >= 1" },
            { "H_HelmetB_Enh_tna_F", "", 80, "call life_coplevel >= 1" }, //Apex DLC
            { "H_Beret_blk_POLICE", "", 50, "call life_coplevel >= 2" },
            { "H_MilCap_mcamo", "", 100, "call life_coplevel >= 2" },
            { "H_MilCap_gen_F", "", 1200, "call life_coplevel >= 2" }, //Apex DLC
            { "H_MilCap_tna_F", "", 1200, "call life_coplevel >= 2" }, //Apex DLC
            { "H_MilCap_oucamo", "", 1200, "call life_coplevel >= 2" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Squares", "", 10, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Sport_Blackred", "", 20, "" },
            { "G_Sport_Checkered", "", 20, "" },
            { "G_Sport_Blackyellow", "", 20, "" },
            { "G_Sport_BlackWhite", "", 20, "" },
            { "G_Shades_Black", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Combat", "", 55, "" },
            { "G_Aviator", "", 100, "" },
            { "G_Lady_Mirror", "", 150, "" },
            { "G_AirPurifyingRespirator_02_black_F", "masque a gaz", 500, "" }, //dlc contact
            { "G_Lady_Blue", "", 150, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 800, "" },
            { "V_TacVest_blk_POLICE", "", 1000, "call life_coplevel >= 1" },
            { "V_TacVest_gen_F", "", 1000, "call life_coplevel >= 1" }, //Apex DLC
            { "V_PlateCarrier2_rgr", "", 1500, "call life_coplevel >= 2" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_FieldPack_cbr", "", 500, "" },
            { "B_AssaultPack_cbr", "", 700, "" },
            { "B_Kitbag_cbr", "", 800, "" },
            { "B_Bergen_sgg", "", 2500, "" },
            { "B_Carryall_cbr", "", 3500, "" }
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        conditions = "license_civ_dive";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_B_Wetsuit", "", 2000, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Diving", "", 500, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_RebreatherB", "", 5000, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        conditions = "license_civ_gun";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 4900, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 1900, "" },
			{ "V_HarnessOGL_gry", "Veste Explosive", 50000, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        conditions = "";
        side = "med";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_Rangemaster", $STR_C_EMS_uniforms, 50, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Cap_blu", "", 10, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Blue", "", 10, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_FieldPack_oli", $STR_C_EMS_backpacks, 3000, "" }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        conditions = "license_civ_rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", "Aucune tenue", 0, "" },
            { "U_BG_Guerrilla_6_1", "", 1000, "" },
            { "U_B_CombatUniform_mcam", "", 1000, "" },
            { "U_O_CombatUniform_ocamo", "", 1000, "" },
            { "U_I_HeliPilotCoveralls", "", 1000, "" },
            { "U_O_SpecopsUniform_blk", "", 1000, "" },
            { "U_I_CombatUniform_shortsleeve", "", 1000, "" },
            { "U_B_CTRG_Soldier_urb_1_F", "", 1000, "" },
            { "U_B_CTRG_Soldier_urb_2_F", "", 1000, "" },
            { "U_B_CTRG_Soldier_urb_3_F", "", 1000, "" },
			{ "U_B_CombatUniform_mcam_tshirt", "", 2000, "" },
			{ "U_I_CombatUniform", "", 2000, "" },
			{ "U_B_CombatUniform_mcam_vest", "", 2000, "" },
            { "U_IG_Guerilla1_1", "", 500, "" },
            { "U_I_G_Story_Protagonist_F", "", 750, "" },
            { "U_O_GhillieSuit", "", 5000, "" },
            { "U_B_GhillieSuit", "", 5000, "" },
            { "U_I_GhillieSuit", "", 5000, "" },
            { "U_B_FullGhillie_ard", "", 5000, "" },
            { "U_O_T_Soldier_F", "", 2000, "" },
            { "U_O_T_Officer_F", "", 2000, "" },
            { "U_O_T_Sniper_F", "", 2000, "" },
            { "U_O_T_FullGhillie_tna_F", "", 2000, "" },
            { "U_B_T_Soldier_F", "", 5000, "" },
            { "U_B_T_Soldier_AR_F", "", 5000, "" },
			{ "U_B_CTRG_Soldier_F", "", 5000, "" },
			{ "U_B_CTRG_Soldier_2_F", "", 5000, "" },
			{ "U_BG_Guerilla1_2_F", "", 5000, "" },
            { "U_B_T_Soldier_SL_F", "", 5000, "" },
            { "U_B_T_Sniper_F", "", 8000, "" },
            { "U_B_T_FullGhillie_tna_F", "", 10000, "" },
            { "U_I_C_Soldier_Para_1_F", "", 2000, "" },
            { "U_I_C_Soldier_Para_4_F", "", 2000, "" },
            { "U_I_C_Soldier_Para_5_F", "", 2000, "" },
            { "U_I_C_Soldier_Camo_F", "", 2000, "" },
            { "U_O_OfficerUniform_ocamo", "Officier Guerilla", 4500, "" },
            { "U_I_OfficerUniform", "Officier Guerilla", 4500, "" },
            { "U_IG_leader", "Leader Guerilla", 7500, "" },
            { "U_O_CombatUniform_oucamo", "", 0, "" },
            { "U_B_CTRG_2", "", 0, "" }
        };
        headgear[] = {
            { "NONE", "Aucun chapeau", 0, "" },
            { "H_Bandanna_camo", "", 150, "" },
            { "H_ShemagOpen_tan", "", 200, "" },
            { "H_Shemag_olive", "", 200, "" },
            { "H_ShemagOpen_khk", "", 200, "" },
            { "H_MilCap_oucamo", "", 200, "" },
            { "H_MilCap_tna_F", "", 450, "" },
            { "H_Beret_grn_SF", "", 5000, "" },
            { "H_HelmetO_ocamo", "", 300, "" },
            { "H_HelmetB_tna_F", "", 950, "" },
            { "H_HelmetB_camo", "",1250, "" },
            { "H_HelmetB_paint", "", 1200, "" },
            { "H_HelmetB_plain_mcamo", "", 1200, "" },
            { "H_HelmetSpecB", "", 3200, "" },
            { "H_HelmetIA", "", 3500, "" },
            { "H_PilotHelmetHeli_O", "", 3250, "" },
            { "H_PilotHelmetHeli_I", "", 3250, "" },
            { "H_HelmetB_Enh_tna_F", "", 3750, "" },
            { "H_HelmetB_light", "", 3250, "" },
            { "H_HelmetB_Light_tna_F", "", 3950, "" },
            { "H_HelmetSpecB_sand", "", 3000, "" },
			{ "H_HelmetSpecO_ocamo", "", 3000, "" },
			{ "H_HelmetSpecO_ghex_F", "", 3000, "" },
			{ "H_HelmetCrew_I", "", 3000, "" },
			{ "H_HelmetCrew_O", "", 3000, "" },
			{ "H_CrewHelmetHeli_I", "", 3000, "" },
			{ "H_HelmetB_TI_tna_F", "", 3000, "" },
			{ "H_HelmetSpecB_paint1", "", 3000, "" },
			{ "H_Booniehat_mcamo", "", 500, "" },
			{ "H_Booniehat_oli", "", 500, "" },
			{ "H_Booniehat_dgtl", "", 500, "" },
			{ "H_HeadBandage_bloody_F", "", 250, "" },
			{ "H_HeadBandage_stained_F", "", 300, "" },
			{ "H_HeadBandage_clean_F", "", 350, "" },
			{ "H_Tank_black_F", "", 3000, "" },
			{ "H_Hat_camo", "", 500, "" }



        };
        goggles[] = {
            { "NONE", "Aucun accessoire", 0, "" },
            { "G_Shades_Black", "", 25, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Sport_Blackred", "", 20, "" },
            { "G_Sport_Checkered", "", 20, "" },
            { "G_Sport_Blackyellow", "", 20, "" },
            { "G_Sport_BlackWhite", "", 20, "" },
            { "G_Squares", "", 10, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Combat", "", 55, "" },
            { "G_Combat_Goggles_tna_F", "", 250, "" },
            { "G_Tactical_Clear", "", 250, "" },
            { "G_Tactical_Black", "", 250, "" },
            { "G_Bandanna_aviator", "", 150, "" },
            { "G_Bandanna_beast", "", 150, "" },
            { "G_Bandanna_blk", "", 150, "" },
            { "G_Bandanna_khk", "", 150, "" },
            { "G_Bandanna_oli", "", 150, "" },
            { "G_Bandanna_shades", "", 150, "" },
            { "G_Bandanna_sport", "", 150, "" },
            { "G_Bandanna_tan", "", 150, "" },
            // BI
            { "G_Balaclava_blk", "", 150, "" },
            { "G_Balaclava_combat", "", 150, "" },
            { "G_Balaclava_lowprofile", "", 150, "" },
            { "G_Balaclava_oli", "", 150, "" },
            { "G_Balaclava_TI_tna_F", "", 7500, "" },
            { "G_Balaclava_TI_G_tna_F", "", 7500, "" }
        };
        vests[] = {
            { "NONE", "Aucune veste", 0, "" },
            { "V_Rangemaster_belt", "", 2000, "" },
            { "V_TacVest_khk", "", 2500, "" },
            { "V_TacVest_brn", "", 2500, "" },
            { "V_TacVest_oli", "", 2500, "" },
            { "V_TacVest_camo", "", 2500, "" },
            { "V_PlateCarrierIA2_dgtl", "", 2500, "" },
            { "V_PlateCarrier1_tna_F", "", 5000, "" },
			{ "V_TacChestrig_grn_F", "", 5000, "" },
			{ "V_TacChestrig_cbr_F", "", 5000, "" },
            { "V_PlateCarrier2_tna_F", "", 5000, "" },
			{ "V_HarnessO_brn", "", 5000, "" },
			{ "V_HarnessO_ghex_F", "", 5000, "" },
			{ "V_Chestrig_khk", "", 5000, "" },
			{ "V_Chestrig_oli", "", 5000, "" },
			{ "V_Chestrig_rgr", "", 5000, "" },
			{ "V_PlateCarrierIA2_dgtl", "", 5000, "" },
            { "V_PlateCarrier2_rgr_noflag_F", "", 10000, "" },
            { "V_PlateCarrierH_CTRG", "", 5500, "" }
        };
        backpacks[] = {
            { "NONE", "Aucune sac à dos", 0, "" },
            { "B_AssaultPack_khk", "", 200, "" },
            { "B_AssaultPack_dgtl", "", 200, "" },
            { "B_AssaultPack_rgr", "", 200, "" },
            { "B_AssaultPack_sgg", "", 200, "" },
            { "B_AssaultPack_cbr", "", 200, "" },
            { "B_AssaultPack_mcamo", "", 200, "" },
            { "B_TacticalPack_oli", "", 250, "" },
            { "B_Kitbag_mcamo", "", 350, "" },
            { "B_Kitbag_sgg", "", 350, "" },
            { "B_Kitbag_cbr", "", 350, "" },
            { "B_Bergen_sgg", "", 650, "" },
            { "B_Bergen_mcamo", "", 650, "" },
            { "B_Bergen_rgr", "", 650, "" },
            { "B_FieldPack_ocamo", "", 500, "" },
            { "B_FieldPack_oucamo", "", 500, "" },
            { "B_FieldPack_ghex_F", "", 750, ""  },
            { "B_Carryall_ocamo", "", 750, "" },
            { "B_Carryall_oucamo", "", 750, "" },
            { "B_Carryall_mcamo", "", 750, "" },
            { "B_Carryall_oli", "", 750, "" },
            { "B_Carryall_khk", "", 750, "" },
            { "B_Carryall_cbr", "", 750, "" },
            { "B_Carryall_ghex_F", "", 750, ""  },
            { "B_ViperLightHarness_khk_F", "", 2000, ""  },
            { "B_ViperLightHarness_hex_F", "", 2000, ""  },
            { "B_ViperLightHarness_oli_F", "", 2000, ""  },
            { "B_ViperLightHarness_ghex_F", "", 2000, ""  },
            { "B_ViperHarness_hex_F", "", 2500, ""  },
            { "B_ViperHarness_oli_F", "", 2500, ""  },
            { "B_ViperHarness_khk_F", "", 2500, ""  },
            { "B_ViperHarness_ghex_F", "", 2500, ""  },
            { "B_Bergen_tna_F", "", 1000, ""  },
			{ "B_Messenger_Coyote_F", "", 1000, "" },
			{ "B_Messenger_Gray_F", "", 1000, "" },
			{ "B_Messenger_Olive_F", "", 1000, "" },
            { "B_Bergen_hex_F", "", 1000, ""  },
            { "B_Bergen_dgtl_F", "", 1000, ""  },
            { "B_Bergen_mcamo_F", "", 1000, ""  },
            { "B_Parachute", "Parachute", 0, "" }
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_C_Driver_1_black", "", 1500, "" },
            { "U_C_Driver_1_blue", "", 1500, "" },
            { "U_C_Driver_1_red", "", 1500, "" },
            { "U_C_Driver_1_orange", "", 1500, "" },
            { "U_C_Driver_1_green", "", 1500, "" },
            { "U_C_Driver_1_white", "", 1500, "" },
            { "U_C_Driver_1_yellow", "", 1500, "" },
            { "U_C_Driver_2", "", 3500, "" },
            { "U_C_Driver_1", "", 3600, "" },
            { "U_C_Driver_3", "", 3700, "" },
            { "U_C_Driver_4", "", 3700, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_RacingHelmet_1_black_F", "", 1000, "" },
            { "H_RacingHelmet_1_red_F", "", 1000, "" },
            { "H_RacingHelmet_1_white_F", "", 1000, "" },
            { "H_RacingHelmet_1_blue_F", "", 1000, "" },
            { "H_RacingHelmet_1_yellow_F", "", 1000, "" },
            { "H_RacingHelmet_1_green_F", "", 1000, "" },
            { "H_RacingHelmet_1_F", "", 2500, "" },
            { "H_RacingHelmet_2_F", "", 2500, "" },
            { "H_RacingHelmet_3_F", "", 2500, "" },
            { "H_RacingHelmet_4_F", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };
};
