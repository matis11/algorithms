/////////////////////////////////////////////////
/////////////////// Cennik //////////////////////
/////////////////////////////////////////////////
/////////////// Mateusz Bartos //////////////////
//////// http://mbartos.lo3.edu.pl/site /////////
//////////////////// 2012 ///////////////////////
/////////////////////////////////////////////////

#include <iostream>
#include <vector>
#include <queue>

#define MAXV 100000 //maksymalna liczba wierzcholkow
#define INFINITY 10000000

using namespace std;

struct node{
    int d;  //oszacowana odleglosc od zrodla
    int u;  //numer wierzcholka

    node(int n=0){
        d=INFINITY;
        u=n;
    }
    bool operator< (const node& x) const{
        return d > x.d;
    }
};

struct edge{
    int v;
    int waga;
};

struct graph{
    int d[MAXV];                //oszacowana odleglosc od zrodla
    int p[MAXV];                //poprzednik w drzewie przeszukiwan
    int vis[MAXV];              //czy przetworzony ?
    int degree[MAXV];           //stopien wierzcholka
    vector<vector<edge> > adj;  //lista sasiedztwa
    int vcount;                 //ilosc wierzcholkow
    int olddegree[MAXV];
};

graph city;

bool znajdz(int x,int y){
    for(int i = 0; i < city.degree[y] ; i++){
        if(city.adj[y][i].v == x){
            return true;
        }
    }
    return false;
}

int Dijkstra(graph* G, int s, int destination){ //dijkstra v2.0, w 3,5 minuty
    node tmp, next;
    int nV, nWaga;
    priority_queue<node> Q;

    for(int i=1; i<=G->vcount; ++i){ //ISS; numerowanie wierzcholkow od 1
        Q.push(node(i));
        G->p[i] = G->d[i] = INFINITY;
        G->vis[i]=false;
    }
    G->d[s]=0;
    tmp.u=s;
    tmp.d=0;
    Q.push(tmp);

    while(!Q.empty()){
        tmp=Q.top();
        Q.pop();

        if(!G->vis[tmp.u]){
            G->vis[tmp.u]=true;

            for(int i=0;i<G->degree[tmp.u];++i){
                nV=G->adj[tmp.u][i].v;
                nWaga=G->adj[tmp.u][i].waga;

                if(G->d[nV] > (G->d[tmp.u] + nWaga)){
                    next.u=nV;
                    next.d = G->d[nV] = G->d[tmp.u] + nWaga;
                    G->p[nV]=tmp.u;
                    Q.push(next);
                }
            }
        }
    }
    return G->d[destination];
}

int main(){
    ios_base::sync_with_stdio(0);
    int n,m,k,a,b;
    cin>>n>>m>>k>>a>>b;
    city.vcount = n;
    city.adj.resize(100001);

    for(int i=0;i<m;i++){
        int temp,temp2;
        cin>>temp>>temp2;
        edge e1,e2;
        e1.v = temp2;
        e1.waga = a;
        e2.v = temp;
        e2.waga = a;
        city.adj[temp].push_back(e1);
        city.adj[temp2].push_back(e2);
        city.degree[temp]+=1;
        city.degree[temp2]+=1;
        city.olddegree[temp]+=1;
        city.olddegree[temp2]+=1;

    }//for

    for(int i = n; i > 0; i--){//DLA KAZDEGO MIASTA
        for(int j = 0; j < city.olddegree[i]; j++){//DLA KAZDEGO SASIADA MIASTA
            int index = city.adj[i][j].v;
            for(int l = 0; l < city.olddegree[index] ; l++){//DLA KAZDEGO SASIADA SASIADA
                if(city.adj[index][l].v == i){//JEZELI SASIAD SASIADA JEST MIASTEM I
                    continue;
                }
                for(int o = 0; o < city.olddegree[i]; o++){//DLA KAZDEGO SASIADA MIASTA
                    if(city.adj[index][l].v == city.adj[i][o].v){
                        break;
                    }else{
                        if((!znajdz(city.adj[index][l].v, i)) && (city.adj[index][l].waga != b)){
                            edge e1,e2;
                            e1.v = city.adj[index][l].v;
                            e1.waga = b;
                            e2.v = i;
                            e2.waga = b;
                            city.adj[i].push_back(e1);
                            city.adj[e1.v].push_back(e2);
                            city.degree[i]+=1;
                            city.degree[e1.v]+=1;
                        }
                    }
                }

            }
        }
    }



    for(int i=1;i<=city.vcount;i++){
        if(i == k){
            cout<<"0\n";
            continue;
        }//if
        cout<<Dijkstra(&city,k,i)<<"\n";
    }//for


    return 0;
}
