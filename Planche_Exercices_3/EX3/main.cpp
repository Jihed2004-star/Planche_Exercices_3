#include <iostream>
#include <vector>
using namespace std;

int produitScalaire(const vector<int>& U, const vector<int>& V) {
    int produit = 0;
    for (size_t i = 0; i < U.size(); i++) {
        produit += U[i] * V[i];
    }
    return produit;
}

int main() {
    int n;
    cout << "Entrez la dimension des vecteurs : ";
    cin >> n;

    vector<int> U(n);
    vector<int> V(n);

    cout << "Entrez les éléments du vecteur U : ";
    for (int i = 0; i < n; i++) {
        cin >> U[i];
    }

    cout << "Entrez les éléments du vecteur V : ";
    for (int i = 0; i < n; i++) {
        cin >> V[i];
    }

    int resultat = produitScalaire(U, V);
    cout << "Le produit scalaire de U et V est : " << resultat << endl;

    return 0;
}
