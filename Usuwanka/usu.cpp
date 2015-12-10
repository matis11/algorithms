#include<iostream>
#include<vector>

using namespace std;

struct block{
    int value;
    int index;
};

struct protect{
    vector<int>pro;
};

vector<block>tab;
vector<protect>result;
string str;
int n,k;



int dodaj(block &tablica,int start,int number){
    int current=1,temp=tab[start].value,i=start;
    while(current!=number){
        temp+=tab[i+1].value;
        current++;
        i++;
    }//while
    return temp;
}


int main(){
    ios_base::sync_with_stdio(0);
    tab.resize(100001);

    cin>>n>>k>>str;
    for(int i=0;i<str.size();i++){
        if(str[i]=='b'){
            tab[i].value=1;
        }
        if(str[i]=='c'){
            tab[i].value=0;
        }
        tab[i].index = i+1;
    }//for
    tab.resize(n);

    int temp = tab.size() - k;
    while(temp>k){
        temp = tab.size() - k;
        for(int i=0; i<temp ; i++){
            temp = tab.size() - k;
//            if(temp<k) break;
            if((dodaj(*(tab.begin()),i,k+1))==k){
                protect lol;
                for(int j=i;j<i+(k+1);j++){
                    lol.pro.push_back(tab[i].index);
                    tab.erase(tab.begin()+i);
                }
                result.insert(result.begin(),lol);
            break;
                //i+=k+1;
            }//if

        }//for
    }//while
    int temp2 = result.size();
    int count=0;
    vector<int>innedyou;
    for(int i=0;i<temp2;i++){
        for(int j = 0;j<result[i].pro.size();j++){
            count++;
            if((count-1)%(k+1)==0) {
                if(i!=0)
                cout<<"\n";
            }

            cout<<result[i].pro[j]<<" ";
        }//for
    }//for
}
