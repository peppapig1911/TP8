#include "animal.h"
#include "plateau.h"
#include <vector>

class Loup: public Animal{

  public :

    void setAttaque(){
      int attaque=rand()%4+1; //soit feuille papier ou ciseaux générer de façon random
    
      //affectation 1,2 ou 3 selon l'attaque
      if(attaque==1){
        typeAttaque=Attaque(1);
      }
      else if(attaque==2){
        typeAttaque=Attaque(2);
      }
      else {
        typeAttaque=Attaque(3);
      }
    }


    void deplace(int maxX, int maxY,int x, int y) {
    
        // Initialisation du générateur de nombres aléatoires
        srand(time(NULL));
    
        // Déplacement aléatoire de l'abscisse
         vector<int> abscisse(maxX,1);
            int indice1=rand()%(maxX);
            x=x+abscisse[indice1];
    
        // Déplacement aléatoire de l'ordonnée
        vector<int> ordonnee(maxY,1);
            int indice2=rand()%(maxX);
            y=y+ordonnee[indice2];
    
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

