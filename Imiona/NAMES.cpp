/////////////////////////////////////
//////////////// Names //////////////
//////////// Mateusz Bartos /////////
////////// geekbajt@gmail.com ///////
// http://mbartos.lo3.edu.pl/site/ //
//////////////// 2012 ///////////////
/////////////////////////////////////

#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

struct data{
    string imie;
    int wystapienia;
};

vector<data>vct;

bool compare(data a, data b)
{
    return a.wystapienia < b.wystapienia;
}

bool compareString(data a, data b)
{
    return a.imie < b.imie;
}

int VCTfind(string str)
{
    for(int i = 0 ; i < vct.size() ; i++)
    {
        if(vct[i].imie == str) return i;
    }
    return -1;
}

int main(){
    string str;
    while(getline(cin,str))
    {
        int pos = str.rfind(" ");

//        cout<<"STR2 = "<<str2<<"\n";
//        cout<<"POS :"<<pos<<" | X :"<<x<<"\n";

        string imie;


        for(int i = pos+1 ; i < str.size() ; i++)
        {
            char chr = str[i];
            int int_chr = chr;
            if(int_chr > 91) int_chr = int_chr - 32;
            chr = int_chr;
            imie += chr;
        }

        //szukanie w vectorze imienia

        int test = VCTfind(imie);

       // cout<<"IMIE = "<<imie<<" test = "<<test<<"\n";

        if(test == -1)
        {
            data temp;
            temp.imie = imie;
            temp.wystapienia = 1;

            vct.push_back(temp);
        }else{
            vct[test].wystapienia += 1;
        }

        cin.sync();
    }

    stable_sort(vct.begin(),vct.end(),compare);

    for(int i = 0 ; i < vct.size() - 1; i++)
    {
        if(vct[i].wystapienia == vct[i+1].wystapienia)
        {
            int wyst = vct[i].wystapienia;
            int start = i;
            int end;
            while(vct[i].wystapienia == wyst)
            {
                cout<<"LOL\n";
                end = i;
                i++;
            }

                for(int i = vct.size()-1 ; i >= 0 ; i--)
                {
                    cout<<vct[i].imie<<" "<<vct[i].wystapienia<<"\n";
                }
                cout<<"\n\n";

            sort(vct.begin() + start, vct.begin()+end , compareString);
        }
    }

    for(int i = vct.size()-1 ; i >= 0 ; i--)
    {
        cout<<vct[i].imie<<" "<<vct[i].wystapienia<<"\n";
    }
	return 0;
}
