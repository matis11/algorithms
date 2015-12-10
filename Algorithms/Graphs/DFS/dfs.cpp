/////////////////////////////////////
////////// Deep-First Search ////////
/////////// Mateusz Bartos //////////
///////// geekbajt@gmail.com ////////
// http://mbartos.lo3.edu.pl/site/ //
/////////////// 2012 ////////////////
/////////////////////////////////////

#include<iostream>
#include<algorithm>
#include<vector>
#define MAXV 100000 //maksymalna liczba wierzcholkow
#define INFINITY 10000000

using namespace std;



struct edge{
    int v;
    int waga;
};

struct graph{
    int d[MAXV];                //oszacowana odleglosc od zrodla
    int p[MAXV];                //poprzednik w drzewie przeszukiwan
    int vis[MAXV];              //czy przetworzony ?
    int degree[MAXV];           //stopien wierzcholka
    vector<vector<edge> > vct;  //lista sasiedztwa
    int vcount;                 //ilosc wierzcholkow
    int ecount;

    ////////////////////////////////////////////////////////////////
    // Example of using this struct                               //
    ////////////////////////////////////////////////////////////////
    // <> How to read vector of multiple vertex?                  //
    //                                                            //
    //    adj[x][y] ----> it's edge, so you can use:              //
    //     - vct[x][y].v;                                         //
    //     - vct[x][y].waga;                                      //
    ////////////////////////////////////////////////////////////////
    // <> How to add more vertex to parent vertex?                //
    //                                                            //
    //    vct[x].push_back(example_edge);                         //
    ////////////////////////////////////////////////////////////////
};

graph graf;


/////////////////////////////////////////////////////////////////////////
    //                    DEPTH-FIRST SEARCH                       //
    //                       by M.Bartos                           //
/////////////////////////////////////////////////////////////////////////

void visit(graph &graf, int i)
{
    // Let's mark single vertex as visited
    graf.vis[i] = 1;

    cout<<"CHECKING VERTEX "<<i<<"\n";

    for(int k = 0 ; k < graf.vct[i].size() ; k++)
    {
        if(graf.vis[graf.vct[i][k].v] == 0) visit(graf,graf.vct[i][k].v);
    }
}

void DFS (graph &graf)
{
    int i;
    for(i = 0 ; i < graf.vcount ; i++)
        graf.vis[i] = 0;

    for(i = 0 ; i < graf.vcount ; i++)
        if(graf.vis[i] == 0)
            visit(graf,i);
}

int main(){
    graf.vct.resize(100000);
    cout<<"Enter number of vertex\n";
    cin>>graf.vcount;
    cout<<"Enter number of edges\n";
    cin>>graf.ecount;
    cout<<"Enter configuration for vertex:\"0 1\" means that vertex 0 and vertex 1 are connected\n";
    for(int i = 0 ; i < graf.ecount ; i++)
    {
        edge e1,e2;

        cin>>e1.v>>e2.v;

        graf.vct[e1.v].push_back(e2);
        graf.vct[e2.v].push_back(e1);

        cout<<"</^\\> "<<e1.v<<" and "<<e2.v<<" has been succesfuly connected\n";
    }

    cout<<"\n --------------- \n";
    cout<<" |     DFS     | \n";
    cout<<" | inicjalized | \n";
    cout<<" --------------- \n\n";

    DFS(graf);

	return 0;
}
