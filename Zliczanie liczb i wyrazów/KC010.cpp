#include<iostream>
#include<string>

using namespace std;


int main()
{
    string str;
    while(getline(cin,str))
    {
        int numbers = 0;
        int texts = 0;
        bool number = false;
        bool text = false;
        for(int i = 0 ; i < str.length() ; i++)
        {
            if((str[i] != ' ') && (i+1 != str.length()))
            {
                int x = str[i];
                if((x > 64) && (x < 91) || (x > 96) && (x < 123))
                {
                    number=false;
                    text=true;
                }
                if((x>47)&&(x<58)){
                    number=true;
                    text=false;
                }

            }else{
                if(number)
                {
                    numbers++;
                    number = false;
                    text = false;
                }
                if(text)
                {
                    texts++;
                    text = false;
                    number = false;
                }
            }
        }
        if((numbers != 0) || (texts != 0))cout<<numbers<<" "<<texts<<"\n";

        numbers = 0, texts = 0;
        cin.sync();
    }
	return 0;
}
