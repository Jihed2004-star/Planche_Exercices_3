#include <iostream>
#include <vector>

using namespace std;

void remplir(vector<int>&tab,int t){
    int a;
    for (int i=0;i<t;i++){
        cout<<"donner la "<< i+1 <<" valeur :"<<endl;
        cin>>a;
        tab.push_back(a);
    }
}
int nbp(vector<int>tab){
    int n=0;
    for(int i:tab){
        if ( i>=0 )
            n=n+1;
    }
    return n;
    }

int main()
{
   vector<int> tab;
   remplir(tab,3);
   cout<<nbp(tab);



    return 0;
}
