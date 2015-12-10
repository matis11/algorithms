/////////////////////////////////////////////////
////////////// Divisors Summary /////////////////
/////////////////////////////////////////////////
/////////////// Mateusz Bartos //////////////////
//////// http://mbartos.lo3.edu.pl/site /////////
//////////////////// 2012 ///////////////////////
/////////////////////////////////////////////////


#include<iostream>

using namespace std;


int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        int divisors[1001];
        int n;
        cin>>n;
        int j=0;
        int temp = n;
        n-=1;
        while(n!=0){
            if((temp%n) == 0){
                divisors[j] = n;
                j++;
            }
            n--;
        }//while
        temp = 0;
        for(int k = 0; k<j; k++){
            temp+=divisors[k];
        }//for
        cout<<temp<<"\n";
    }//for
    return 0;
}
