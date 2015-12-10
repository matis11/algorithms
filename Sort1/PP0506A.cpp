/////////////////////////////////////
//////////////// Sort1 //////////////
//////////// Mateusz Bartos /////////
////////// geekbajt@gmail.com ///////
// http://mbartos.lo3.edu.pl/site/ //
//////////////// 2012 ///////////////
/////////////////////////////////////

#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<algorithm>

using namespace std;

struct point
{
    string name;
    int x;
    int y;
    double lenght;
};

vector<point>vct;

bool compareByLength(const point &a, const point &b)
{
    return a.lenght < b.lenght;
}

int main(){
	int t;
	cin>>t;

	for(int i = 0 ; i < t ; i++)
	{
	    int n;
	    cin>>n;

	    for(int j = 0 ; j < n ; j++)
	    {
	        point temp;
	        cin>>temp.name>>temp.x>>temp.y;
	        temp.lenght = sqrt( (pow(temp.x,2)) + (pow(temp.y,2)) );
	        vct.push_back(temp);
	    }

        stable_sort(vct.begin(),vct.end(),compareByLength);

        for(int j = 0; j < n ; j++)
        {
            cout<<vct[j].name<<" "<<vct[j].x<<" "<<vct[j].y<<"\n";
        }

        vct.clear();
	}

	return 0;
}
