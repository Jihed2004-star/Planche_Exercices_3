#include <iostream>
#include <array>
using namespace std;


void remplir(array<int,N>tab){
    for(int i=0;i<N;i++){
        cout<<"Donner la valuer "<<i<<endl;
        cin>>tab[i];
    }
}
void recherche(array<int,N>tab,int V){
    for(int i=0;i<N;i++){
        if(V==tab[i]){
            cout<<V<<" se trouve dans le tableau a la position "<<i<<endl;
            break;
        }
    }
    cout<<V<<" ne se trouve pas dans le tableau "<<endl;

}
int main()
{
    N=4;
    array<int,N>tab;
    remplir(tab);
    recherche(tab,4);
    return 0;
}
