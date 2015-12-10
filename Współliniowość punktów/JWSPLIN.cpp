/////////////////////////////////////
//////////////// JWSPLIN ////////////
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

    for(int i = 0 ; i < t ; i ++)
    {
        int xa,ya,xb,yb,xc,yc;

        cin>>xa>>ya>>xb>>yb>>xc>>yc;

        int temp1,temp2,temp3,temp4,temp5,temp6;

        temp1 = xa*yb;
        temp2 = xb*yc;
        temp3 = xc*ya;
        temp4 = xb*ya;
        temp5 = xa*yc;
        temp6 = xc*yb;

        if(! (((((temp1+temp2)+temp3)-temp4)-temp5)-temp6) )cout<<"TAK\n";
        else cout<<"NIE\n";
    }

	return 0;
}
