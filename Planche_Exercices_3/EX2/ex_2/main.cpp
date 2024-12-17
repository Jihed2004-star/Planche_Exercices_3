#include <iostream>
#include <array>
using namespace std;

const int N = 4;

void remplir(array<int, N>& tab) {
    for (int i = 0; i < N; i++) {
        cout << "Donner la valeur " << i << ": ";
        cin >> tab[i];
    }
}

void recherche(const array<int, N>& tab, int V) {
    bool trouve = false;
    for (int i = 0; i < N; i++) {
        if (V == tab[i]) {
            cout << V << " se trouve dans le tableau à la position " << i << endl;
            trouve = true;
            break;
        }
    }
    if (!trouve) {
        cout << V << " ne se trouve pas dans le tableau." << endl;
    }
}

int main() {
    array<int, N> tab;
    remplir(tab);
    recherche(tab, 4);
    return 0;
}
