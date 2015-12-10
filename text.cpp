

    #include<iostream>
    using namespace std;

    int main(){
    ios_base::sync_with_stdio(0);
    int n,p,k,i;
    int owoce1[10];
    string owoce;
    cin>>n>>owoce;
    //p==1;
    //k==n;

    for( i=0;i<=n;i++)
    {
        if(owoce[i]=='p')owoce1[i]=1;
            else if(owoce[i]=='j')owoce1[i]=-1;
    }
    cout<<owoce1[0];

    return 0;
    }

