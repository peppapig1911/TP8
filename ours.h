#include "animal.h"
#include <ctime>

class Ours: public Animal{

  public :
      //l'ours n'attaque qu'avec la feuille
      void setAttaque(){
        typeAttaque=Attaque(1);
      };


      void deplace(int maxX, int maxY) {
          // Initialisation du générateur de nombres aléatoires
          srand(time(NULL));
  
          // Déplacement aléatoire de l'abscisse
          const int abscisse[4]={-2,-1,1,2};
              int indice1=rand()%4;
              x=x+abscisse[indice1]; //nouvelles coordonnées X du lion
  
          // Déplacement aléatoire de l'ordonnée
          const int ordonnee[4] = {-2,-1,1,2};
              int indice2=rand()%4;
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

