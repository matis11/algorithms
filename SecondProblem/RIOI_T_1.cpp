/////////////////////////////////////
/////////////// Template ////////////
//////////// Mateusz Bartos /////////
////////// geekbajt@gmail.com ///////
// http://mbartos.lo3.edu.pl/site/ //
//////////////// 2012 ///////////////
/////////////////////////////////////

#include<iostream>

using namespace std;

int silnia(int x)
{
    int suma = 1;
    for(int i = 1 ; i <= x ; i++)
    {
        suma *= i;
    }
    return suma;
}

int main(){
	int t;
	cin>>t;

	for(int i = 0 ; i < t ; i++)
	{
	    float temp;
	    int n,k;

	    cin>>n>>k;
        int x;
        int y;
        x = silnia(n);
        y = silnia(k)*silnia((n-k));
	    temp =  x/y ;

	    cout<<temp<<"\n";
	}

	return 0;
}
