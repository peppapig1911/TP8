#include "animal.h"

class Ours: public Animal{

  public :

      Ours(int x, int y);
      Ours(int maxX, int maxY, int x, int y);

      //l'ours n'attaque qu'avec la feuille
      void setAttaque();
      void deplace(int maxX, int maxY);

};

