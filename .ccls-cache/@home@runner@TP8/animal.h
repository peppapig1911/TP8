#include <iostream>
#include "attaque.h"
#pragma once 
using namespace std;


//Définition de la classe Animal 
class Animal{

  protected: 
    string nom;
    int x,y;
    int maxX,maxY;
    bool vivant;
    Attaque typeAttaque;

  public:

    Animal(int maxX, int maxY);
    Animal(int maxX, int maxY, int x, int y);
    virtual ~Animal() {}
  
    string getNom() const;
    int getX() const;
    int getY() const;
    bool getVivant() const;
    Attaque getAttaque() const;

    void setVivant(bool v);
    bool Attaque(Animal &a);

    virtual void setAttaque() = 0; //fonction virtuelle pure
    virtual void deplace(int maxX, int maxY) = 0; //fonction virtuelle pure
};
