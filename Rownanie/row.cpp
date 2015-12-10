/////////////////////////////////////
/////////////// Rownanie ////////////
//////////// Mateusz Bartos /////////
////////// geekbajt@gmail.com ///////
// http://mbartos.lo3.edu.pl/site/ //
//////////////// 2012 ///////////////
/////////////////////////////////////

#include<iostream>

using namespace std;

int main(){
	long double a,b,c;
    cin>>a>>b>>c;

    cout.setf(ios::fixed);
    cout.precision(2);

    if(( a == 0) && ((c-b) == 0))
    {
        cout<<"NWR\n";
        return 0;
    }
    if( (a == 0) && ((c-b) != 0) )
    {
        cout<<"BR\n";
        return 0;
    }

    cout<<((c-b)/a)<<"\n";

	return 0;
}
