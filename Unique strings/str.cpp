#include<iostream>
#include<string>
#include<vector>

using namespace std;

vector<string>vct;
vector<int>die;

int searcher(string x)
{
    for(int i = 0; i < vct.size() ; i++)
    {
        if(vct[i] == x)
        {
            return i;
        }
    }
    return -1;
}

int searcherINT(int x)
{
    for(int i = 0; i < die.size() ; i++)
    {
        if(die[i] == x)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
	int t;
	cin>>t;
	for(int i = 0; i < t ; i++)
    {
        int x;
        cin>>x;
        for(int j = 0; j < x ; j++)
        {
            string str;
            cin>>str;
            int result = searcher(str);
            if(result != -1)
            {
                if(searcherINT(result) == -1)
                die.push_back(result);
            }else{
                vct.push_back(str);
            }
        }

        for(int j = 0; j < die.size() ; j++)
        {
            vct.erase(vct.begin() + (die[j]-j));
        }

        cout<<vct.size()<<"\n";
    }
	return 0;
}
