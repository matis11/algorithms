/////////////////////////////////////
///////////////// KMP ///////////////
//////////// Mateusz Bartos /////////
////////// geekbajt@gmail.com ///////
// http://mbartos.lo3.edu.pl/site/ //
//////////////// 2012 ///////////////
/////////////////////////////////////

#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    vector<int>vct;
    string str,str2;
    int t,x;
    cin>>t;

    for(int i = 0 ; i < t ; i++)
    {
        cin>>x;
        cin>>str2>>str;
        int found = str.find(str2);
        int last;
        while (found != std::string::npos)
        {
            //cout<<"PETL\n";
            vct.push_back(found);
            found = str.find(str2,found+1);
        }

        for(int j = 0 ; j < vct.size() ; j++)
        {
            cout<<vct[j]<<"\n";
        }
        vct.clear();
    }
	return 0;
}
