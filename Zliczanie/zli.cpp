/////////////////////////////////////
////////////// Zliczanie ////////////
//////////// Mateusz Bartos /////////
////////// geekbajt@gmail.com ///////
// http://mbartos.lo3.edu.pl/site/ //
//////////////// 2012 ///////////////
/////////////////////////////////////

#include<iostream>

using namespace std;

int main(){
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        if( ( ( (a+b) <= c) || ( (a+c) <= b) || ( (b+c) <= a) ) || ( ( a - b ) > c ) || ( (a-c) > c) || ( (b-c) > a ))
        {
            cout<<"brak\n";
            continue;
        }

        if( ((a*a)+(b*b)) < (c*c) )
        {
            cout<<"rozwartokatny\n";
            continue;
        }

        if( ((a*a)+(b*b)) > (c*c) )
        {
            cout<<"ostrokatny\n";
            continue;
        }

        if( ((a*a)+(b*b)) == (c*c))
        {
            cout<<"prostokatny\n";
            continue;
        }
    }
	return 0;
}
