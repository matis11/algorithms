/////////////////////////////////////////////////
////////////////// Flamaster ////////////////////
/////////////////////////////////////////////////
/////////////// Mateusz Bartos //////////////////
//////// http://mbartos.lo3.edu.pl/site /////////
//////////////////// 2012 ///////////////////////
/////////////////////////////////////////////////
////////////////// t~0,068 //////////////////////
/////////////////////////////////////////////////

#include<iostream>

using namespace std;


int main(){
    int t;
    cin>>t;
    //t = 1;
    for(int i = 1 ; i <= t ; i++){
        string str,str2;
        char temp;
        cin>>str;
        //str = "ABBCCCDDDDEEEEEFGGHIIJKKKL";
        for(int j = 0; j <= ((str.size())-1); j++){
            if(str.size()>2){
                if(j <= (str.size()-3)){
                    temp = str[j];
                    if((str[j+1] == temp)&&(str[j+2] == temp)){
                        int iter = 3;
                        int k = j+3;
                        char temp2 = temp;
                        while(1){
                            temp = str[k];
                            //cout<<"lol k="<<k<<"\n"<<"lol iter="<<iter<<"\n";
                            if((temp==temp2)&&(k < str.size())){
                                k++;
                                iter++;
                            }else break;
                        }
                        cout<<str[j]<<iter;
                        j=k-1;
                    }else{
                        cout<<str[j];
                    }
                }else{
                    cout<<str[j];
                }
            }else{
                cout<<str[j];
            }
        }
        cout<<"\n";
    }
    return 0;
}
;
