#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int>prez;

int main()
{
    int v;
    while(cin>>v)
    {
        if(v == 0)break;
        prez.push_back(v);
    }
    sort (prez.begin(), prez.end());

    cout<<prez[(prez.size()-2)]<<"\n";
	return 0;
}
