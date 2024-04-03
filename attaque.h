#include <iostream>
#pragma once 
using namespace std;

//Définition de la classe Attaque 

class Attaque{

  private :
    int type; //0:pierre, 1:feuille, 2:ciseaux

  public :
    Attaque(); //attaque random
    Attaque(int a); //attaque spécifique
    int getAttaque() const;

    bool resoudreAttaque(Attaque &a) const{
      if (type==0 && a.type==1){      //la feuille de l'attaque a gagne 
        return true;
      }
      else if (type==1 && a.type==2){ //le ciseaux de l'attaque a gagne
        return true;
      }
      else if (type==2 && a.type==0){ //la pierre de l'attaque a gagne
        return true;
      }
      else{
        return false;
      }
    };

    string getNomAttaque();
};
