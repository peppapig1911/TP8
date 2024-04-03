#include <iostream>
using namespace std;

class Plateau {
    protected:

        int nbligne;
        int nbcolonne;
        int nbparanimal;
        typedef char plateau[100][100]; //on fixe une taille maximale pour le plateau

    public:

        //constructeur 
        Plateau(int lignes, int colonnes, int Nb_par_animal) : nbligne(lignes), nbcolonne(colonnes), nbparanimal(Nb_par_animal){      
        }

        //fonction pour afficher le plateau
        void AfficherPlateau(plateau plateau){
            for (int i=0; i<nbligne; ++i) {


              
                for (int j=0; j<nbcolonne; ++j) {
                    cout << "|"<<"  "; // Remplacer par une représentation vide pour chaque cellule
                }
                cout << "|" << endl;


              
                for (int j=0; j<nbcolonne; ++j) {
                    cout << "|---"; // Ligne de séparation entre les lignes
                }
                cout << "|" << endl;
            }
        }
};