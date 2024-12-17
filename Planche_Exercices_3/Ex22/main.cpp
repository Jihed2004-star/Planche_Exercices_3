#include <iostream>
#include <array>
#include <string.h>
using namespace std;
void remplir(array<int,4>&tab){
    for(int i=0;i<4;i++){
        cout<<"Donner la valuer "<<i+1<<endl;
        cin>>tab[i];
    }
}
void recherche(array<int,4>tab,int V){
    int i=0;
    for(i=0;i<4;i++){
        if(tab[i]==V){
            cout<<V<<" se trouve dans le tableau a la position "<<i<<endl;
            goto o;
        }
    }
    //if(i==4)
    cout<<V<<" ne se trouve pas dans le tableau "<<endl;
    o:
    int b;
}
int main()
{
    int V=5;
    array<int,4>tab;
    remplir(tab);
    recherche(tab,V);
    return 0;
}
