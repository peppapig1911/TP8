#include "animal.h"
#include "lion.h"
#include <stdlib.h>
#include <vector>
using namespace std; 


Lion::Lion(int maxX, int maxY, int x, int y): Animal(maxX, maxY, x, y){
    this->nom = "Lion";
}

Lion::Lion(int x, int y): Animal(x, y){
    this->nom = "Lion";
}



void Lion::setAttaque(){
      
      int attaque=rand()%2+1; //soit feuille soit ciseaux générer de façon random

      //affectation 1 ou 2 selon l'attaque
      if(attaque==1){
        this->typeAttaque=1;
      }
      else{
        this->typeAttaque=2;
      }
};


void Lion::deplace(int maxX, int maxY) {
      
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

