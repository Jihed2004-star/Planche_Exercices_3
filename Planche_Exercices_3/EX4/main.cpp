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

pair<int, int> mini_maxi(const array<int, N>& A) {
    int mini = A[0];
    int maxi = A[0];

    for (int i = 1; i < N; i++) {
        if (A[i] < mini) {
            mini = A[i];
        }
        if (A[i] > maxi) {
            maxi = A[i];
        }
    }

    return make_pair(mini, maxi);
}

int main() {
    array<int, N> tab;
    remplir(tab);

    pair<int, int> result = mini_maxi(tab);

    cout << "La plus petite valeur est : " << result.first << endl;
    cout << "La plus grande valeur est : " << result.second << endl;

    return 0;
}
