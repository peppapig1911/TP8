#include "animal.h"
#include <iostream>

class Loup: public Animal{

  public :

    Loup(int x, int y);
    Loup(int maxX, int maxY, int x, int y);

    void setAttaque();
    void deplace(int maxX, int maxY);
    
};

