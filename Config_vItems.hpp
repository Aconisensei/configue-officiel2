/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*/
class VirtualShops {
	
	//menu aide pour les objets touche a ton cu ou demande a atomaza si tu as volé ce fichier !
	
	class ymarket {
    name = "STR_Shops_yMarket";
    conditions = "";
    items[] = {"apple", "blastingcharge", "boltcutter", "cannabis", "catshark", "catshark_raw", "cement", "cocaine_processed", "cocaine_unprocessed", "coffee", "copper_refined", "copper_unrefined", "defibrillator", "defusekit", "diamond_cut", "diamond_uncut", "donuts", "fuelEmpty", "fuelFull", "glass", "goat", "goat_raw", "goldbar", "hen", "hen_raw", "heroin_processed", "heroin_unprocessed", "iron_refined", "iron_unrefined", "lockpick", "mackerel", "mackerel_raw", "marijuana", "mullet", "mullet_raw", "mushrooms", "oil_processed", "oil_unprocessed", "ornate", "ornate_raw", "peach", "pickaxe", "rabbit", "rabbit_raw", "redgull", "rock", "rooster", "rooster_raw", "salema", "salema_raw", "sand", "salt_refined", "salt_unrefined", "sheep", "sheep_raw", "spikeStrip", "storagebig", "storagesmall", "toolkit", "tbacon", "tuna", "tuna_raw",  "turtle_soup",  "turtle_raw",  "waterBottle"};
	};
	
	
    //Virtual Shops
    class market {
        name = "STR_Shops_Market";
        side = "civ";
        conditions = "";
        items[] = { "waterBottle", "apple", "MechanicTool", "morphine", "bandages", "paracetamol", "adrenaline", "redgull", "quies", "tbacon", "pickaxe", "toolkit", "fuelFull", "peach", "storagesmall", "storagebig", "fourchette", "gant", "levure" };
    };

    class med_market {
        name = "STR_Shops_Market";
        side = "med";
        conditions = "";
        items[] = { "waterBottle", "morphine", "bandages", "paracetamol", "adrenaline", "apple", "redgull", "tbacon", "toolkit", "fuelFull", "peach", "defibrillator", "fourchette", "gant" };
    };
	
	// Shop ressource Aconis /////////////////////////////////////////////////////////////////////////////////////
    class charbon {
        name = "STR_Shops_charbon";
        side = "civ";
        conditions = "";
        items[] = { "Bcharbon", "charbon" };
    };    

    class bijoutier {
        name = "STR_Shops_bijoutier";
        side = "civ";
        conditions = "";
        items[] = { "ruby", "zaphir", "emer" };
    };    
	
    class os {
        name = "STR_Shops_os";
        side = "civ";
        conditions = "";
        items[] = { "os" };
    };  
	
    class chaire {
        name = "STR_Shops_chaire";
        side = "civ";
        conditions = "";
        items[] = { "chaire" };
    }; 
	
    class ordure {
        name = "STR_Shops_ordure";
        side = "civ";
        conditions = "";
        items[] = { "ordure" };
    }; 
	
    class barman {
        name = "STR_Shops_barman";
        side = "civ";
        conditions = "";
        items[] = { "biere", "mojito" };
    }; 






	
	//

    class rebel {
        name = "STR_Shops_Rebel";
        side = "civ";
        conditions = "license_civ_rebel";
		items[] = { "waterBottle", "speedbomb", "scalpel", "morphine", "bandages", "timedbomb", "paracetamol", "adrenaline", "ziptie", "gag", "quies", "blindfold", "rabbit", "apple", "redgull", "tbacon", "lockpick", "pickaxe", "toolkit", "fuelFull", "peach", "boltcutter", "blastingcharge" };
    };

    class gang {
        name = "STR_Shops_Gang";
        side = "civ";
        conditions = "";
        items[] = { "waterBottle", "apple", "quies", "morphine", "bandages", "redgull", "tbacon", "blindfold", "lockpick", "pickaxe", "toolkit", "fuelFull", "peach", "boltcutter", "blastingcharge" };
    };

    class wongs {
        name = "STR_Shops_Wongs";
        side = "civ";
        conditions = "";
        items[] = { "turtle_soup", "turtle_raw" };
    };

    class coffee {
        name = "STR_Shops_Coffee";
        side = "civ";
        conditions = "";
        items[] = { "coffee", "ItemRadio", "donuts" };
    };

    class f_station_coffee {
        name = "STR_Shop_Station_Coffee";
        side = "";
        conditions = "";
        items[] = { "coffee", "donuts", "redgull", "toolkit", "fuelFull"};
    };

