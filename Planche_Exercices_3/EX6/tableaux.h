#ifndef TABLEAUX_H
#define TABLEAUX_H

#include <iostream>
#include <algorithm> // Pour std::sort
#include <vector>
#include <string>

using namespace std;

struct Ville {
    string nom;
    double longitude;
    double latitude;
};

// Remplir un tableau de villes
void remplirVilles(vector<Ville>& villes) {
    int n;
    cout << "Entrez le nombre de villes : ";
    cin >> n;
    villes.resize(n);
    for (int i = 0; i < n; i++) {
        cout << "Entrez le nom de la ville : ";
        cin >> villes[i].nom;
        cout << "Entrez la longitude : ";
        cin >> villes[i].longitude;
        cout << "Entrez la latitude : ";
        cin >> villes[i].latitude;
    }
}

// Afficher les villes
void afficherVilles(const vector<Ville>& villes) {
    for (const auto& ville : villes) {
        cout << "Ville : " << ville.nom << ", Longitude : " << ville.longitude << ", Latitude : " << ville.latitude << endl;
    }
}

// Trier les villes par nom
void trierVilles(vector<Ville>& villes) {
    sort(villes.begin(), villes.end(), [](const Ville& a, const Ville& b) {
        return a.nom < b.nom;
    });
}

// Rechercher une ville par son nom
Ville* rechercherVille(vector<Ville>& villes, const string& nom) {
    for (auto& ville : villes) {
        if (ville.nom == nom) {
            return &ville;
        }
    }
    return nullptr;
}

#endif // TABLEAUX_H
