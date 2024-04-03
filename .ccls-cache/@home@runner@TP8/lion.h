#include "animal.h"
#include <stdlib.h>
#include <vector>
#include <ctime>
using namespace std; 

class Lion : public Animal{

  public :

    void setAttaque(){
      int attaque=rand()%3+1; //soit feuille soit ciseaux générer de façon random

      //affectation 1 ou 2 selon l'attaque
      if(attaque==1){
        typeAttaque=Attaque(1);
      }
      else{
        typeAttaque=Attaque(2);
      }
    }
      
    void deplace(int maxX, int maxY) {
        // Initialisation du générateur de nombres aléatoires
        srand(time(NULL));
    
        // Déplacement aléatoire de l'abscisse
        const int abscisse[2] = {-1, 1};
            int indice1=rand()%2;
            x=x+abscisse[indice1]; //nouvelles coordonnées X du lion
    
        // Déplacement aléatoire de l'ordonnée
        const int ordonnee[2]={-1, 1};
            int indice2=rand()%2;
            y=y+ordonnee[indice2];//nouvelles coordonnées Y du lion

        //cas débodement
        if (x<1) { //à droite
          x=maxX;
        }
        else if (y<1){ //en haut
          y=maxY;
        }
        else if (x>maxX){ //à gauche
         x=1;
        }
        else if (y>maxY){ //en bas
          y=1;
        }
    }
      
};

