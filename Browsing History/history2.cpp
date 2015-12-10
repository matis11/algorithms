/////////////////////////////////////
/////////// Browsing History ////////
//////////// Mateusz Bartos /////////
////////// geekbajt@gmail.com ///////
// http://mbartos.lo3.edu.pl/site/ //
//////////////// 2012 ///////////////
/////////////////////////////////////

#include<iostream>
#include<string>

using namespace std;

int main(){
	int t;
	int nr = 0;
	while(cin>>t)
	{
	    int best = 0;
	    for(int i = 0 ; i < t ; i++)
	    {
	        int suma = 0;
	        string str;
	        cin>>str;

	        for(int j = 0; j < str.length() ; j++)
	        {
	            int ascii;
	            ascii = str[j];
	            suma+=ascii;
	        }
	        if(suma > best) best = suma;
	        suma = 0;
	    }
	    nr++;
	    cout<<"Case "<<nr<<": "<<best<<"\n";
	}
	return 0;
}
