/////////////////////////////////////////////////
///////////////// Multidrink ////////////////////
/////////////////////////////////////////////////
/////////////// Mateusz Bartos //////////////////
//////// http://mbartos.lo3.edu.pl/site /////////
//////////////////// 2012 ///////////////////////
/////////////////////////////////////////////////


#include<iostream>
#include<vector>
#include<list>

#define MAXV 100000 //maksymalna liczba wierzcholkow
#define INFINITY 10000000

using namespace std;

bool visited[MAXV+1];
vector<int>result;
list<int> q, L[MAXV+1];
int n;

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
int test = -1;
bool tester;
void DFSHamilton(int v)
{
  q.push_back(v);
  if(q.size() == n)
  {

    if(test != *(q.begin())){
        for(list<int>::iterator i = q.begin(); i != q.end(); i++)
          cout << (* i) << "\n";

        test = *(q.begin());
    }
  }
  else
  {
    visited[v] = true;

	for(int x = 0; x < city.degree[v] ; x++)
	  if(!visited[city.adj[v][x].v]) DFSHamilton(city.adj[v][x].v);
    visited[v] = false;
  }
  q.pop_back();
}

int main(){
    ios_base::sync_with_stdio(0);

    cin>>n;

    city.vcount = n;
    city.adj.resize(100000);

    for(int i=1;i<n;i++){
        int temp,temp2;
        cin>>temp>>temp2;
        edge e1,e2;
        e1.v = temp2;
        e1.waga = 1;
        e2.v = temp;
        e2.waga = 1;
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
                        if(!znajdz(city.adj[index][l].v, i)){
                            edge e1,e2;
                            e1.v = city.adj[index][l].v;
                            e1.waga = 1;
                            e2.v = i;
                            e2.waga = 1;
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
    q.clear();
    DFSHamilton(1);
    if(test == -1){
        cout<<"BRAK\n";
    }



    return 0;
}
