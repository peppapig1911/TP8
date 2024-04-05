#include "animal.h"

class Pierre: public Animal{

  public :


    Pierre(int x, int y);
    Pierre(int maxX, int maxY, int x, int y);

    //la pierre n'attaque qu'avec pierre 
    void setAttaque();
    void deplace(int maxX, int maxY); //non défini car la pierre ne se déplace pas 
};
