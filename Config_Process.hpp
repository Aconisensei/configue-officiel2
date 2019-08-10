/*
*   class:
*       MaterialsReq (Needed to process) = Array - Format -> {{"ITEM CLASS",HOWMANY}}
*       MaterialsGive (Returned items) = Array - Format -> {{"ITEM CLASS",HOWMANY}}
*       Text (Progess Bar Text) = Localised String
*       NoLicenseCost (Cost to process w/o license) = Scalar
*
*   Example for multiprocess:
*
*   class Example {
*       MaterialsReq[] = {{"cocaine_processed",1},{"heroin_processed",1}};
*       MaterialsGive[] = {{"diamond_cut",1}};
*       Text = "STR_Process_Example";
*       //ScrollText = "Process Example";
*       NoLicenseCost = 4000;
*   };
*/

class ProcessAction {
	
		//traitement de l eau non potable
	class water {
        MaterialsReq[] = {{"eau",2}};
        MaterialsGive[] = {{"eaup",1}};
        Text = "STR_Process_Eau";
        //ScrollText = "Refine Copper";
        NoLicenseCost = 0;
    };
	
	class meb {
        MaterialsReq[] = {{"eaup",1}};
        MaterialsGive[] = {{"waterBottle",1}};
        Text = "STR_Process_Eaup";
        //ScrollText = "Refine Copper";
        NoLicenseCost = 0;
    };
	
	// Traitement resosurce aconis
    class charbon {
        MaterialsReq[] = {{"Bcharbon",1}};
        MaterialsGive[] = {{"charbon",1}};
        Text = "STR_Process_charbon";
        //ScrollText = "Process";
        NoLicenseCost = 2350;
    }; 

    class ruby {
        MaterialsReq[] = {{"bruby",1}};
        MaterialsGive[] = {{"ruby",1}};
        Text = "STR_Process_ruby";
        //ScrollText = "Process ";
        NoLicenseCost = 2350;
    }; 

    class zaphir {
        MaterialsReq[] = {{"bzaphir",1}};
        MaterialsGive[] = {{"zaphir",1}};
        Text = "STR_Process_zaphir";
        //ScrollText = "Process ";
        NoLicenseCost = 2350; 
    };
	
    class emer {
        MaterialsReq[] = {{"bemer",1}};
        MaterialsGive[] = {{"emer",1}};
        Text = "STR_Process_emer";
        //ScrollText = "Process ";
        NoLicenseCost = 2350;
    };
	
    class biere {
        MaterialsReq[] = {{"orge",1 "houblon",1 "levure",1}};
        MaterialsGive[] = {{"biere",1}};
        Text = "STR_Process_emer";
        //ScrollText = "Process ";
        NoLicenseCost = 2350;
    };
	
	
	//traitement enrichir uranium
	class uraniump {
        MaterialsReq[] = {{"uranium",5}};
        MaterialsGive[] = {{"uraniump",1}};
        Text = "STR_Process_Uranium";
        //ScrollText = "Refine Copper";
        NoLicenseCost = 5000;
    };
	
	//traitement enrichir uranium
	class uraniumi {
        MaterialsReq[] = {{"uraniump",10}};
        MaterialsGive[] = {{"plutonium",1}};
        Text = "STR_Process_Plutonium";
        //ScrollText = "Refine Copper";
        NoLicenseCost = 5000;
    };
	
	
	// traitement pour les esclaves 
	class dechet {
        MaterialsReq[] = {{"dechet",2}};        
        MaterialsGive[] = {{"recyclage",1}};
    };
	
	
	//traitement pour les bucherons
	class planche {
        MaterialsReq[] = {{"bois",2}};
        MaterialsGive[] = {{"planche",1}};
        Text = "STR_Process_Planche";
        //ScrollText = "Refine Copper";
        NoLicenseCost = 0;
    };
	
	class cercueil {
        MaterialsReq[] = {{"bois",5}};
        MaterialsGive[] = {{"cercueil",1}};
        Text = "STR_Process_Cercueil";
        //ScrollText = "Refine Copper";
        NoLicenseCost = 0;
    };
	
	class papier {
        MaterialsReq[] = {{"bois",1},{"waterBottle",1}};
        MaterialsGive[] = {{"papier",2}};
        Text = "STR_Process_Papier";
        //ScrollText = "Refine Copper";
        NoLicenseCost = 0;
    };

	
	//cuisine de chasse
	
