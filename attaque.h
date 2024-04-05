#include <iostream>
using namespace std;

//Définition de la classe Attaque 

class Attaque{

  private :
    int type; //0:pierre, 1:feuille, 2:ciseaux

  public :
    Attaque(); 
    Attaque(int a); 

    int getAttaque() const;

    bool resoudreAttaque(Attaque &a) const;

    string getNomAttaque() const;
};
