/////////////////////////////////////////////////
///////////////// Palindromy ////////////////////
/////////////////////////////////////////////////
/////////////// Mateusz Bartos //////////////////
///////////// geekbajt@gmail.com ////////////////
/////////////////////////////////////////////////


#include<iostream>
#include<string.h>
#include<stdlib.h>
#include <sstream>

using namespace std;





bool palindrom(char *x);
bool dodawanie(char *y);
int iteracje = 0;
int size = 0;
int n = 1;
string str;
char *a=new char[n];

int main(){
    int t;
    cin>>t;

    for(int i = 1; i <= t; i++){
        string s;
        cin>>s;

        n =s.size()+1;
        a[s.size()]=0;
        memcpy(a,s.c_str(),s.size());

// CZÊŒÆ SPRAWDZAJ¥CA

        cout<<"Size of char array: "<<sizeof(a)<<" | "<<"Size of std::string :"<<s.size()<<"\n";

        for(int j = 0; j <= 9; j++){
            cout<<"a["<<j<<"] = "<<a[j]<<"\n";
        }
//*/
        cout<<"s.size() != 0"<<"\n";
        cout<<(s.size()% 2)<<"\n";

        size = s.size();
        if(palindrom(a) == true){
            cout<<"PALINDROM"<<"\n";
            cout<<"REAL OUTPUT"<<"\n";
            cout<<s<<" "<<iteracje<<"\n";
        }
        if(palindrom(a) == false){
            cout<<"NIE PALINDROM" << "\n";
            if(dodawanie(a) == true){
                cout<<"DODAWANIE PALINDROM"<<"\n";
            };
        }
    iteracje = 0;
    }//end of main loop
    return 0;
}

bool palindrom(char *x){

     if((size% 2) != 0){

            int i = 0;
            int j = (size-1);
            bool test = true;

            while(j != i && test == true){
                if(x[i] == x[j]){
                    i++;
                    j--;
                    test = true;
                }else{
                    test = false;
                    return false;
                }
            }

            if(test == true){
               return true;
            }
        }

        if((size% 2) == 0){
            int i = 0;
            int j = (size-1);
            bool test = true;

            while(j+1 != i && test == true){
                if(x[i] == x[j]){
                    i++;
                    j--;
                    test = true;
                }else{
                    test = false;
                    return false;
                }
            }

            if(test == true){
                return true;
            }
        }

}



bool dodawanie(char *y){
    bool lol;
    while(lol == false){
        if(palindrom(y) == false){
            lol = false;
            char* b = new char[size];

            for(int i = 0; i <= size - 1; i++){
                b[(size - i) -1] = y[i];
            }
            int liczba,liczba2,wynik;
            liczba = atoi(b);
            liczba2 = atoi(y);
            wynik = liczba + liczba2;

            stringstream strm1;
            string num;
            strm1 << wynik;
            strm1 >> num;

            size = (num.size()) -1;
            b[num.size()]=0;
            memcpy(b,num.c_str(),num.size());

            iteracje += 1;
            str = num;
            palindrom(b);

    }
    if(palindrom(y) == true){
        cout<<str<<" "<<iteracje<<"\n";
        lol = true;
        return true;
        break;
    }
}

}
