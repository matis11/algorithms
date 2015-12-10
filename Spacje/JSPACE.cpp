/////////////////////////////////////
//////////////// Spacje /////////////
//////////// Mateusz Bartos /////////
////////// geekbajt@gmail.com ///////
// http://mbartos.lo3.edu.pl/site/ //
//////////////// 2012 ///////////////
/////////////////////////////////////

#include<iostream>
#include<string>

using namespace std;

int main(){
	string str;
	while(getline(cin,str))
	{
	    bool spc = false;

	    for(int i = 0 ; i < str.length() ; i++)
	    {
	        if(str[i] == ' ')
	        {
	            spc = true;
	            str.erase(str.begin()+i);
	            i--;
	            continue;
	        }else{
                if(spc)
                {
                    int x;
                    char chr;
                    chr = str[i];
                    x = chr;

                    if(x > 90)
                    {
                        x-=32;
                        chr = x;
                        str[i] = chr;
                        spc = false;
                    }else{
                        spc = false;
                    }

                }
	        }
	    }

        cout<<str<<"\n";

	    cin.sync();
	}
	return 0;
}
