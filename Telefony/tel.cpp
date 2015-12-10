/////////////////////////////////////
/////////////// Telefony ////////////
//////////// Mateusz Bartos /////////
////////// geekbajt@gmail.com ///////
// http://mbartos.lo3.edu.pl/site/ //
//////////////// 2012 ///////////////
/////////////////////////////////////

#include<iostream>
#include<string>

using namespace std;

int main(){
    int tab[100];
    tab[65] = 2;
    tab[66] = 2;
    tab[67] = 2;
    tab[68] = 3;
    tab[69] = 3;
    tab[70] = 3;
    tab[71] = 4;
    tab[72] = 4;
    tab[73] = 4;
    tab[74] = 5;
    tab[75] = 5;
    tab[76] = 5;
    tab[77] = 6;
    tab[78] = 6;
    tab[79] = 6;
    tab[80] = 7;
    tab[81] = 7;
    tab[82] = 7;
    tab[83] = 7;
    tab[84] = 8;
    tab[85] = 8;
    tab[86] = 8;
    tab[87] = 9;
    tab[88] = 9;
    tab[89] = 9;
    tab[90] = 9;

    int t;
    cin>>t;

    for(int i = 0 ; i < t ; i++)
    {
        string str;
        cin>>str;
        for(int j = 0 ; j < str.length() ; j++){
            cout<<tab[str[j]];
        }
        cout<<"\n";
    }

    return 0;
}
