/////////////////////////////////////////////////
//////////// Parzyste nieparzyste ///////////////
/////////////////////////////////////////////////
/////////////// Mateusz Bartos //////////////////
///////////// geekbajt@gmail.com ////////////////
/////////////////////////////////////////////////


#include<iostream>

using namespace std;


int main()
{
    int tab[100];
    int lenght, n;

    cin>>lenght;

    for(int i=0;i<lenght;i++){
        cin>>n;

        for(int j=1;j<=n;j++){
            cin>>tab[j];
            }

        for(int j=1;j<=n;j++){
            if((j%2) == 0){
            cout<<tab[j]<<"\n";
            }

        }
        for(int j=1;j<=n;j++){
            if((j%2) != 0){
            cout<<tab[j]<<"\n";
        }

        }
    }
    return 0;
}
