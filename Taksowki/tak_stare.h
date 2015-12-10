/////////////////////////////////////////////////
////////////////// Taksówki /////////////////////
/////////////////////////////////////////////////
/////////////// Mateusz Bartos //////////////////
//////// http://mbartos.lo3.edu.pl/site /////////
//////////////////// 2012 ///////////////////////
/////////////////////////////////////////////////


#include <cstdlib>
#include <iostream>

using namespace std;

void swap(unsigned long long int *a, unsigned long long int *b)
{
  unsigned long long int t=*a; *a=*b; *b=t;
}
void sort(unsigned long long int arr[], int beg, int end)
{
  if (end > beg + 1)
  {
    unsigned long long int piv = arr[beg], l = beg + 1, r = end;
    while (l < r)
    {
      if (arr[l] <= piv)
        l++;
      else
        swap(&arr[l], &arr[--r]);
    }
    swap(&arr[--l], &arr[beg]);
    sort(arr, beg, l);
    sort(arr, r, end);
  }
}


unsigned long long int fuel[500001];

int main(){
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
    for(int i = 0; i < n; i++){
        int temp;
        cin>>temp;
        fuel[i] = temp;
    }//for

    ////////////////////////////////////////////////////////////////////////////
    // Sortowanie tablicy z paliwem (QuickSort)
    ////////////////////////////////////////////////////////////////////////////
        sort(fuel,0,n);
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
    for(int i=x;i>=1;i--){
        if(fuel[x-1]==(d-m)){
            best=x-1;
            break;
        }
        if(fuel[x-1]<(d-m)){
            best = x;
            break;
        }
        x--;
    }//for


    if(best==-1){
        cout<<"0"<<"\n";
        return 0;
    }//if

    while((n>2)&&(os<m)){
        if(n==best){
            n--;
            continue;
        }
        //Sytuacja, w której taksowka ma dosc paliwa, aby przyjechaæ po pasazera i zaniewieŸæ go do bazy
            if(fuel[n-1]>=2*(m-os)){
                os=m;
                count++;
                break;
            }else{
                //Sytuacja, w
                fuel[n-1]-=(m-os);
                os+=fuel[n-1];
                n--;
                count++;
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

    cout<<count+1<<"\n";
    return 0;
}
}
