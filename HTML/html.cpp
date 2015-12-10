#include<iostream>
#include<string>

using namespace std;


int main()
{
    string str;
    while(getline(cin,str))
    {
        for(int i = 0 ; i < str.length() ; i++ )
        {
            if(str[i] == '<')
            {
                int j = i;
                while(str[j] != '>')
                {
                    char chr = str[j];
                    if(str[j] == '/')
                    {
                        j++;
                        continue;
                    }
                    if(chr < 97)
                    {
                        j++;
                        continue;
                    }

                    chr-=32;
                    str[j]=chr;
                    j++;
                }
            }
        }
        cin.sync();
        cout<<str<<"\n";
    }
	return 0;
}
