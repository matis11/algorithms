/////////////////////////////////////////////////
////////////////// Ob¿artuchy ////////////////////
/////////////////////////////////////////////////
/////////////// Mateusz Bartos //////////////////
///////////// geekbajt@gmail.com ////////////////
/////////////////////////////////////////////////


#include<iostream>

using namespace std;


int main(){
    int t,n,m;
    int time;
    int box = 0;
    int boxes = 0;
    int ciastka = 0;

    cin>>t;

    for(int i = 0; i<t; i++){
        cin>>n>>m;
        box = 0;
        for(int j=0; j<n; j++){
            time = 0;
            cin>>time;
            ciastka = 0;
            if((86400 % time) != 0){
                ciastka = (86400 / time);
            }else{
                ciastka = 86400 / time;
            }//if
            box += ciastka;
        }//for
        if((box % m) != 0){
            cout<<(box / m) +1<<"\n";
        }else{
            cout<<box / m<<"\n";
        }//if
    }//for

    return 0;
}
