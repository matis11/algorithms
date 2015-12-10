/////////////////////////////////////
/////////////// Template ////////////
//////////// Mateusz Bartos /////////
////////// geekbajt@gmail.com ///////
// http://mbartos.lo3.edu.pl/site/ //
//////////////// 2012 ///////////////
/////////////////////////////////////

#include<iostream>

using namespace std;

int suma;

int RecursiveSum(int k, int n)
{
    if(k == 0) return n;
    else
    {
        int i = 1;
        while(i != n+1)
        {
            suma += RecursiveSum(k-1,i);
            i++;
        }
        return suma;
    }
}

int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t ; i++)
    {
        int k,n;
        cin>>k>>n;

        cout<<RecursiveSum(k,n)<<"\n";
        suma = 0;
    }
	return 0;
}