    class drugdealer {
        name = "STR_Shops_DrugDealer";
        side = "civ";
        conditions = "";
        items[] = { "cocaine_processed", "heroin_processed", "marijuana" };
    };

    class oil {
        name = "STR_Shops_Oil";
        side = "civ";
        conditions = "";
        items[] = { "oil_processed", "pickaxe", "fuelFull" };
    };

    class fishmarket {
        name = "STR_Shops_FishMarket";
        side = "civ";
        conditions = "";
        items[] = { "salema_raw", "salema", "ornate_raw", "ornate", "mackerel_raw", "mackerel", "tuna_raw", "tuna", "mullet_raw", "mullet", "catshark_raw", "catshark" };
    };

    class glass {
        name = "STR_Shops_Glass";
        side = "civ";
        conditions = "";
        items[] = { "glass" };
    };

    class iron  {
        name = "STR_Shops_Minerals";
        side = "civ";
        conditions = "";
        items[] = { "iron_refined", "copper_refined" };
    };

    class diamond {
        name = "STR_Shops_Diamond";
        side = "civ";
        conditions = "";
        items[] = { "diamond_uncut", "diamond_cut" };
    };

    class salt {
        name = "STR_Shops_Salt";
        side = "civ";
        conditions = "";
        items[] = { "salt_refined" };
    };

    class cement {
        name = "STR_Shops_Cement";
        side = "civ";
        conditions = "";
        items[] = { "cement" };
    };

    class gold {
        name = "STR_Shops_Gold";
        side = "civ";
        conditions = "";
        items[] = { "goldbar" };
    };

    class cop {
        name = "STR_Shops_Cop";
        side = "cop";
        conditions = "";
        items[] = { "donuts", "coffee", "speedcam", "bandages", "spikeStrip", "waterBottle", "apple", "redgull", "toolkit", "fuelFull", "defusekit", "defibrillator" };
    };
	
	class organ {
        name = "STR_Shops_Organ";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = {"waterBottle","kidney","scalpel",};
    };
	

	
	//boutique et vendeur pour les bucherons
	class bucheron {
        name = "STR_Shops_Bucheron";
        side = "civ";
        conditions = "license_civ_bucheron";
        items[] = { "bois", "planche", "cercueil", "papier", "pickaxe", "Land_Axe_F"  };
    };
	
	//boutique de chasse
	class chasse {
        name = "STR_Shops_chasse";
        side = "civ";
        conditions = "license_civ_chasseur";
        items[] = { "waterBottle", "rabbit", "ragout", "hen", "rooster", "sheep", "goat", "apple", "huntingKit", "redgull", "toolkit", "fuelFull", "peach" };
    };
	
	//boutique de chasse
	class boucherie {
        name = "STR_Shops_chasse";
        side = "civ";
        conditions = "license_civ_chasseur";
        items[] = { "rabbit_raw", "hen_raw", "rooster_raw", "sheep_raw", "goat_raw" };
    };
	
	//centrale nucleaire
	class nucleaire {
        name = "STR_Shops_nucleaire";
        side = "civ";
        conditions = "license_civ_ingenieur";
        items[] = { "uraniump", "uranium", "uraniumi"};
		
    };
	
	//tueur a gage
	class tueur {
        name = "STR_Shops_Tueur";
        side = "civ";
        conditions = "license_civ_tueur";
        items[] = { ""};
		
    };
	
	
};

/*
*    CLASS:
*        variable = Variable Name
*        displayName = Item Name
*        weight = Item Weight
*        buyPrice = Item Buy Price
*        sellPrice = Item Sell Price
*        illegal = Illegal Item
*        edible = Item Edible (-1 = Disabled)
*        icon = Item Icon
*        processedItem = Processed Item
*/
class VirtualItems {
    //Virtual Items
	
	
	
	
	
		//teroro sur armalife
	class timedbomb {
		variable = "timedbomb";
		displayName = "STR_Item_timedbomb";
		weight = 12;
		buyPrice = 15000;
		sellPrice = -1;
		illegal = true;
		edible = -1;
		icon = "icons\ico_bombe.paa";
	};
	
	class speedbomb {
        variable = "speedbomb";
        displayName = "STR_Item_SpeedBomb";
        weight = 10;
        buyPrice = 1000;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_speedbomb.paa";
		description = "Description a venir";
    };
	
	
	// Farm Aconis /////////////////////////////////////////////////////////////////////////////////
    class Bcharbon {
        variable = "Bcharbon";
        displayName = "STR_bcharbon";
        weight = 2;
        buyPrice = -1;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        icon = "icons\bcharbon.paa";
    };

