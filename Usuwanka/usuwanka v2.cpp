#include<iostream>
#include<vector>


using namespace std;

struct block{
	int index;
	int v;
	int next;
	int prev;
};

    block tab[1000001];
    vector<vector<int> > result;

int main(){
    ios_base::sync_with_stdio(0);
    result.resize(1000000);
	int n,k;
	cin>>n>>k;
    char temp;
    cin>>temp;
    if(temp == 'c') tab[1].v = 0;
    if(temp == 'b') tab[1].v = 1;
    tab[1].prev = -1;
    tab[1].next = 2;
    tab[1].index = 1;

	for( int i = 2 ; i < n ; i++ ){
	    tab[i].index = i;
        cin>>temp;
        if(temp == 'c') tab[i].v = 0;
        if(temp == 'b') tab[i].v = 1;
        tab[i].prev = i-1;
        tab[i].next = i+1;
	}//for

    cin>>temp;
    if(temp == 'c') tab[n].v = 0;
    if(temp == 'b') tab[n].v = 1;
    tab[n].prev = tab[n-1].index;
    tab[n].next = -1;
    tab[n].index = n;

//OBLICZANIE D£UGOŒCI CI¥GU I LICZENIE JEGO SUMY NA STARCIE
    int suma = 0;
    int first = 1, last = n;



//PRZESZUKIWANIE LISTY (CA£EJ)

    int i = 1, currentresult = 0;
    while(((last != -1) && (first != -1))){
        int start,end,oldstart,oldend;
        suma+= tab[first].v;
        i = tab[tab[first].index].next;

        for(int j = 1 ; j < k ; j++ ){
            suma += tab[i].v;
            i = tab[tab[i].index].next;
        }//for

        suma += tab[i].v;

        start = first;
        end = i;


        while(suma != k){
            oldstart = start;
            oldend = end;
            suma -= tab[start].v;
            start = tab[start].next;
            end = tab[end].next;
            suma += tab[end].v;
        }//while#1


        if(start == first){
            first = tab[end].next;
        }//if

        if(end == last){
            last = tab[start].prev;
        }

        i = start;

        for(int j = 1 ; j <= k+1 ; j++ ){
            result[currentresult].push_back(tab[i].index);
            i = tab[tab[i].index].next;
        }//for

        currentresult++;

        tab[tab[tab[start].prev].index].next = tab[tab[end].next].index;
        tab[tab[tab[end].next].index].prev = tab[tab[start].prev].index;

        suma = 0;

    }//while#1


    for( int j = currentresult -1 ; j >= 0 ; j--){
        for( int k = 0; k < result[j].size() ; k++){
            cout<<result[j][k]<<" ";
        }//for#2
        cout<<"\n";
    }//for#1

    return 0;
}
