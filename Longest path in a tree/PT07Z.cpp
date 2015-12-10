/////////////////////////////////////
///////// Breadth-First Search //////
//////////// Mateusz Bartos /////////
////////// geekbajt@gmail.com ///////
// http://mbartos.lo3.edu.pl/site/ //
//////////////// 2012 ///////////////
/////////////////////////////////////

#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>

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

void BFS(graph &graf, int i)
{
    queue<int> kolejka;

    kolejka.push(i);

    int s;

    int temp = 0;

    while(!kolejka.empty())
    {
        s = kolejka.front();
        graf.vis[s] = 1;
        //cout<<"WYJMUJE "<<s<<"\n";
        kolejka.pop();

        for(int k = 0 ; k < graf.vct[s].size() ; k++)
        {
            if(graf.vis[graf.vct[s][k].v] == 0)
            {
                graf.vis[graf.vct[s][k].v] = 1;
                //cout<<"DODAJE "<<graf.vct[s][k].v<<"\n";
                kolejka.push(graf.vct[s][k].v);
            }
        }
        temp++;
    }
    cout<<temp-1<<"\n";
}

int main(){
    graf.vct.resize(100000);
    //cout<<"Enter number of vertex\n";
    cin>>graf.vcount;
  //  cout<<"Enter number of edges\n";
    graf.ecount = graf.vcount - 1;
//    cout<<"Enter configuration for vertex:\"0 1\" means that vertex 0 and vertex 1 are connected\n";
    for(int i = 0 ; i < graf.ecount ; i++)
    {
        edge e1,e2;

        cin>>e1.v>>e2.v;

        graf.vct[e1.v].push_back(e2);
        graf.vct[e2.v].push_back(e1);

        //cout<<"</^\\> "<<e1.v<<" and "<<e2.v<<" has been succesfuly connected\n";
    }

/*    cout<<"\n --------------- \n";
    cout<<" |     BFS     | \n";
    cout<<" | inicjalized | \n";
    cout<<" --------------- \n\n";*/

    BFS(graf,1);
	return 0;
}
