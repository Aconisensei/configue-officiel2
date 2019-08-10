/*
*    Format:
*        3: STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*/
class CfgSpawnPoints {

    class Altis {
        class Civilian {
			
            class Kavala {
                displayName = "Centre ville de Kavala";
                spawnMarker = "civ_kavala";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "!license_civ_rebel";
            };

            class Athira {
                displayName = "Centre ville de Athira";
                spawnMarker = "civ_athira";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };

            class Pyrgos {
                displayName = "Centre ville de Pyrgos";
                spawnMarker = "civ_pyrgos";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };

            class Sofia {
                displayName = "Ville rebelle de Sofia";
                spawnMarker = "civ_sofia";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "license_civ_rebel";
            };

        };

        class Cop {
			
            class Kavala {
                displayName = "Kavala QG";
                spawnMarker = "kavala_gendarme";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };
			
            class KDouane {
                displayName = "Douane de Kavala";
                spawnMarker = "kavala_douane";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };
			
            class NDouane {
                displayName = "Douane du Nord";
                spawnMarker = "douane_nord";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };
			
            class SDouane {
                displayName = "Douane du sud";
                spawnMarker = "douane_sud";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };
			
            class Aviation {
                displayName = "Aviation Militaire";
                spawnMarker = "aviation";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };
			
            class Militaire {
                displayName = "Base Militaire";
                spawnMarker = "soldat";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };
			
            class Pyrgos {
                displayName = "Pyrgos QG";
                spawnMarker = "pyrgos_gendarme";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };
			

        };

        class Medic {
            class Kavala {
                displayName = "Kavala";
                spawnMarker = "kavala_hopital";
                icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
                conditions = "";
            };

            class Athira {
               displayName = "Athira ";
                spawnMarker = "athira_medical";
                icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
                conditions = "";
            };

            class Pyrgos {
                displayName = "Pyrgos";
                spawnMarker = "pyrgos_hopital";
                icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
                conditions = "";
            };
        };
    };


};
