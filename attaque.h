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
    bool resoudreAttaque(Attaque &a) const;
    string getNomAttaque();
};
