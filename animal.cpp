#include <iostream>
#include "animal.h"
using namespace std;

Animal::Animal(int x, int y){
    this->x=x;
    this->y=y;
}

Animal::Animal(int maxX, int maxY, int x, int y){
  this->maxX = maxX;
  this->maxY = maxY;
  this->x = x;
  this->y = y;
}

string Animal::getNom() const{
  return this->nom;
}

int Animal::getX() const{
  return this->x;
}

int Animal::getY() const{
  return this->y;
}

bool Animal::getVivant() const{
  return this->vivant;
}

Attaque Animal::getAttaque() const{
  return this->typeAttaque;
}

void Animal::setVivant(bool v){
  this->vivant = v;
}

bool Animal::Attaque(Animal &a){

    this->setAttaque();
    a.setAttaque();

    //combat
    class Attaque attaque1 = this->getAttaque();
    class Attaque attaque2 = a.getAttaque();
  
    cout << "The " << this->getNom() << " attacks with " << attaque1.getNomAttaque() << endl;
    cout << "The " << a.getNom() << " defends with " << attaque2.getNomAttaque() << endl;

    return attaque1.resoudreAttaque(attaque2); 

}