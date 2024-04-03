#include <iostream>
using namespace std;

class Plateau {
    protected:

        int nbligne;
        int nbcolonne;
        typedef char plateau[100][100]; //on fixe une taille maximale pour le plateau
    
    public:

        //constructeur 
        Plateau(int lignes, int colonnes) : nbligne(lignes), nbcolonne(colonnes){      
        }
    
        //fonction pour afficher le plateau
        void AfficherPlateau(plateau plateau){
            for (int i=0; i<nbligne; ++i) {
                for (int j=0; j<nbcolonne; ++j) {
                    cout << "|   "; // Remplacer par une représentation vide pour chaque cellule
                }
                cout << "|" << endl;
    
                for (int j=0; j<nbcolonne; ++j) {
                    cout << "|---"; // Ligne de séparation entre les lignes
                }
                cout << "|" << endl;
            }
        }
};


int main() {
  
    int lignes, colonnes;
    cout<<"Entrez le nombre de lignes : ";
    cin>>lignes;
    cout<<"Entrez le nombre de colonnes : ";
    cin>>colonnes;

    Plateau plateau(lignes, colonnes);
    plateau.AfficherPlateau({});
    return 0;
  
}