    class charbon {
        variable = "charbon";
        displayName = "STR_charbon";
        weight = 2;
        buyPrice = -1;
        sellPrice = 600;
        illegal = false;
        edible = -1;
        icon = "icons\charbon.paa";
    };

    class bruby {
        variable = "bruby";
        displayName = "STR_bruby";
        weight = 2;
        buyPrice = -1;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        icon = "icons\bruby.paa";
    };

    class ruby {
        variable = "ruby";
        displayName = "STR_ruby";
        weight = 2;
        buyPrice = -1;
        sellPrice = 550;
        illegal = false;
        edible = -1;
        icon = "icons\ruby.paa";
    };

    class bzaphir {
        variable = "bzaphir";
        displayName = "STR_bzaphir";
        weight = 2;
        buyPrice = -1;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        icon = "icons\bzaphir.paa";
    };

    class zaphir {
        variable = "zaphir";
        displayName = "STR_zaphir";
        weight = 2;
        buyPrice = -1;
        sellPrice = 550;
        illegal = false;
        edible = -1;
        icon = "icons\zaphir.paa"; 
    };
	
    class bemer {
        variable = "bemer";
        displayName = "STR_bemer";
        weight = 2;
        buyPrice = -1;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        icon = "icons\bemer.paa";
    };

    class emer {
        variable = "emer";
        displayName = "STR_emer";
        weight = 2;
        buyPrice = -1;
        sellPrice = 550;
        illegal = false;
        edible = -1;
        icon = "icons\emer.paa"; 
    };

    class os {
        variable = "os";
        displayName = "STR_os";
        weight = 2;
        buyPrice = -1;
        sellPrice = 550;
        illegal = false;
        edible = -1;
        icon = "icons\os.paa"; 
    };

    class chaire {
        variable = "chaire";
        displayName = "STR_chaire";
        weight = 2;
        buyPrice = -1;
        sellPrice = 550;
        illegal = false;
        edible = -1;
        icon = "icons\chaire.paa"; 
    };

    class fourchette {
        variable = "fourchette";
        displayName = "STR_fourchette";
        weight = 1;
        buyPrice = -1;
        sellPrice = 550;
        illegal = false;
        edible = -1;
        icon = "icons\fourchette.paa"; 
    };

    class ordure {
        variable = "ordure";
        displayName = "STR_ordure";
        weight = 2;
        buyPrice = -1;
        sellPrice = 550;
        illegal = false;
        edible = -1;
        icon = "icons\ordure.paa"; 
    };
	
    class gant {
        variable = "gant";
        displayName = "STR_gant";
        weight = 1;
        buyPrice = -1;
        sellPrice = 550;
        illegal = false;
        edible = -1;
        icon = "icons\gant.paa"; 
    };
	
    class orge {
        variable = "orge";
        displayName = "STR_orge";
        weight = 1;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        icon = "icons\orge.paa"; 
    };
	
    class houblon {
        variable = "houblon";
        displayName = "STR_houblon";
        weight = 1;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        icon = "icons\houblon.paa"; 
    };

    class Levure {
        variable = "levure";
        displayName = "STR_levure";
        weight = 1;
        buyPrice = 10;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        icon = "icons\levure.paa"; 
    };

    class biere {
        variable = "biere";
        displayName = "STR_biere";
        weight = 1;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        icon = "icons\biere.paa"; 
    };
	
	
	
	
	
	
		//farm eau non potable + bouteille marché

	class eau {
        variable = "eau";
        displayName = "STR_Item_Eau";
        weight = 1;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_eau.paa";
		description = "Description a venir";
    };
	
	class eaup {
        variable = "eaup";
        displayName = "STR_Item_Eaup";
        weight = 2;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_eau.paa";
		description = "Description a venir";
    };
	
	// ephedrine
	class ephedrine {
        variable = "ephedrine";
        displayName = "STR_Item_Ephedrine";
        weight = 5;
        buyPrice = -1;
        sellPrice = 100;
        illegal = true;
        edible = -1;
        icon = "icons\ico_ephedrine.paa";
		description = "Description a venir";
    };
	
	
	//farm uranium by atomaza
	
	//uranium minerai
	class uranium {
        variable = "uranium";
        displayName = "STR_Item_Uranium";
        weight = 2;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_uranium.paa";
		description = "Description a venir";
    };
	
	//Galet d'uranium enrichi
	class uraniump {
        variable = "uraniump";
        displayName = "STR_Item_Uraniump";
        weight = 2;
        buyPrice = -1;
        sellPrice = 500;
        illegal = false;
        edible = -1;
        icon = "icons\ico_uraniump.paa";
		description = "Description a venir";
    };
	
