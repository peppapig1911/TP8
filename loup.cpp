#include "loup.h"
#include <vector>



Loup::Loup(int maxX, int maxY, int x, int y): Animal(maxX, maxY, x, y){
    this->nom = "Loup";
}

Loup::Loup(int x, int y): Animal(x, y){
    this->nom = "Loup";
}




void Loup::setAttaque(){
  int attaque=rand()%3; //soit feuille papier ou ciseaux générer de façon random

  //affectation 1,2 ou 3 selon l'attaque
  if(attaque==0){
    this->typeAttaque=0;
  }
  else if(attaque==1){
    this->typeAttaque=1;
  }
  else {
    this->typeAttaque=2;
  }
}


void Loup::deplace(int maxX, int maxY) {

        int x = rand() % 2 == 0 ? 1 : -1;
        int y = rand() % 2 == 0 ? 1 : -1;
        this->x += x;
        this->y += y;

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