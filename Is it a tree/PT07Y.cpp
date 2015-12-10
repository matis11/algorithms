#include<iostream>
#include<vector>

using namespace std;

struct graph{
    vector<vector<int> > vct;
    vector<int> vis;
    int vcount;
};

graph graf;

/////////////////////////////////////////////////////////////////////////
    //                    DEPTH-FIRST SEARCH                       //
    //                       by M.Bartos                           //
/////////////////////////////////////////////////////////////////////////

int parent = 1;
bool stopMeNow = false;

void visit(graph &graf, int i)
{
    // Let's mark single vertex as visited
    graf.vis[i] = 1;

//    cout<<"CHECKING VERTEX "<<i<<"\n";

    for(int k = 0 ; k < graf.vct[i].size() ; k++)
    {
        if (stopMeNow) return;
        if((graf.vct[i][k] != parent)&&(graf.vis[graf.vct[i][k]] != 0)){
            if(stopMeNow) return;
            cout<<"NO\n";
            stopMeNow = true;
            return;
        }


        if(graf.vis[graf.vct[i][k]] == 0)
        {
            parent = i;
            visit(graf,graf.vct[i][k]);
        }
    }
    if (stopMeNow) return;
}

void DFS (graph &graf)
{
    int i;
    for(i = 1 ; i < graf.vcount ; i++)
        graf.vis[i] = 0;

        visit(graf,1);

    for(i = 1 ; i < graf.vcount ; i++)
        if((graf.vis[i] == 0)&&(!stopMeNow))
        {
            cout<<"NO\n";
            return;
        }
    if(!stopMeNow)
    cout<<"YES\n";
}


int main(){
    int n, m;
    cin>>n>>m;
    graf.vct.resize(n+1);
    graf.vis.resize(n+1);
    graf.vcount = n;

    while(m--)
    {
        int x,y;
        cin>>x>>y;
        graf.vct[x].push_back(y);
        graf.vct[y].push_back(x);

    }

    DFS(graf);

    return 0;
}
