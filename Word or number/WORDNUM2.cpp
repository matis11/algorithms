/////////////////////////////////////
//////////// Word or number /////////
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
    int count = 0;

    cin>>t;

    for(int i = 0 ; i < t ; i++)
    {
        int x;
        cin>>x;
        string str;
        cin>>str;

        str.erase(str.begin()+(x-1));
        count++;
        cout<<count<<" ";
        cout<<str<<"\n";
    }

	return 0;
}
