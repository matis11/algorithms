/////////////////////////////////////////////////
/////////////// Po³owa po³owy ///////////////////
/////////////////////////////////////////////////
/////////////// Mateusz Bartos //////////////////
///////////// geekbajt@gmail.com ////////////////
/////////////////////////////////////////////////


#include<iostream>
#include<string.h>

using namespace std;


int main()
{
    string input;
    int lenght;

    cin>>lenght;

    for(int i=0;i<lenght;i++){
        cin>>input;
        for(int j=0;j<(input.size())/ 2;j++){
            if((j == 0) || ((j % 2) == 0 ))
            cout<<input[j];
        }
        cout<<"\n";
    }
    return 0;
}
