#include<iostream>
#include<vector>

using namespace std;



int main()
{
    int t;
	cin>>t;
	for(int i = 0; i < t; i++)
    {
        vector <double> vct;
        double suma = 0;
        double x = 0;
        int n;
        cin>>n;
        for(int j = 0; j < n; j++)
        {
            cin>>x;
            vct.push_back(x);
            suma+=x;
        }
        double srd = suma / vct.size();

        //znajdowanie pierwszego najbli¿szego elementu

        int best = -1;
        double temp = 100000000;

        for(int j = 0 ; j < vct.size() ; j++)
        {
            if(vct[j] < srd)
            {
                if(srd - vct[j] < temp)
                    best = j;
                    temp = srd - vct[j];
            }
            if(vct[j] > srd)
            {
                if(vct[j] - srd < temp)
                    best = j;
                    temp = srd - vct[j];
            }
        }

        cout<<vct[best]<<"\n";

        vct.clear();
    }
	return 0;
}
