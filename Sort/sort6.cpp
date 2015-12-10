/////////////////////////////////////
/////////////// Template ////////////
//////////// Mateusz Bartos /////////
////////// geekbajt@gmail.com ///////
// http://mbartos.lo3.edu.pl/site/ //
//////////////// 2012 ///////////////
/////////////////////////////////////

#include<iostream>
#include<algorithm>

using namespace std;



struct liczbaa{
    int value;
    int nr;
};

liczbaa tab[10000000];

int sumaCyfr(int liczba) {
// deklaracja i inicjalizacja zmiennej
int suma = 0;

do {
// wyciagamy z liczby ostatni¹ cyfrê (modulo 10)
int cyfra =  liczba % 10;
// dodajemy j¹ do sumy
suma += cyfra;
// modyfikujemy liczbê (pozbywamy siê ostatniej cyfry)
liczba = (liczba - cyfra) / 10;

// pêtla dzia³a dopóki liczba jest ró¿na od zera
} while ( liczba != 0 );

// zwracamy do miejsca wywo³ania obliczon¹ sumê
return suma;
}

int partition(liczbaa tablica[], int p, int r) // dzielimy tablice na dwie czesci, w pierwszej wszystkie liczby sa mniejsze badz rowne x, w drugiej wieksze lub rowne od x
{
int x = tablica[p].value; // obieramy x
int i = p, j = r, w; // i, j - indeksy w tabeli
while (true) // petla nieskonczona - wychodzimy z niej tylko przez return j
{
while (tablica[j].value > x) // dopoki elementy sa wieksze od x
j--;
while (tablica[i].value < x) // dopoki elementy sa mniejsze od x
i++;
if (i < j) // zamieniamy miejscami gdy i < j
{
w = tablica[i].value;
tablica[i].value = tablica[j].value;
tablica[j].value = w;
i++;
j--;
}
else // gdy i >= j zwracamy j jako punkt podzialu tablicy
return j;
}
}

void quicksort(liczbaa tablica[], int p, int r) // sortowanie szybkie
{
int q;
if (p < r)
{
q = partition(tablica,p,r); // dzielimy tablice na dwie czesci; q oznacza punkt podzialu
quicksort(tablica, p, q); // wywolujemy rekurencyjnie quicksort dla pierwszej czesci tablicy
quicksort(tablica, q+1, r); // wywolujemy rekurencyjnie quicksort dla drugiej czesci tablicy
}
}

int main(){
	int t,n = 0;
	cin>>t;
	for(int i = 0 ; i < t ; i++)
	{
	    int x;
	    cin>>x;
	    tab[i].nr = x;
	    tab[i].value = sumaCyfr(x);
	    n++;
	}
	quicksort(tab,0,n);

	for(int i = 0 ; i <= n ; i ++)
	{
	    cout<<tab[i].nr<<"\n";
	}
	return 0;
}
