// Mateusz Bartos


#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

unsigned long long int fuel[500001];


int szukaj(unsigned long long int x, int n){
    bool znalazlem = false;
    int left = 0, right = n-1, mid;
    while( (left <= right) && (!znalazlem)){
        mid = (left + right) /2;
        if(fuel[mid] == x){
            znalazlem = true;
        }else{
            if(fuel[mid] < x){
                left = mid + 1;
            }else{
                right = mid -1;
            }//if#2
        }//if#1
    }//while
    if(fuel[mid] > x)
    return mid;
    if(fuel[mid] < x)
    return mid+1;
    if(fuel[mid] == x)
    return mid;
}


int main(){
    ios_base::sync_with_stdio(0);
    ////////////////////////////////////////////////////////////////////////////
    // Declare and read variables
    ////////////////////////////////////////////////////////////////////////////

    /*  Variable definition
     * ***************************************************
     *  int d - Distance between traveler and destination
     *  int m - Distance between traveler and taxi base
     *  int n - Number of available taxi in taxi base
     *  int petrol[n] - Amount of fuel in every taxi
     * ***************************************************
    */

    int n;
    unsigned long long int d, m;
    cin>>d>>m>>n;
//    d=462,m=458,n=320;
    for(int i = 0; i < n; i++){
        unsigned long long int temp;
        cin>>temp;
        fuel[i] = temp;

    }//for

    ////////////////////////////////////////////////////////////////////////////
    // Sortowanie tablicy z paliwem (QuickSort)
    ////////////////////////////////////////////////////////////////////////////
    sort(fuel,fuel+n);
    unsigned long long int os = 0;
    int best=-1,count=0;
    int x=n;

    if(x==1){
        if(fuel[x-1]>=(m+d)){
            cout<<"1"<<"\n";
            return 0;
        }else{
            cout<<"0"<<"\n";
            return 0;
        }
    }else{
    best = szukaj((d-m),n);

    if(fuel[best]<(d-m)){
        cout<<"0"<<"\n";
        return 0;
    }//if

    while((n>0)&&(os<m)){
        if((n-1)==best){
            n--;
            continue;
        }

        if(fuel[best]>=((2*(m-os))+(d-m))){
            cout<<count+1<<"\n";
            return 0;
        }


        //Sytuacja, w której taksowka ma dosc paliwa, aby przyjechać po pasazera i zaniewieźć go do bazy
            if(fuel[n-1]>=2*(m-os)){
                fuel[n-1]-=2*(m-os);
                os=m;
                if(fuel[n-1]>=(d-m)){
                    count++;
                    cout<<count<<"\n";
                    return 0;
                }else{
                    count++;
                    break;
                }
            }else{
                if(fuel[n-1]>=(m-os)){
                    //Sytuacja, w
                    fuel[n-1]-=(m-os);
                    if(fuel[n-1]==0){
                        cout<<"0\n";
                        return 0;
                    }
                    os+=fuel[n-1];
                    n--;
                    count++;
                }else{
                    cout<<"0\n";
                    return 0;
                }
            }//if
    }//while


/////////////////////////////////////////////////////////
// In this moment all requied taxi cab's has been used //
// (A)----------------(B)-----------------------(C)  ////
//                    [os]                           ////
//                     |-------------------------|   ////
//                                 best              ////
/////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////
// Now we are sure, thanks to .57. line, that the last //
// and the best cab can be used to drive to the last   //
// checkpoint. We don't need to count it, just we have //
// to write it.                                        //
/////////////////////////////////////////////////////////
    if(fuel[best]>=((m-os)+(d-m))){
       count++;
       cout<<count<<"\n";
       return 0;
       }
    if(os>=m){
        if(fuel[n-1]>=fuel[best]){
            cout<<count<<"\n";
        }else
        cout<<count+1<<"\n";
    }else
        cout<<"0\n";

    return 0;
}
}
