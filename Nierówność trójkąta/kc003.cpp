#include<iostream>

using namespace std;


int main()
{
	double a,b,c;
	while(cin>>a>>b>>c)
    {

        if( (a < 0) || (b < 0) || (c < 0))
        {
            cout<<"0\n";
            continue;
        }

        if( (a < b + c) && (b < a + c) && (c < a + b) )
        {
            cout<<"1\n";
        }else{
            cout<<"0\n";
        }
    }
	return 0;
}