	//echange illegal uranium --> plutonium
	class uraniumi {
        variable = "uraniumi";
        displayName = "STR_Item_Uraniumi";
        weight = 2;
        buyPrice = -1;
        sellPrice = 500;
        illegal = true;
        edible = -1;
        icon = "icons\ico_uraniumi.paa";
		description = "Description a venir";
    };
	
	
	//garagiste Armalife
	
	class MechanicTool {
		variable = "MechanicTool";
		displayName = "STR_Item_FMCD";
		weight = 4;
		buyPrice = 350;
		sellPrice = 100;
		illegal = false;
		edible = -1;
		icon = "\a3\weapons_f\items\data\UI\gear_toolkit_ca.paa";
		description = "Description a venir";
	};
	
	
	//toubib armalife
	
	class adrenaline {
        variable = "adrenaline";
        displayName = "STR_Item_Adrenaline";
        weight = 2;
        buyPrice = 1000;
        sellPrice = 500;
        illegal = false;
        edible = -1;
        icon = "icons\ico_adrenaline.paa";
		description = "Description a venir";
    };
	
	
	class paracetamol {
        variable = "paracetamol";
        displayName = "STR_Item_Paracetamol";
        weight = 2;
        buyPrice = 1000;
        sellPrice = 500;
        illegal = false;
        edible = -1;
        icon = "icons\ico_paracetamol.paa";
		description = "Description a venir";
    };
	
	class morphine {
        variable = "morphine";
        displayName = "STR_Item_Morphine";
        weight = 2;
        buyPrice = 1000;
        sellPrice = 500;
        illegal = true;
        edible = -1;
        icon = "icons\ico_morphine.paa";
		description = "Description a venir";
    };

    class bandages {
        variable = "bandages";
        displayName = "STR_Item_Bandages";
        weight = 2;
        buyPrice = 200;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_bandages.paa";
		description = "Description a venir";
    };
	
	//traffic d organe
	
	class kidney {
        variable = "kidney";
        displayName = "STR_Item_Kidney";
        weight = 15;
        buyPrice = 75000;
        sellPrice = 50000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_kidney.paa";
		description = "Description a venir";
    };
	
	class scalpel {
        variable = "scalpel";
        displayName = "STR_Item_Scalpel";
        weight = 5;
        buyPrice = 10000;
        sellPrice = 5000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_scalpel.paa";
		description = "Description a venir";
    };
	
	//esclavage
	class recyclage {
        variable = "recyclage";
        displayName = "STR_Item_recyclage";
        weight = 1;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_trash.paa";
		description = "Description a venir";
    };


    class dechet {
        variable = "dechet";
        displayName = "STR_Item_dechet";
        weight = 1;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_trash.paa";
		description = "Description a venir";
    }; 
	
	
	
	//bucheron by atomaza
	
	class bois {
		variable = "bois";
		displayName = "STR_Item_Bois";
		weight = 6;
		buyPrice = -1;
		sellPrice = 100;
		illegal = false;
		edible = -1;
		icon = "icons\tabac.paa";
		description = "Description a venir";
	};
	
	class planche {
		variable = "planche";
		displayName = "STR_Item_Planche";
		weight = 6;
		buyPrice = -1;
		sellPrice = 500;
		illegal = false;
		edible = -1;
		icon = "icons\tabac.paa";
		description = "Description a venir";
	};
	
	class cercueil {
		variable = "cercueil";
		displayName = "STR_Item_Cercueil";
		weight = 6;
		buyPrice = -1;
		sellPrice = 1000;
		illegal = false;
		edible = -1;
		icon = "icons\tabac.paa";
		description = "Description a venir";
	};
	
	class papier {
		variable = "papier";
		displayName = "STR_Item_Papier";
		weight = 6;
		buyPrice = -1;
		sellPrice = 100;
		illegal = false;
		edible = -1;
		icon = "icons\tabac.paa";
		description = "Description a venir";
	};
		
//boules de cire Quies
	class quies {
        variable = "quies";
        displayName = "STR_Item_Quies";
        weight = 1;
        buyPrice = 5;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_quies.paa";
		description = "Description a venir";
    };

// Kidnapping pour ArmaLife

class ziptie {
    variable = "ziptie";
    displayName = "STR_Ziptie";
    weight = 5;
    buyPrice = 5000;
    sellPrice = 1200;
    illegal = true;
    edible = -1;
    icon = "icons\ico_menottes.paa";
	description = "Description a venir";
};

class gag {
    variable = "gag";
    displayName = "STR_gag";
    weight = 2;
    buyPrice = 3000;
    sellPrice = 1000;
    illegal = true;
    edible = -1;
    icon = "icons\ico_gag.paa";
	description = "Description a venir";
};

class blindfold {
    variable = "blindfold";
    displayName = "STR_blindfold";
    weight = 2;
    buyPrice = 3500;
    sellPrice = 1200;
    illegal = true;
    edible = -1;
    icon = "icons\ico_blindfold.paa";
	description = "Description a venir";
};

