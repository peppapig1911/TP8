#include <iostream>
#include <vector>

using namespace std;

// Fonction pour afficher le plateau
void afficherPlateau(const vector<vector<char>>& plateau) {
    for (const auto& ligne : plateau) {
        for (char casePlateau : ligne) {
            cout << "|--" << casePlateau;
        }
        cout << "|" << endl;

        for (char casePlateau : ligne) {
          cout << "|  " << casePlateau;
        }
        cout << "|" << endl;
    }
}

int main() {
    // Taille du plateau
    int x, y;
    cout << "Entrez le nombre de lignes (x) : ";
    cin >> x;
    cout << "Entrez le nombre de colonnes (y) : ";
    cin >> y;

    // Initialisation du plateau
    vector<vector<char>> plateau(x, vector<char>(y, '-'));

    // Affichage du plateau initial
    cout << "Plateau initial :" << endl;
    afficherPlateau(plateau);

    return 0;
}
