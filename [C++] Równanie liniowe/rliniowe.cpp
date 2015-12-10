///////////////////////////////
////// Równanie liniowe ///////
/////// Mateusz Bartos ////////
//////////// 2012 /////////////
///////////////////////////////


#include<iostream>
#include<Math.h>

using namespace std;

float rownanie(float a, float b, float c){
    if(a == 0){
        if(b == c){
            return 8;
        }else{
            return 0;
        }
    }else{
        int temp;
        float temp2, temp3;
        temp2 = (((c-b)/a)*100);
        //cout<<"!LOG   temp2: "<<temp2;
        temp = roundf(temp2);
        temp2 = temp;
        temp3 = temp2 / 100;
        return (temp3);
    }
}


int main(){
    float a,b,c;
    cin>>a>>b>>c;
    if(rownanie(a,b,c) == 0){
        cout<<"BR";
    }else
    if(rownanie(a,b,c) == 8) {
        cout<<"NWR";
    }else
    cout<<rownanie(a,b,c);
    return 0;
}
