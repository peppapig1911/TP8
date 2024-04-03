#include "animal.h"

class Lion{

  private :
    int type; //0:pierre, 1:feuille, 2:ciseaux

  public :
    Attaque(); //attaque random
    Attaque(int a); //attaque spécifique
    int getAttaque() const;
    bool resoudreAttaque(Attaque &a) const;
    string getNomAttaque();
};
