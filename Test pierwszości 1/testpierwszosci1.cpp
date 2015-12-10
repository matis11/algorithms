/////////////////////////////////////////////////
////////////////// Template /////////////////////
/////////////////////////////////////////////////
/////////////// Mateusz Bartos //////////////////
//////// http://mbartos.lo3.edu.pl/site /////////
//////////////////// 2012 ///////////////////////
/////////////////////////////////////////////////


#include<iostream>

using namespace std;

bool isPrime(int n) {
    if (n < 2){
        return false;
    }//if

    for (int i = 2; i*i <= n; i++){
        if(n%i == 0){
            return false;
        }//if
    }//for
    return true;
}


int main(){
    int t;
    cin>>t;

    for(int i = 0; i < t; i++){
        int n;
        cin>>n;
        if(isPrime(n))cout<<"TAK"<<"\n";
        else
        cout<<"NIE"<<"\n";
    }
    return 0;
}

