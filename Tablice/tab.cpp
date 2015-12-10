#include<iostream>

using namespace std;

int main(){
    int i = 0;
    int x;
    int tab[1000];
    while(cin>>x){
        tab[i]=x;
        i++;
    }//while
    for(int j = i-1; j >= 0 ; j--){
        cout<<tab[j]<<" ";
    }//for
    cout<<"\n";
    return 0;
}
