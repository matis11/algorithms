/////////////////////////////////////
/////////////// MWP3_1C1 ////////////
//////////// Mateusz Bartos /////////
////////// geekbajt@gmail.com ///////
// http://mbartos.lo3.edu.pl/site/ //
//////////////// 2012 ///////////////
/////////////////////////////////////

#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i = 0 ; i < t ; i++)
    {
        int a,b;
        cin>>a>>b;
        int temp;

        if(a>b)
        {
            temp = a / 2;
            while( ((a % temp) && (b % temp)) )
            {
                temp /= 2;
            }
        }else{
            temp = b /2;
            while( ((a % temp) && (b % temp)))
            {
                temp /= 2;
            }
        }
        cout<<temp<<"\n";
    }
	return 0;
}
