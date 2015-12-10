/////////////////////////////////////
/////////// Wycinanie Literek ///////
//////////// Mateusz Bartos /////////
////////// geekbajt@gmail.com ///////
// http://mbartos.lo3.edu.pl/site/ //
//////////////// 2012 ///////////////
/////////////////////////////////////

#include<iostream>
#include<string>

using namespace std;

int main(){
	char chr;
	while(cin>>chr)
	{
	    string str;

	    cin>>str;

	    for(int i = 0; i < str.length() ; i++)
	    {
	        if(str[i] == chr) continue;
	        else cout<<str[i];
	    }
	    cout<<"\n";
	}
	return 0;
}
