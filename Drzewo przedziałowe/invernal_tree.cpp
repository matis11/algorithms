#include<iostream>


using namespace std;

int tree[1000001];

int sum(int a, int b){
    int n = a, suma = tree[a];
    cout<<"OBLICZAM: "<<a<<"\n";
    while(a != 1){
        if(a % 2 == 0) suma += tree[a-1], cout<<"LEWY\n";
            else suma += tree[a+1], cout<<"PRAWY\n";
        a /= 2;
        cout<<"OJCIEC: "<<a<<"\n";
        suma += tree[a];
    }
    return suma;
}

int main(){
    int n,m;
    cin>>n;

    int podstawa = 1;

    while(podstawa < n)
        podstawa <<= 1;

    podstawa <<= 1;
    podstawa -= 1;

    cout<<podstawa<<"\n";

    for(int i = n; i <= podstawa ; i++){
        cin>>tree[i];
    }

    cout<<sum(5,8)<<"\n";

    for(int i = 0 ; i <= podstawa ; i++){
        cout<<tree[i]<<"\n";
    }

    return 0;
}
