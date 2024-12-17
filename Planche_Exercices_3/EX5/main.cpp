#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;
/*
struct Ville {
    string nom;
    double longitude;
    double latitude;
};

void ajouterVille(vector<Ville>& villes, const string& nom, double longitude, double latitude) {
    villes.push_back({nom, longitude, latitude});
}

Ville* rechercherVille(const vector<Ville>& villes, const string& nom) {
    for (const auto& ville : villes) {
        if (ville.nom == nom) {
            return const_cast<Ville*>(&ville); // Retourne un pointeur vers la ville trouvee
        }
    }
    return nullptr; // Ville non trouvee
}

int main() {
    vector<Ville> villes;

    ajouterVille(villes, "Tunis", 10.1658, 36.8189);
    ajouterVille(villes, "Sfax", 10.7603, 34.7408);
    ajouterVille(villes, "Sousse", 10.6250, 35.8256);

    string nomRecherche;
    cout << "Entrez le nom de la ville à rechercher : ";
    cin >> nomRecherche;

    Ville* villeTrouvee = rechercherVille(villes, nomRecherche);
    if (villeTrouvee) {
        cout << "Position de " << villeTrouvee->nom << " : "
             << "Longitude: " << villeTrouvee->longitude << ", "
             << "Latitude: " << villeTrouvee->latitude << endl;
    } else {
        cout << "Ville non trouvee." << endl;
    }

    return 0;
}
*/
struct Ville {
    double longitude;
    double latitude;
};

int main() {
    unordered_map<string, Ville> villes;

    villes["Tunis"] = {10.1658, 36.8189};
    villes["Sfax"] = {10.7603, 34.7408};
    villes["Sousse"] = {10.6250, 35.8256};

    string nomRecherche;
    cout << "Entrez le nom de la ville à rechercher : ";
    cin >> nomRecherche;

    auto it = villes.find(nomRecherche);
    if (it != villes.end()) {
        cout << "Position de " << it->first << " : "
             << "Longitude: " << it->second.longitude << ", "
             << "Latitude: " << it->second.latitude << endl;
    } else {
        cout << "Ville non trouvée." << endl;
    }

    return 0;
}
