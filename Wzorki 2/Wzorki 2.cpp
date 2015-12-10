/////////////////////////////////////////////////
////////////////// Wzorki 2 /////////////////////
/////////////////////////////////////////////////
/////////////// Mateusz Bartos //////////////////
///////////// geekbajt@gmail.com ////////////////
/////////////////////////////////////////////////


#include<iostream>

using namespace std;


int main(){

    int t,rzad,kolumna;

    cin>>t;

    for(int i=0;i<t;i++){
        cin>>rzad>>kolumna;

        for(int j=1;j<=rzad;j++){
            if((j==1)||(j==rzad)){
                for(int k=1;k<=kolumna;k++){
                    cout<<"*";
                }
            }else{
                for(int k=1;k<=kolumna;k++){
                    if((k==1) || (k == kolumna)){
                        cout<<"*";
                    }else{
                        cout<<".";
                    }
                }
            }
            cout<<"\n";
        }
    }
    return 0;

}
