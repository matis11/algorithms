/////////////////////////////////////
/////////////// Template ////////////
//////////// Mateusz Bartos /////////
////////// geekbajt@gmail.com ///////
// http://mbartos.lo3.edu.pl/site/ //
//////////////// 2012 ///////////////
/////////////////////////////////////

#include<iostream>

using namespace std;

int main(){
    double v,t;
    while(cin>>v>>t)
    {
        if((v == 0) || (t == 0))
        {
            cout<<"0"<<"\n";
            continue;
        }
        float a;
        a = v / t;
        t = 2*t;
        t = t*t;
        double x = (a*t)/2;
        cout.precision(0);
        cout<<x<<"\n";
    }
	return 0;
}
