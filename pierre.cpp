#include "pierre.h"
using namespace std;



Pierre::Pierre(int maxX, int maxY, int x, int y): Animal(maxX, maxY, x, y){
    this->nom = "Pierre";
}

Pierre::Pierre(int x, int y): Animal(x, y){
    this->nom = "Pierre";
}

//la pierre n'attaque qu'avec pierre 
void Pierre::setAttaque(){
      this->typeAttaque=0;
}

void Pierre::deplace(int maxX, int maxY){
  //ne rien faire
}