/////////////////////////////////////////////////
/////////////////// Spacje //////////////////////
/////////////////////////////////////////////////
/////////////// Mateusz Bartos //////////////////
///////////// geekbajt@gmail.com ////////////////
/////////////////////////////////////////////////


#include<iostream>

using namespace std;

void destroySpace(string& string, int place){
    cout<<"lol zmiania"<<"\n";
    for(int i = place ; i<(string.size())-1 ; i++){
        string[i] = string[i+1];
        string.size() = string.size() - 1;
    }
}

int main(){
    string myString;
    while(getline(cin,myString)){
        cout<<"lol start"<<"\n";
        for(int i = 0; i < myString.size();i++){
            if(myString[i] == ' '){
                cout<<"LOL FUNKCJA"<<"\n";
                destroySpace(myString,i);
            }
        }//for
        cout<<myString<<"\n";
        cin.sync();
    }//while
    return 0;
}
