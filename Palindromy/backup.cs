/////////////////////////////////////////////////
///////////////// Palindromy ////////////////////
/////////////////////////////////////////////////
/////////////// Mateusz Bartos //////////////////
///////////// geekbajt@gmail.com ////////////////
/////////////////////////////////////////////////


#include<iostream>
#include<string.h>

using namespace std;





bool palindrom(char *x);



int main(){
    int t;
    cin>>t;

    for(int i = 1; i <= t; i++){
        string s;
        cin>>s;

        char *a=new char[s.size()+1];
        a[s.size()]=0;
        memcpy(a,s.c_str(),s.size());

// CZÊŒÆ SPRAWDZAJ¥CA

        cout<<"Size of char array: "<<sizeof(a)<<" | "<<"Size of std::string :"<<s.size()<<"\n";

        for(int j = 0; j <= 9; j++){
            cout<<"a["<<j<<"] = "<<a[j]<<"\n";
        }
//*/
        cout<<"s.size() != 0"<<"\n";
        cout<<(s.size()% 2)<<"\n";

        if((s.size()% 2) != 0){
            int i = 0;
            int j = (s.size()-1);
            bool test = true;

            while(j != i && test == true){
                if(a[i] == a[j]){
                    i++;
                    j--;
                    test = true;
                }else{
                    cout<<"NIE PALINDROM"<<"\n";
                    test = false;
                }
            }

            if(test == true){
                cout<<"PALINDROM"<<"\n";
            }
        }

            if((s.size()% 2) == 0){
            int i = 0;
            int j = (s.size()-1);
            bool test = true;

            while(j+1 != i && test == true){
                if(a[i] == a[j]){
                    i++;
                    j--;
                    test = true;
                }else{
                    cout<<"NIE PALINDROM"<<"\n";
                    test = false;
                }
            }

            if(test == true){
                cout<<"PALINDROM"<<"\n";
            }
        }

    }//end of main loop
    return 0;
}