	//boutique de chasse
	
	class huntingKit {
        variable = "huntingKit";
        displayName = "STR_Item_huntingKit";
        weight = 5;
        buyPrice = 800;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_chasse.paa";
		description = "Description a venir";
    };
	
	//radar mobile
	class speedcam {
        variable = "speedcam";
        displayName = "STR_Item_Radar";
        weight = 10;
        buyPrice = 750;
        sellPrice = 350;
        illegal = false;
        edible = -1;
        icon = "icons\ico_radar.paa";
		description = "Description a venir";
    };

    //Misc
	
	 class pickaxe {
        variable = "pickaxe";
        displayName = "STR_Item_Pickaxe";
        weight = 2;
        buyPrice = 750;
        sellPrice = 300;
        illegal = false;
        edible = -1;
        icon = "icons\ico_pickaxe.paa";
		description = "Description a venir";
    };
	//hache armalife
    class Land_Axe_F {
        variable = "Land_Axe_F";
        displayName = "STR_Item_Hache";
        weight = 2;
        buyPrice = 900;
        sellPrice = 500;
        illegal = false;
        edible = -1;
        icon = "icons\ico_axe.paa";
		description = "Description a venir";
    };

    class defibrillator {
        variable = "defibrillator";
        displayName = "STR_Item_Defibrillator";
        weight = 4;
        buyPrice = 900;
        sellPrice = 450;
        illegal = false;
        edible = -1;
        icon = "icons\ico_defibrillator.paa";
		description = "Description a venir";
    };

    class toolkit {
        variable = "toolkit";
        displayName = "STR_Item_Toolkit";
        weight = 4;
        buyPrice = 350;
        sellPrice = 100;
        illegal = false;
        edible = -1;
        icon = "\a3\weapons_f\items\data\UI\gear_toolkit_ca.paa";
		description = "Description a venir";
    };

    class fuelEmpty {
        variable = "fuelEmpty";
        displayName = "STR_Item_FuelE";
        weight = 2;
        buyPrice = -1;
        sellPrice = 10;
        illegal = false;
        edible = -1;
        icon = "icons\ico_fuelEmpty.paa";
		description = "Description a venir";
    };

    class fuelFull {
        variable = "fuelFull";
        displayName = "STR_Item_FuelF";
        weight = 5;
        buyPrice = 850;
        sellPrice = 500;
        illegal = false;
        edible = -1;
        icon = "icons\ico_fuel.paa";
		description = "Description a venir";
    };

    class spikeStrip {
        variable = "spikeStrip";
        displayName = "STR_Item_SpikeStrip";
        weight = 15;
        buyPrice = 2500;
        sellPrice = 1200;
        illegal = true;
        edible = -1;
        icon = "icons\ico_spikeStrip.paa";
		description = "Description a venir";
    };

    class lockpick {
        variable = "lockpick";
        displayName = "STR_Item_Lockpick";
        weight = 1;
        buyPrice = 150;
        sellPrice = 75;
        illegal = true;
        edible = -1;
        icon = "icons\ico_lockpick.paa";
		description = "Description a venir";
    };

    class goldbar {
        variable = "goldBar";
        displayName = "STR_Item_GoldBar";
        weight = 12;
        buyPrice = -1;
        sellPrice = 95000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_goldBar.paa";
		description = "Description a venir";
    };

    class blastingcharge {
        variable = "blastingCharge";
        displayName = "STR_Item_BCharge";
        weight = 15;
        buyPrice = 35000;
        sellPrice = 10000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_blastingCharge.paa";
		description = "Description a venir";
    };

    class boltcutter {
        variable = "boltCutter";
        displayName = "STR_Item_BCutter";
        weight = 5;
        buyPrice = 7500;
        sellPrice = 1000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_boltCutter.paa";
		description = "Description a venir";
    };

    class defusekit {
        variable = "defuseKit";
        displayName = "STR_Item_DefuseKit";
        weight = 2;
        buyPrice = 2500;
        sellPrice = 2000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_defuseKit.paa";
		description = "Description a venir";
    };

    class storagesmall {
        variable = "storageSmall";
        displayName = "STR_Item_StorageBS";
        weight = 5;
        buyPrice = 75000;
        sellPrice = 50000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_storageSmall.paa";
		description = "Description a venir";
    };

