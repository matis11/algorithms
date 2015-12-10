#include<iostream>
#include<string>
#include<vector>

using namespace std;



int main()
{
    string str;
    vector<int>tab;
    while(getline(cin,str))
    {
        tab.resize(301);

        for(int i = 0 ; i < str.length() ; i++)
        {
            char chr;
            chr = str[i];
            int x;
            x = chr;
            tab[x]++;
        }

        cin.sync();
    }
    for(int i = 0 ; i < tab.size() ; i++)
    {
        if(tab[i] != 0)
        cout<<i<<" "<<tab[i]<<"\n";
    }
	return 0;
}
