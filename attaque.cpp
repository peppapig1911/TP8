#include "attaque.h"

Attaque::Attaque(){
    this->type = rand()%3;
}


Attaque::Attaque(int a){
    this->type = a;
}


int Attaque::getAttaque() const{
    return this->type;
}


bool Attaque::resoudreAttaque(Attaque &a) const{
    if(this->type == 0 && a.getAttaque() == 2){//rock wins against scissors
        return true;
    }else if(this->type == 1 && a.getAttaque() == 0){//paper wins against rock
        return true;
    }else if(this->type == 2 && a.getAttaque() == 1){//scissors wins against paper
        return true;
    }else if(this->type == a.getAttaque()){//draw so random result (true or false)
        return rand() % 2;
    }else if(this->type == 2 && a.getAttaque() == 0){//scissors loses against rock
        return false;
    }else if(this->type == 0 && a.getAttaque() == 1){//rock loses against paper
        return false;
    }else if(this->type == 1 && a.getAttaque() == 2){//paper loses against scissors
        return false;
    }
    return false;
}


string Attaque::getNomAttaque() const{
    if(this->type == 0){
        return "Rock";
    }else if(this->type == 1){
        return "Paper";
    }else{
        return "Scissors";
    }
}