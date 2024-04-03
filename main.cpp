#include <iostream>
#include "plateau.h"
#include <ctime>
using namespace std;


int main() {

    srand(time(NULL));

    //Définition des dimensions du plateau
    int lignes, colonnes;
    cout<<"Entrez le nombre de lignes : ";
    cin>>lignes;
    cout<<"Entrez le nombre de colonnes : ";
    cin>>colonnes;

    //calcul de 25% du nombre de cases pour avoir le nombre d'animaux à mettre
    int Nb_animal_initial= 0.25*lignes*colonnes;

    //calcul du nombre d'animal par type à mettre sur le plateau
    int Nb_type_animal = 2;
    int Nb_par_animal = int(Nb_animal_initial/Nb_type_animal);

    //initiation du plateau
  
    Plateau plateau(lignes, colonnes, Nb_par_animal);
    plateau.AfficherPlateau({});
    return 0;
  
}