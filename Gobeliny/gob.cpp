#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    srand( time( NULL ) );

    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int liczba =( rand() % 100 );
        if(liczba >= 50) cout<<"TAK\n";
        else cout<<"NIE\n";
    }

    return 0;
}
