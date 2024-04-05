#include "animal.h"
#include "lion.h"
#include "loup.h"
#include "ours.h"
#include "pierre.h"
#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

int maxX = 10; // initialise la variable statique max_x
int maxY = 10; // initialise la variable statique max_y

// prototypes
void drawBoard(vector<Animal*> animals);
void play(vector<Animal*> animals);
vector<Animal*> createAnimals(int maxX, int maxY);

// plateau 
void drawBoard(vector<Animal*> animals) {
    bool animal_in_cell = false;
    cout << " |";
    for(int i = 0; i < maxX; i++) {
        cout << "----|";
    }
    cout << endl;
    for(int i = 0; i < maxY; i++) {
        cout << " |";
        for(int j = 0; j < maxX; j++) {
            if(animals.size() > 0) {
                for(const auto &animal : animals) {
                    if(animal->getX() == j && animal->getY() == i) {
                        cout << " " << animal->getNom()[0];
                        animal_in_cell = true;
                        break;
                    }
                }
            }
            if(animal_in_cell) {
                cout << "  |";
                animal_in_cell = false;
            } else {
                cout << "    |";     
            }
        }
        cout << endl;
        cout << " |";

        for(int i = 0; i < maxX; i++) {
            cout << "----|";
        }
        cout << endl;
    }
}

/**
 * @brief Déplace les animaux et vérifie s'il y a un combat entre deux animaux
 * 
 * @param animals 
 */
void play(vector<Animal*> animals) {
    for(const auto &animal : animals) {
        if(animal->getNom() != "Ours") {
            animal->deplace(maxX, maxY);
        }
    }
    for(int i = 0; i < animals.size(); i++) {
        for(int j = i + 1; j < animals.size(); j++) {
            if(animals[i]->getX() == animals[j]->getX() && animals[i]->getY() == animals[j]->getY() && animals[i]->getVivant() && animals[j]->getVivant()) {
                if(animals[i]->Attaque(*animals[j])) {
                    cout << animals[i]->getNom() << " a gagné" << endl;
                    animals[j]->setVivant(false);
                } else {
                    cout << animals[j]->getNom() << " a gagné" << endl;
                    animals[i]->setVivant(false);
                }
                cout << "\n";
            }
        }
    }
}

/**
 * @brief Crée un objet Animal
 * @details Le plateau est peuplé à 25 % avec le même nombre de lions, rochers, loups et ours distribués aléatoirement sur le plateau. Il ne peut y avoir qu'un seul animal par cellule.
 * 
 * @param maxX 
 * @param maxY 
 * @return vector<Animal*> 
 */
vector<Animal*> createAnimals(int maxX, int maxY) {
    vector<Animal*> animals;

     //calcul du nombre d’animaux à mettre par type
    int num_animaux = maxX * maxY * 0.25;
    int num_lions = num_animaux / 4;
    int num_pierre = num_animaux / 4;
    int num_loups = num_animaux / 4;
    int num_ours = num_animaux / 4;
    int x, y;

    for(int i = 0; i < num_lions; i++) {
        x = rand() % maxX;
        y = rand() % maxY;
        for(const auto &animal : animals) {
            if(animal->getX() == x && animal->getY() == y) {
                x = rand() % maxX;
                y = rand() % maxY;
            }
        }
        animals.push_back(new Lion(x, y));
    }
    for(int i = 0; i < num_pierre; i++) {
        x = rand() % maxX;
        y = rand() % maxY;
        for(const auto &animal : animals) {
            if(animal->getX() == x && animal->getY() == y) {
                x = rand() % maxX;
                y = rand() % maxY;
            }
        }
        animals.push_back(new Pierre(x, y));
    }
    for(int i = 0; i < num_loups; i++) {
        x = rand() % maxX;
        y = rand() % maxY;
        for(const auto &animal : animals) {
            if(animal->getX() == x && animal->getY() == y) {
                x = rand() % maxX;
                y = rand() % maxY;
            }
        }
        animals.push_back(new Loup(x, y));
    }
    for(int i = 0; i < num_ours; i++) {
        x = rand() % maxX;
        y = rand() % maxY;
        for(const auto &animal : animals) {
            if(animal->getX() == x && animal->getY() == y) {
                x = rand() % maxX;
                y = rand() % maxY;
            }
        }
        animals.push_back(new Ours(x, y));
    }
    return animals;
}

int main() {
    srand(time(NULL));
    // Demander à l'utilisateur la taille du plateau (elle doit être d'au moins 4x4, sinon le programme devrait redemander)
    cout << "Entrer le nombre de colonnes: " << endl;
    cin >> maxY;
    cout << "Entrer le nombre de lignes: " << endl;
    cin >> maxX;

    // Créer des animaux
    vector<Animal*> animals = createAnimals(maxX, maxY);
    drawBoard(animals);
    cout << "Appuyer sur entrer pour continuer \n" << endl;
    cin.ignore();
    int turns_nb = 0;
    bool draw = false;
    while(animals.size() > 1) {
        cout << "Appuyer sur entrer pour continuer \n" << endl;
        cin.ignore();
        turns_nb++;
        play(animals);
        // Supprimer les animaux morts
        for(int i = 0; i < animals.size(); i++) {
            if(!animals[i]->getVivant()) {
                cout << "Le " << animals[i]->getNom() << " aux coordonnées (" << animals[i]->getX() << "," << animals[i]->getY() << ") est mort" << endl;
                delete animals[i]; // Libérer la mémoire allouée pour l'animal mort
                animals.erase(animals.begin() + i);
            }
        }
        drawBoard(animals);
        // Si cela fait plus de 100 tours, la partie est un match nul
        if (turns_nb > 100) {
            draw = true;
            break;
        }
    }
    if(!draw) {
        cout << animals[0]->getNom() << " a gagné"  << endl;
    }
    // Libérer la mémoire allouée pour les animaux restants
    for (auto animal : animals) {
        delete animal;
    }
    return 0;
}