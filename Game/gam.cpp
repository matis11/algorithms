/////////////////////////////////////
///////////////// Game //////////////
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
	    int x1,y1,x2,y2;
	    cin>>x1>>y1>>x2>>y2;

	    double temp1,temp2;
	    temp1 = (x1+x2)/2;
	    temp2 = (y1+y2)/2;

	    cout<<temp1<<" "<<temp2<<"\n";
	}
	return 0;
}
