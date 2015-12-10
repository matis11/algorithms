#include<iostream>
#include<string>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        string str;
        cin>>str;
        for(int j = 0; j < (str.length()/2) ; j++){
            cout<<str[j];
        }//for
        cout<<"\n";
    }//for
}
