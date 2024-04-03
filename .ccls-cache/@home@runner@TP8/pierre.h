#include "animal.h"

class Pierre: public Animal{

  public :

    //la pierre n'attaque qu'avec pierre 
    void setAttaque(){
      typeAttaque=Attaque(0);
    };


    void deplace(int maxX, int maxY); //non défini car la pierre ne se déplace pas 
};
