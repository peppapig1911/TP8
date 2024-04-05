#include "ours.h"


Ours::Ours(int maxX, int maxY, int x, int y): Animal(maxX, maxY, x, y){
    this->nom = "Ours";
}


Ours::Ours(int x, int y): Animal(x, y){
    this->nom = "Ours";
}




void Ours::setAttaque(){
    this->typeAttaque=1;
};


void Ours::deplace(int maxX, int maxY) {
    // Initialisation du générateur de nombres aléatoires
    srand(time(NULL));

    // Déplacement aléatoire de l'abscisse
    const int abscisse[4]={-2,-1,1,2};
        int indice1=rand()%4;
        this->x=this->x+abscisse[indice1]; //nouvelles coordonnées X du lion

    // Déplacement aléatoire de l'ordonnée
    const int ordonnee[4] = {-2,-1,1,2};
        int indice2=rand()%4;
        this->y=this->y + ordonnee[indice2];//nouvelles coordonnées Y du lion

    //cas débodement

      if (this->x < 0) {
        this->x = maxX + x;
      }
      else if (this->x >= maxX) {
        this->x = -1 + x;
      }
      if (this->y < 0) {
        this->y = maxY + y;
      }
      else if (this->y >= maxY) {
        this->y = -1 + y;
      }
}