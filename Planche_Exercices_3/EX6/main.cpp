#include <iostream>
#include "tableaux.h"

using namespace std;

int main() {
    vector<Ville> villes;

    remplirVilles(villes);
    cout << "\nListe des villes :\n";
    afficherVilles(villes);

    trierVilles(villes);
    cout << "\nListe des villes triées :\n";
    afficherVilles(villes);

    string nomRecherche;
    cout << "\nEntrez le nom de la ville à rechercher : ";
    cin >> nomRecherche;

    Ville* villeTrouvee = rechercherVille(villes, nomRecherche);
    if (villeTrouvee) {
        cout << "Position de " << villeTrouvee->nom << " : "
             << "Longitude: " << villeTrouvee->longitude << ", "
             << "Latitude: " << villeTrouvee->latitude << endl;
    } else {
        cout << "Ville non trouvée." << endl;
    }

    return 0;
}
