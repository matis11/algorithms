/////////////////////////////////////////////////
//////////////// Zachlannosc ////////////////////
/////////////////////////////////////////////////
/////////////// Gdzie ta pizza? /////////////////
//////////////////// 2012 ///////////////////////
/////////////////////////////////////////////////

#include<iostream>
#include<fstream>

using namespace std;

fstream plik;
bool good();
bool is_open();

int main(){
    ios_base::sync_with_stdio(0);
    plik.open("anagram.txt", ios::in | ios::out );
    cout<<"Hello world!";
    if( plik.good() == true )
    {
        cout<<"Uzyskano dostep do pliku!"<<"\n";
        //tu operacje na pliku
    }else
        std::cout<<"Dostep do pliku zostal zabroniony!"<<"\n";
    return 0;
}
