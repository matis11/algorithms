#include<iostream>
#include<string>

using namespace std;

int main(){
    int i = 0;
    string x;
    while(cin>>x){
        for(int j = (x.length()-1); j >= 0 ; j--){
            cout<<x[j];
        }//for
        cout<<"\n";
    }//while
    return 0;
}
