#include <iostream>
#include "plateau.h"
#include <ctime>
using namespace std;


int main() {

    srand(time(NULL));
  
    int lignes, colonnes;
    cout<<"Entrez le nombre de lignes : ";
    cin>>lignes;
    cout<<"Entrez le nombre de colonnes : ";
    cin>>colonnes;

    Plateau plateau(lignes, colonnes);
    plateau.AfficherPlateau({});
    return 0;
  
}