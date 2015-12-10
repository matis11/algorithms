/////////////////////////////////////////////////
////////////////// Template /////////////////////
/////////////////////////////////////////////////
/////////////// Mateusz Bartos //////////////////
//////// http://mbartos.lo3.edu.pl/site /////////
//////////////////// 2012 ///////////////////////
/////////////////////////////////////////////////


#include<iostream>

using namespace std;

long long int n = 1000000000;
bool isPrime[1000000001];

void sito() {
    for(long long int i = 0; i < n; i++){
        isPrime[i] = true;
    }
    isPrime[0] = isPrime[1] = false;
    for(long long int i = 2; i*i <= n; i++){
        if(isPrime[i]){
            int j= i * 2;
            while(j <= n){
                isPrime[j] = false, j+= i;
            }
        }
    }
}

int main(){
    int t;

    cin>>t;

    sito();
    return 0;
}
