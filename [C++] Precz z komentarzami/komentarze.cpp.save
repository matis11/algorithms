/////////////////////////////////////////////////
///////////////// Komentarze /////////////////////
/////////////////////////////////////////////////
/////////////// Mateusz Bartos //////////////////
//////// http://mbartos.lo3.edu.pl/site /////////
//////////////////// 2012 ///////////////////////
/////////////////////////////////////////////////


#include<iostream>
#include<string.h>

using namespace std;


int main(){
    string str;
    while(getline(cin,str)){
        bool apostrof = false;
        for(int i = 0; i < str.size() ; i++ ){
            if((str[i] == '"') && (apostrof == false)){
                apostrof = true;
                continue;
            }
            if((str[i] == '"') && (apostrof == true)){
                apostrof = false;
                continue;
            }

            if((str[i] == '/') && (str[i+1] == '/') && (apostrof == false)){
                str.erase(i,str.size());
                cout<<str<<"\n";
                break;
            }//if
            if((str[i] == '/') && (str[i+1] == '*') && (apostrof == false)){
                for(int k=(i+2) ; k<(str.size()-1) ; k++){
                    if((str[k] == '*') && (str[k+1] == '/')){
                        str.erase((i-1),k);
                    }else{
                        if(k == (str.size()-2)){
                            str.erase(i,str.size());
                            bool end = false;
                            string str2;
                            while(!end){
                                getline(cin,str2);
                                for(int k = 0; k < str2.size() ; k++ ){
                                    if((str2[k] == '*') && (str2[k+1] == '/')){
                                        end = true;
                                        break;
                                    }else{//if
                                        if(k == (str2.size()-1)){
                                            str2.erase();
                                        }//if
                                    }//else
                                }//for

                            }//while
                        }
                    }
                }
                cout<<str<<"\n";
            }//if
        }//for

    }//while
    return 0;
}
