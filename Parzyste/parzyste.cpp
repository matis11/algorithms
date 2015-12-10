/* 
 * File:   main.cpp
 * Author: Mateusz
 * Version: 2 - Amazing Jasz is amazing
 *
 * Created on 6 luty 2014, 11:36
 */

#include <iostream>

using namespace std;



int main() {
    ios_base::sync_with_stdio(0);
    int n,a,b;
    cin>>n;
    
    for(int i = 0 ; i < n; i++){
        cin>>a>>b;
        unsigned long long int suma = 0;
        
        if((a%2 == 0)&&(b%2 == 0)){
          suma = ((a+b)*((((b-a)+1)/2)+1))/2;
          cout<<"PARZYSTE\n";
        }
        else if((a%2 == 0)&&(b%2 != 0)){
//            suma = b;
            b--;
            cout<<"PARZYSTE A\n";
            suma += ((a+b)*((((b-a)+1)/2)+1))/2;
            
        }
        else if((a%2 != 0)&&(b%2 == 0)){
            suma = b;
            cout<<"PARZYSTE B\n";
            b--;
            suma += ((a+b)*((((b-a)+1)/2)+1))/2;
        }
        else if((a%2 != 0)&&(b%2 != 0)){
//            suma = a+b;
            a++;
            cout<<"NIEPARZYSTE\n";
            b--;
            suma += ((a+b)*((((b-a)+1)/2)+1))/2;
        }
//         
//        int counter = 0
        for(int i = a; i <=b ;i++)
        {
            if((i & -i) != 1)
                suma += i/(i & -i);
//                counter++;
         }
        cout<<suma<<"\n";
    }
    
    return 0;
}

