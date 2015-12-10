/////////////////////////////////////////////////
////////////// Predkoœæ œrednia /////////////////
/////////////////////////////////////////////////
/////////////// Mateusz Bartos //////////////////
///////////// geekbajt@gmail.com ////////////////
/////////////////////////////////////////////////


#include<iostream>

using namespace std;


int main()
{
    char x;
    int array[10];
    int adress, adress1, adress2, value;
    while(std::cin>>x)
    {

        if(x == '+'){
            cin>>adress1>>adress2;
            cout<<adress1 + adress2<<"\n";
        }
        if(x == '-'){
            cin>>adress1>>adress2;
            cout<<adress1 - adress2<<"\n";
        }
        if(x == '*'){
            cin>>adress1>>adress2;
            cout<<adress1 * adress2<<"\n";
        }
        if(x == '/'){
            cin>>adress1>>adress2;
            cout<<adress1 / adress2<<"\n";
        }
        if(x == '%'){
            cin>>adress1>>adress2;
            cout<<adress1 % adress2<<"\n";
        }

    }
    return 0;
}
