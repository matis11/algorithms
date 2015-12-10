#include <iostream>

using namespace std;

int tab[1001][3];

int main(){
    int t;
    cin>>t;

    for(int i = 0; i < t; i++){
        int x,y,z;
        cin>>x>>y>>z;
        tab[i][0] = x;
        tab[i][1] = y;
        tab[i][2] = z;
    }//for



    return 0;
}
