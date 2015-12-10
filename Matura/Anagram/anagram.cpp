/////////////////////////////////////////////////
/////////////////// Anagram /////////////////////
/////////////////////////////////////////////////
//////////////// Mateusz Bartos /////////////////
///////////////////// 2013 //////////////////////
/////////////////////////////////////////////////

#include<iostream>
#include<fstream>

using namespace std;

fstream plik;
fstream plik2;
fstream plik3;
string str;
string str2;

int main(){
    ios_base::sync_with_stdio(0);

    plik.open("anagram.txt", ios::in | ios::out );
    plik2.open("odp_4a.txt", ios::in | ios::out );
    plik3.open("odp_4b.txt", ios::in | ios::out );

    if( plik.good() == true && plik2.good() == true && plik3.good() == true){
        cout<<"Uzyskano dostep do pliku!"<<"\n";
        while(getline(plik,str)){
            int rozmiar = 0;
            bool same = false;
            bool anagram = true;
            string result = "";
            string first;
            while(str.length() != 0){
                int pos = 0;
                pos = str.find(' ');
                if(pos == -1){
                    pos = str.size();
                    str2 = str.substr(0,pos);
                    str = str.substr(pos,str.length());
                    result += str2;
                }else{
                    str2 = str.substr(0,pos);
                    str = str.substr(pos+1,str.length());
                    result += str2;
                    result += " ";
                }

//                Sprawdzanie czy w linijce znajduja sie wyrazy o takiej samej ilosci znakow
                if(rozmiar == 0){
//                  Pierwsze slowo w linijce
                    rozmiar = str2.length();
                    same = true;
                    first = str2;

                }else{
                    for(int i = 0; i < str2.length(); i++){
                        bool current_anagram = true;
                        for(int j = 0; j < first.length(); j++){
                            if(str2[i] == first[j]){
                                current_anagram = true;
                                break;
                            }else{
                                current_anagram = false;
                            }
                        }
                        if(current_anagram == false){
                            anagram = false;
                            break;
                        }
                    }
                    if(rozmiar == str2.length() && same){
                        same = true;
                    }else{
                        same = false;
                    }
                }
                cout<<str2<<" ";
            }
            result += "\n";
            if(same)
                plik2.write( & result[0], result.length() );
            if(anagram && same)
                plik3.write( & result[0], result.length() );
            cout<<"\n";
        }
        plik.close();
        plik2.close();
        plik3.close();
    }else
        std::cout<<"Dostep do pliku zostal zabroniony!"<<"\n";
    return 0;
}