    class storagebig {
        variable = "storageBig";
        displayName = "STR_Item_StorageBL";
        weight = 10;
        buyPrice = 150000;
        sellPrice = 125000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_storageBig.paa";
		description = "Description a venir";
    };

    //Mined Items
    class oil_unprocessed {
        variable = "oilUnprocessed";
        displayName = "STR_Item_OilU";
        weight = 7;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_oilUnprocessed.paa";
		description = "Description a venir";
    };

    class oil_processed {
        variable = "oilProcessed";
        displayName = "STR_Item_OilP";
        weight = 6;
        buyPrice = -1;
        sellPrice = 3200;
        illegal = false;
        edible = -1;
        icon = "icons\ico_oilProcessed.paa";
		description = "Description a venir";
    };

    class copper_unrefined {
        variable = "copperUnrefined";
        displayName = "STR_Item_CopperOre";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copperOre.paa";
		description = "Description a venir";
    };

    class copper_refined {
        variable = "copperRefined";
        displayName = "STR_Item_CopperIngot";
        weight = 3;
        buyPrice = -1;
        sellPrice = 1500;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copper.paa";
		description = "Description a venir";
    };

    class iron_unrefined {
        variable = "ironUnrefined";
        displayName = "STR_Item_IronOre";
        weight = 5;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_ironOre.paa";
		description = "Description a venir";
    };

    class iron_refined {
        variable = "ironRefined";
        displayName = "STR_Item_IronIngot";
        weight = 3;
        buyPrice = -1;
        sellPrice = 3200;
        illegal = false;
        edible = -1;
        icon = "icons\ico_iron.paa";
		description = "Description a venir";
    };

    class salt_unrefined {
        variable = "saltUnrefined";
        displayName = "STR_Item_Salt";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_saltUnprocessed.paa";
		description = "Description a venir";
    };

    class salt_refined {
        variable = "saltRefined";
        displayName = "STR_Item_SaltR";
        weight = 1;
        buyPrice = -1;
        sellPrice = 1450;
        illegal = false;
        edible = -1;
        icon = "icons\ico_saltProcessed.paa";
		description = "Description a venir";
    };

    class sand {
        variable = "sand";
        displayName = "STR_Item_Sand";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_sand.paa";
		description = "Description a venir";
    };

    class glass {
        variable = "glass";
        displayName = "STR_Item_Glass";
        weight = 1;
        buyPrice = -1;
        sellPrice = 1450;
        illegal = false;
        edible = -1;
        icon = "icons\ico_glass.paa";
		description = "Description a venir";
    };

    class diamond_uncut {
        variable = "diamondUncut";
        displayName = "STR_Item_DiamondU";
        weight = 4;
        buyPrice = -1;
        sellPrice = 750;
        illegal = false;
        edible = -1;
        icon = "icons\ico_diamondUncut.paa";
		description = "Description a venir";
    };

    class diamond_cut {
        variable = "diamondCut";
        displayName = "STR_Item_DiamondC";
        weight = 2;
        buyPrice = -1;
        sellPrice = 2000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_diamondCut.paa";
		description = "Description a venir";
    };

    class rock {
        variable = "rock";
        displayName = "STR_Item_Rock";
        weight = 6;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_rock.paa";
		description = "Description a venir";
    };

    class cement {
        variable = "cement";
        displayName = "STR_Item_CementBag";
        weight = 5;
        buyPrice = -1;
        sellPrice = 1950;
        illegal = false;
        edible = -1;
        icon = "icons\ico_cement.paa";
		description = "Description a venir";
    };

    //Drugs
	
    class heroin_unprocessed {
        variable = "heroinUnprocessed";
        displayName = "STR_Item_HeroinU";
        weight = 6;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_heroinUnprocessed.paa";
        processedItem = "heroin_processed";
		description = "Description a venir";
    };

    class heroin_processed {
        variable = "heroinProcessed";
        displayName = "STR_Item_HeroinP";
        weight = 4;
        buyPrice = -1;
        sellPrice = 2560;
        illegal = true;
        edible = -1;
        icon = "icons\ico_heroinProcessed.paa";
		description = "Description a venir";
    };

    class cannabis {
        variable = "cannabis";
        displayName = "STR_Item_Cannabis";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cannabis.paa";
        processedItem = "marijuana";
		description = "Description a venir";
    };

    class marijuana {
        variable = "marijuana";
        displayName = "STR_Item_Marijuana";
        weight = 3;
        buyPrice = -1;
        sellPrice = 2350;
        illegal = true;
        edible = -1;
        icon = "icons\ico_marijuana.paa";
		description = "Description a venir";
    };

    class cocaine_unprocessed {
        variable = "cocaineUnprocessed";
        displayName = "STR_Item_CocaineU";
        weight = 6;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cocaineUnprocessed.paa";
        processedItem = "cocaine_processed";
		description = "Description a venir";
    };

