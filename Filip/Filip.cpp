#include<iostream>
#include<string>


using namespace std;


int main()
{
	int t;
	cin>>t;

	for(int i = 0; i < t ; i++)
    {
        cin.sync();
        string str;
        getline(cin,str);
        string str2;
        cin>>str2;
        char chr;
        cin>>chr;
        int pos;
        cin>>pos;

        if(chr == 'N')
        {
           cout<<str.find(str2,pos)<<"\n";
        }
        if(chr == 'Y')
        {

            if((str[(str.find(str2,pos)-1)] == ' ') || (str[(str.find(str2,pos)+str2.length())] == ' ' ))
            {
                cout<<pos<<"\n";
            }else cout<<"-1\n";
        }

    }

	return 0;
}
