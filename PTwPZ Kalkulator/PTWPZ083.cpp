/////////////////////////////////////
/////////////// PTWPZ083 ////////////
//////////// Mateusz Bartos /////////
////////// geekbajt@gmail.com ///////
// http://mbartos.lo3.edu.pl/site/ //
//////////////// 2012 ///////////////
/////////////////////////////////////

#include<iostream>
#include<string>

using namespace std;


int chartoint(char chr){
    int x = chr;
    if(x == 48)return 0;
    if(x == 49)return 1;
    if(x == 50)return 2;
    if(x == 51)return 3;
    if(x == 52)return 4;
    if(x == 53)return 5;
    if(x == 54)return 6;
    if(x == 55)return 7;
    if(x == 56)return 8;
    if(x == 57)return 9;
}

int main(){
	int t;
	cin>>t;
	for(int i = 0 ; i < t ; i++)
	{
	    int wynik = 0;
	    int liczba = 0;
	    char znak;
        string str;

        cin>>str;

        wynik = chartoint(str[0]);
        bool dodawanie;

        for(int j = 1 ; j < str.length() ; j++)
        {
            int x = str[j];
            if(x == 43)
            {
                dodawanie = true;
                continue;
            }
            if(x == 45)
            {
                dodawanie = false;
                continue;
            }

            liczba = chartoint(x);
            if(dodawanie)wynik+=liczba;
            else wynik -= liczba;

        }
        cout<<wynik<<"\n"   ;
	}
	return 0;
}