    class cocaine_processed {
        variable = "cocaineProcessed";
        displayName = "STR_Item_CocaineP";
        weight = 4;
        buyPrice = -1;
        sellPrice = 5000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cocaineProcessed.paa";
		description = "Description a venir";
    };

    //Drink
	
    class redgull {
        variable = "redgull";
        displayName = "STR_Item_RedGull";
        weight = 1;
        buyPrice = 1500;
        sellPrice = 200;
        illegal = false;
        edible = 100;
        icon = "icons\ico_redgull.paa";
		description = "Description a venir";
    };

    class coffee {
        variable = "coffee";
        displayName = "STR_Item_Coffee";
        weight = 1;
        buyPrice = 10;
        sellPrice = 5;
        illegal = false;
        edible = 100;
        icon = "icons\ico_coffee.paa";
		description = "Description a venir";
    };

    class waterBottle {
        variable = "waterBottle";
        displayName = "STR_Item_WaterBottle";
        weight = 1;
        buyPrice = 10;
        sellPrice = 5;
        illegal = false;
        edible = 100;
        icon = "icons\ico_waterBottle.paa";
		description = "Description a venir";
    };

    //Food
    class apple {
        variable = "apple";
        displayName = "STR_Item_Apple";
        weight = 1;
        buyPrice = 65;
        sellPrice = 50;
        illegal = false;
        edible = 10;
        icon = "icons\ico_apple.paa";
		description = "Description a venir";
    };

    class peach {
        variable = "peach";
        displayName = "STR_Item_Peach";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        icon = "icons\ico_peach.paa";
		description = "Description a venir";
    };

    class tbacon {
        variable = "tbacon";
        displayName = "STR_Item_TBacon";
        weight = 1;
        buyPrice = 75;
        sellPrice = 25;
        illegal = false;
        edible = 40;
        icon = "icons\ico_tBacon.paa";
		description = "Description a venir";
    };

    class donuts {
        variable = "donuts";
        displayName = "STR_Item_Donuts";
        weight = 1;
        buyPrice = 120;
        sellPrice = 60;
        illegal = false;
        edible = 30;
        icon = "icons\ico_donuts.paa";
		description = "Description a venir";
    };

    class rabbit_raw {
        variable = "rabbitRaw";
        displayName = "STR_Item_RabbitRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 95;
        illegal = false;
        edible = -1;
        icon = "icons\ico_rabbitRaw.paa";
		description = "Description a venir";
    };

    class rabbit {
        variable = "rabbit";
        displayName = "STR_Item_Rabbit";
        weight = 1;
        buyPrice = 150;
        sellPrice = 115;
        illegal = false;
        edible = 20;
        icon = "icons\ico_rabbit.paa";
		description = "Description a venir";
    };

    class salema_raw {
        variable = "salemaRaw";
        displayName = "STR_Item_SalemaRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 45;
        illegal = false;
        edible = -1;
        icon = "icons\ico_salemaRaw.paa";
		description = "Description a venir";
    };

    class salema {
        variable = "salema";
        displayName = "STR_Item_Salema";
        weight = 1;
        buyPrice = 75;
        sellPrice = 55;
        illegal = false;
        edible = 30;
        icon = "icons\ico_cookedFish.paa";
		description = "Description a venir";
    };

    class ornate_raw {
        variable = "ornateRaw";
        displayName = "STR_Item_OrnateRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 40;
        illegal = false;
        edible = -1;
        icon = "icons\ico_ornateRaw.paa";
		description = "Description a venir";
    };

    class ornate {
        variable = "ornate";
        displayName = "STR_Item_Ornate";
        weight = 1;
        buyPrice = 175;
        sellPrice = 150;
        illegal = false;
        edible = 25;
        icon = "icons\ico_cookedFish.paa";
		description = "Description a venir";
    };

    class mackerel_raw {
        variable = "mackerelRaw";
        displayName = "STR_Item_MackerelRaw";
        weight = 4;
        buyPrice = -1;
        sellPrice = 175;
        illegal = false;
        edible = -1;
        icon = "icons\ico_mackerelRaw.paa";
		description = "Description a venir";
    };

    class mackerel {
        variable = "mackerel";
        displayName = "STR_Item_Mackerel";
        weight = 2;
        buyPrice = 250;
        sellPrice = 200;
        illegal = false;
        edible = 30;
        icon = "icons\ico_cookedFish.paa";
		description = "Description a venir";
    };

