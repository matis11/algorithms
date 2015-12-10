/* 
 * File:   main.cpp
 * Author: Mateusz
 * Version: 4 - Danger Close 0
 *
 * Created on 6 luty 2014, 09:34
 */

#include <iostream>
#include <cstdio>

using namespace std;

int id[100001];

int find( int a){
    if(id[a] == a) return a;
    else{
        id[a] = find(id[a]);
        return id[a];
    }
}

void merge(int a, int b){
    a = find(a);
    b = find(b);
    id[a] = b;
}

int main() {
    ios_base::sync_with_stdio(0);
    
    int n, k;
//    cin>>n>>k;
    scanf("%d",&n);
    scanf("%d",&k);
    
    for(int i =0 ; i < n ; i++){
        id[i] = i;
    }
    
    for (int i = 0; i < k; i++) {
        int r,a,b;
        cin>>r>>a>>b;
        //Union
        if( r%2 == 0){
            merge(a,b);
        }else{
            //Find
            (find(a) == find(b)) ? cout<<"TAK\n" : cout<<"NIE\n";
        }
    }

    return 0;
}