	class rabbit {
        MaterialsReq[] = {{"rabbit_raw",1}};
        MaterialsGive[] = {{"rabbit",1}};
        Text = "STR_Process_Rabbit";
        //ScrollText = "Process Lapin";
        NoLicenseCost = 0;
    };
	
	class tbacon {
        MaterialsReq[] = {{"hen_raw",1}};
        MaterialsGive[] = {{"tbacon",2}};
        Text = "STR_Process_Chasse2";
		//ScrollText = "Process Poule";
        NoLicenseCost = 0;
    };
	
	class rooster {
        MaterialsReq[] = {{"rooster_raw",1}};
        MaterialsGive[] = {{"rooster",1}};
        Text = "STR_Process_Chasse3";
		//ScrollText = "Process coq";
        NoLicenseCost = 0;
    };
	
	class sheep {
        MaterialsReq[] = {{"sheep_raw",1}};
        MaterialsGive[] = {{"sheep",1}};
        Text = "STR_Process_Chasse4";
		//ScrollText = "Process mouton";
        NoLicenseCost = 0;
    };
	
	class goat {
        MaterialsReq[] = {{"goat_raw",1}};
        MaterialsGive[] = {{"goat",1}};
        Text = "STR_Process_Chasse5";
		//ScrollText = "Process chevre";
        NoLicenseCost = 0;
    };
	
    class ragout {
        MaterialsReq[] = {{"rabbit_raw",1},{"hen_raw",1},{"rooster_raw",1},{"sheep_raw",1},{"goat_raw",1}};
        MaterialsGive[] = {{"ragout",1}};
        Text = "STR_Process_Chasse6";
		//ScrollText = "Process ragout";
        NoLicenseCost = 0;
     };
	
	//fin de la cuisine de chasse
	
    class oil {
        MaterialsReq[] = {{"oil_unprocessed",1}};
        MaterialsGive[] = {{"oil_processed",1}};
        Text = "STR_Process_Oil";
        //ScrollText = "Process Oil";
        NoLicenseCost = 0;
    };

    class diamond {
        MaterialsReq[] = {{"diamond_uncut",1}};
        MaterialsGive[] = {{"diamond_cut",1}};
        Text = "STR_Process_Diamond";
        //ScrollText = "Cut Diamonds";
        NoLicenseCost = 0;
    };

    class heroin {
        MaterialsReq[] = {{"heroin_unprocessed",1}};
        MaterialsGive[] = {{"heroin_processed",1}};
        Text = "STR_Process_Heroin";
        //ScrollText = "Process Heroin";
        NoLicenseCost = 0;
    };

    class copper {
        MaterialsReq[] = {{"copper_unrefined",1}};
        MaterialsGive[] = {{"copper_refined",1}};
        Text = "STR_Process_Copper";
        //ScrollText = "Refine Copper";
        NoLicenseCost = 0;
    };

    class iron {
        MaterialsReq[] = {{"iron_unrefined",1}};
        MaterialsGive[] = {{"iron_refined",1}};
        Text = "STR_Process_Iron";
        //ScrollText = "Refine Iron";
        NoLicenseCost = 0;
    };

    class sand {
        MaterialsReq[] = {{"sand",1}};
        MaterialsGive[] = {{"glass",1}};
        Text = "STR_Process_Sand";
        //ScrollText = "Melt Sand into Glass";
        NoLicenseCost = 0;
    };

    class salt {
        MaterialsReq[] = {{"salt_unrefined",1}};
        MaterialsGive[] = {{"salt_refined",1}};
        Text = "STR_Process_Salt";
        //ScrollText = "Refine Salt";
        NoLicenseCost = 0;
    };

    class cocaine {
        MaterialsReq[] = {{"cocaine_unprocessed",1}};
        MaterialsGive[] = {{"cocaine_processed",1}};
        Text = "STR_Process_Cocaine";
        //ScrollText = "Process Cocaine";
        NoLicenseCost = 0;
    };

    class marijuana {
        MaterialsReq[] = {{"cannabis",1}};
        MaterialsGive[] = {{"marijuana",1}};
        Text = "STR_Process_Marijuana";
        //ScrollText = "Harvest Marijuana";
        NoLicenseCost = 0;
    };

    class cement {
        MaterialsReq[] = {{"rock",1}};
        MaterialsGive[] = {{"cement",1}};
        Text = "STR_Process_Cement";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 0;
    };
};