    class tuna_raw {
        variable = "tunaRaw";
        displayName = "STR_Item_TunaRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 700;
        illegal = false;
        edible = -1;
        icon = "icons\ico_tunaRaw.paa";
		description = "Description a venir";
    };

    class tuna {
        variable = "tuna";
        displayName = "STR_Item_Tuna";
        weight = 3;
        buyPrice = 1250;
        sellPrice = 1000;
        illegal = false;
        edible = 100;
        icon = "icons\ico_cookedFish.paa";
		description = "Description a venir";
    };

    class mullet_raw {
        variable = "mulletRaw";
        displayName = "STR_Item_MulletRaw";
        weight = 4;
        buyPrice = -1;
        sellPrice = 250;
        illegal = false;
        edible = -1;
        icon = "icons\ico_mulletRaw.paa";
		description = "Description a venir";
    };

    class mullet {
        variable = "mullet";
        displayName = "STR_Item_Mullet";
        weight = 2;
        buyPrice = 600;
        sellPrice = 400;
        illegal = false;
        edible = 80;
        icon = "icons\ico_cookedFish.paa";
		description = "Description a venir";
    };

    class catshark_raw {
        variable = "catsharkRaw";
        displayName = "STR_Item_CatSharkRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 300;
        illegal = false;
        edible = -1;
        icon = "icons\ico_catsharkRaw.paa";
		description = "Description a venir";
    };

    class catshark {
        variable = "catshark";
        displayName = "STR_Item_CatShark";
        weight = 3;
        buyPrice = 750;
        sellPrice = 500;
        illegal = false;
        edible = 100;
        icon = "icons\ico_cookedFish.paa";
		description = "Description a venir";
    };

    class turtle_raw {
        variable = "turtleRaw";
        displayName = "STR_Item_TurtleRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 3000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_turtleRaw.paa";
		description = "Description a venir";
    };

    class turtle_soup {
        variable = "turtleSoup";
        displayName = "STR_Item_TurtleSoup";
        weight = 2;
        buyPrice = 1000;
        sellPrice = 750;
        illegal = false;
        edible = 100;
        icon = "icons\ico_turtleSoup.paa";
		description = "Description a venir";
    };

    class hen_raw {
        variable = "henRaw";
        displayName = "STR_Item_HenRaw";
        weight = 1;
        buyPrice = -1;
        sellPrice = 65;
        illegal = false;
        edible = -1;
        icon = "icons\ico_wholeChickenRaw.paa";
		description = "Description a venir";
    };

    class hen {
        variable = "hen";
        displayName = "STR_Item_Hen";
        weight = 1;
        buyPrice = 115;
        sellPrice = 85;
        illegal = false;
        edible = 65;
        icon = "icons\ico_wholeChicken.paa";
		description = "Description a venir";
    };

    class rooster_raw {
        variable = "roosterRaw";
        displayName = "STR_Item_RoosterRaw";
        weight = 1;
        buyPrice = -1;
        sellPrice = 65;
        illegal = false;
        edible = -1;
        icon = "icons\ico_chickenDrumstickRaw.paa";
		description = "Description a venir";
    };

    class rooster {
        variable = "rooster";
        displayName = "STR_Item_Rooster";
        weight = 115;
        buyPrice = 90;
        sellPrice = 85;
        illegal = false;
        edible = 45;
        icon = "icons\ico_chickenDrumstick.paa";
		description = "Description a venir";
    };

    class sheep_raw {
        variable = "sheepRaw";
        displayName = "STR_Item_SheepRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 95;
        illegal = false;
        edible = -1;
        icon = "icons\ico_lambChopRaw.paa";
		description = "Description a venir";
    };

    class sheep {
        variable = "sheep";
        displayName = "STR_Item_Sheep";
        weight = 2;
        buyPrice = 155;
        sellPrice = 115;
        illegal = false;
        edible = 100;
        icon = "icons\ico_lambChop.paa";
		description = "Description a venir";
    };

    class goat_raw {
        variable = "goatRaw";
        displayName = "STR_Item_GoatRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 115;
        illegal = false;
        edible = -1;
        icon = "icons\ico_muttonLegRaw.paa";
		description = "Description a venir";
    };

    class goat {
        variable = "goat";
        displayName = "STR_Item_Goat";
        weight = 2;
        buyPrice = 175;
        sellPrice = 135;
        illegal = false;
        edible = 100;
        icon = "icons\ico_muttonLeg.paa";
		description = "Description a venir";
    };

    class ragout {
        variable = "ragout";
        displayName = "STR_Item_Ragout";
        weight = 5;
        buyPrice = -1;
        sellPrice = 1200;
        illegal = false;
        edible = 100;
        icon = "icons\ico_ragout.paa";
		description = "Description a venir";
    };
	
};