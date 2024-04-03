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



//Définition de la classe Animal 
class Animal{

  protected: 
    string nom;
    int x;
    int y;
    bool vivant;
    Attaque typeAttaque;

  public:
    Animal(int maxX, int maxY);
    Animal(int maxX, int maxY, int a, int b);
    string getNom() const;
    int getX() const;
    int getY() const;
    bool getVivant() const;
    Attaque getAttaque() const;
    void setVivant(bool v);
    bool attaque(Animal &a);
    virtual void setAttaque() = 0; //fonction virtuelle pure
    virtual void deplace(int maxX, int maxY) = 0; //fonction virtuelle pure
};
