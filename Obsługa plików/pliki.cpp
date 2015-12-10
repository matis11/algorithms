/////////////////////////////////////////////////
//////////////// Obsługa plików /////////////////
/////////////////////////////////////////////////
/////////////// Mateusz Bartos //////////////////
//////// http://mbartos.lo3.edu.pl/site /////////
//////////////////// 2012 ///////////////////////
/////////////////////////////////////////////////


#include<iostream>
#include<fstream>
#include<string>

using namespace std;


int main(){
    fstream plik;
    plik.open("test.txt", ios::in | ios::out);
    if(plik.good() == true){
        cout<<"Access granted"<<"\n";
        if(plik.is_open() == true){
            cout<<"File ready to save or read data"<<"\n";

            string string;

            for(int i=0;i<2;i++){
                plik>>string;
                cout<<string<<"\n";
            }

            /* Używanie funkcji getline()
            /////////////////////////////////////////////////////////////////////////////////////////////
            // Funkcja getline() umożliwia wczytywanie całej linii tekstu z pliku do std::string
            // Posługując się tą funkcją należy pamiętać, że wczyta ona cały tekst (do znaku "\n"),
            // aczykowliek można to zmienić używając ostatniego parametru.
            /////////////////////////////////////////////////////////////////////////////////////////////
            */
            getline(plik,string);
            getline(plik,string);
            cout<<string<<"\n";

            /* Zapisywanie danych do pliku
            /////////////////////////////////////////////////////////////////////////////////////////////
            // Zapisujemy za pomocą <<
            /////////////////////////////////////////////////////////////////////////////////////////////
            */
            string = "Hello programmer! \n";
            plik<<string;

            getline(plik,string);
            cout<<string<<"\n";

            plik.close();
        }
    }

    return 0;
}
