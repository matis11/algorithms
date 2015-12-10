/* 
 * File:   podciag.cpp
 * Author: Mateusz
 *
 * Created on 7 luty 2014, 09:23
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    string a,b;
    cin>>a>>b;
    
    unsigned long long int suma = 0;
    
    for(int i = 0; i < a.length() ; i++){
        if(a[i] == b[0]){//i nie jest to koniec ciagu
            suma++;
            int ia = i+1, ib = 1;
            while((a[ia] == b[ib]) && (ia < a.length()) && (ib < b.length()) ){
                suma++;
            }
        }
    }
    
    return 0;
}

