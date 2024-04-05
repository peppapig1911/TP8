#include "animal.h"
#include <stdlib.h>
using namespace std; 

class Lion : public Animal{

  public :

    Lion(int x, int y);
    Lion(int maxX, int maxY, int x, int y);

    void setAttaque();
    void deplace(int maxX, int maxY);
      
};

