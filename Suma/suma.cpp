/////////////////////////////////////////////////
//////////////////// Suma ///////////////////////
/////////////////////////////////////////////////
/////////////// Mateusz Bartos //////////////////
//////// http://mbartos.lo3.edu.pl/site /////////
//////////////////// 2012 ///////////////////////
/////////////////////////////////////////////////


#include<iostream>

using namespace std;


int main(){
    int t;
    int temp;
    int i = 0;
    int n[1001];
    cin>>t;
    n[i]=t;
    temp = t;
    cout<<n[i]<<"\n";
    i=1;
    while(cin>>t){
        temp = n[i-1];
        n[i]= t + temp;
        cout<<n[i]<<"\n";
        i++;
    }
    return 0;
}
