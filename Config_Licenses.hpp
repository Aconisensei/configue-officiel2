/*
*    class:
*        variable = Variable Name
*        displayName = License Name
*        price = License Price
*        illegal = Illegal License
*        side = side indicator
conditions = "!license_civ_clandestin";
*/


class Licenses {
	
	
	
		//menu des licences travail
class LicensesShops {
	
	class dmv {
		name = "STR_Shops_DMV";
		side = "civ";
        conditions = "";
        items[] = { "ingenieur", "facteur", "entreprise", "bucheron", "dde", "garagiste", "diamond"};
		};
		
	};
	
	
	class bountyH {  
        variable = "bountyH";  
        displayName = "STR_License_bountyH";  
        price = 100000;  
        illegal = false;  
        side = "civ";  
    };
	
	// Licence ressource aconis
    class charbon {
        variable = "charbon";
        displayName = "STR_License_charbon";
        price = 75000;
        illegal = false;
        side = "civ";
    };
	
    class ruby {
        variable = "ruby";
        displayName = "STR_License_ruby";
        price = 75000;
        illegal = false;
        side = "civ";
    };

    class zaphir {
        variable = "zaphir";
        displayName = "STR_License_zaphir";
        price = 75000;
        illegal = false;
        side = "civ";
    };

    class emer {
        variable = "emer";
        displayName = "STR_License_emer";
        price = 75000;
        illegal = false;
        side = "civ";
    };

    class biere {
        variable = "biere";
        displayName = "STR_License_biere";
        price = 75000;
        illegal = false;
        side = "civ";
    };
	

	
							//licence de facteur pour acceder au DEPOT MISSION
	class ingenieur {
        variable = "ingenieur";
        displayName = "STR_License_Ingenieur";
        price = 50000;
        illegal = false;
        side = "civ";
    };
	
						//licence de facteur pour acceder au DEPOT MISSION
	class facteur {
        variable = "facteur";
        displayName = "STR_License_Facteur";
        price = 50000;
        illegal = false;
        side = "civ";
    };
	
					//licence pour acceder au metier de bucheron
	class bucheron {
        variable = "bucheron";
        displayName = "STR_License_Bucheron";
        price = 50000;
        illegal = false;
        side = "civ";
    };
	
				//licence entreprise pour acceder a la creation de société ingame
	class entreprise {
        variable = "entreprise";
        displayName = "STR_License_Entreprise";
        price = 50000;
        illegal = false;
        side = "civ";
    };
	
	
			//licence de garagiste metier reparation, peinture a voir ensuite pour ajouter plaque immatriculation et controle technique
	class dde {
        variable = "dde";
        displayName = "STR_License_Dde";
        price = 50000;
        illegal = false;
        side = "civ";
    };
	
	
		//licence de garagiste metier reparation, peinture a voir ensuite pour ajouter plaque immatriculation et controle technique
	class garagiste {
        variable = "garagiste";
        displayName = "STR_License_Garagiste";
        price = 50000;
        illegal = false;
        side = "civ";
    };
	
	
		//licence de clandestin a donner une fois presentation forum faite 
	class clandestin {
        variable = "clandestin";
        displayName = "STR_License_Clandestin";
        price = 10000000;
        illegal = false;
        side = "civ";
    };
	
	
	//licence de chasse 
	class chasseur {
        variable = "chasseur";
        displayName = "STR_License_Chasseur";
        price = 1500;
        illegal = false;
        side = "civ";
    };
	
	
    //Civilian Licenses
    class driver {
        variable = "driver";
        displayName = "STR_License_Driver";
        price = 500;
        illegal = false;
        side = "civ";
    };

    class boat {
        variable = "boat";
        displayName = "STR_License_Boat";
        price = 1000;
        illegal = false;
        side = "civ";
    };

    class pilot {
        variable = "pilot";
        displayName = "STR_License_Pilot";
        price = 25000;
        illegal = false;
        side = "civ";
    };

    class trucking {
        variable = "trucking";
        displayName = "STR_License_Truck";
        price = 20000;
        illegal = false;
        side = "civ";
    };

    class gun {
        variable = "gun";
        displayName = "STR_License_Firearm";
        price = 10000;
        illegal = false;
        side = "civ";
    };

    class dive {
        variable = "dive";
        displayName = "STR_License_Diving";
        price = 2000;
        illegal = false;
        side = "civ";
    };

    class home {
        variable = "home";
        displayName = "STR_License_Home";
        price = 75000;
        illegal = false;
        side = "civ";
    };

    //Processing Licenses
    class oil {
        variable = "oil";
        displayName = "STR_License_Oil";
        price = 10000;
        illegal = false;
        side = "civ";
    };

    class diamond {
        variable = "diamond";
        displayName = "STR_License_Diamond";
        price = 35000;
        illegal = false;
        side = "civ";
    };

    class salt {
        variable = "salt";
        displayName = "STR_License_Salt";
        price = 12000;
        illegal = false;
        side = "civ";
    };

    class sand {
        variable = "sand";
        displayName = "STR_License_Sand";
        price = 14500;
        illegal = false;
        side = "civ";
    };

    class iron {
        variable = "iron";
        displayName = "STR_License_Iron";
        price = 9500;
        illegal = false;
        side = "civ";
    };

    class copper {
        variable = "copper";
        displayName = "STR_License_Copper";
        price = 8000;
        illegal = false;
        side = "civ";
    };

    class cement {
        variable = "cement";
        displayName = "STR_License_Cement";
        price = 6500;
        illegal = false;
        side = "civ";
    };

    class medmarijuana {
        variable = "medmarijuana";
        displayName = "STR_License_Medmarijuana";
        price = 15000;
        illegal = false;
        side = "civ";
    };

    //Illegal Licenses
    class cocaine {
        variable = "cocaine";
        displayName = "STR_License_Cocaine";
        price = 30000;
        illegal = true;
        side = "civ";
    };

    class heroin {
        variable = "heroin";
        displayName = "STR_License_Heroin";
        price = 25000;
        illegal = true;
        side = "civ";
    };

    class marijuana {
        variable = "marijuana";
        displayName = "STR_License_Marijuana";
        price = 19500;
        illegal = true;
        side = "civ";
    };

    class rebel {
        variable = "rebel";
        displayName = "STR_License_Rebel";
        price = 75000;
        illegal = true;
        side = "civ";
    };

    //Cop Licenses
    class cAir {
        variable = "cAir";
        displayName = "STR_License_Pilot";
        price = 15000;
        illegal = false;
        side = "cop";
    };

    class cg {
        variable = "cg";
        displayName = "STR_License_CG";
        price = 8000;
        illegal = false;
        side = "cop";
    };

    //Medic Licenses
    class mAir {
        variable = "mAir";
        displayName = "STR_License_Pilot";
        price = 15000;
        illegal = false;
        side = "med";
    };
};
