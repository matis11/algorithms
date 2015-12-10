/////////////////////////////////////
//////////////// JZAPKAB ////////////
//////////// Mateusz Bartos /////////
////////// geekbajt@gmail.com ///////
// http://mbartos.lo3.edu.pl/site/ //
//////////////// 2012 ///////////////
/////////////////////////////////////

#include<iostream>
#include<string>

using namespace std;

int LetterToInt(char chr){
    if(chr == 'a' || chr == 'A')return 0;
    if(chr == 'b' || chr == 'B')return 1;
    if(chr == 'c' || chr == 'C')return 2;
    if(chr == 'd' || chr == 'D')return 3;
    if(chr == 'e' || chr == 'E')return 4;
    if(chr == 'f' || chr == 'F')return 5;
    if(chr == 'g' || chr == 'G')return 6;
    if(chr == 'h' || chr == 'H')return 7;
    if(chr == 'i' || chr == 'I')return 8;
    if(chr == 'k' || chr == 'K')return 9;
    if(chr == 'l' || chr == 'L')return 10;
    if(chr == 'm' || chr == 'M')return 11;
    if(chr == 'n' || chr == 'N')return 12;
    if(chr == 'o' || chr == 'O')return 13;
    if(chr == 'p' || chr == 'P')return 14;
    if(chr == 'q' || chr == 'Q')return 15;
    if(chr == 'r' || chr == 'R')return 16;
    if(chr == 's' || chr == 'S')return 17;
    if(chr == 't' || chr == 'T')return 18;
    if(chr == 'v' || chr == 'V')return 19;
    if(chr == 'x' || chr == 'X')return 20;
    if(chr == 'y' || chr == 'Y')return 21;
    if(chr == 'z' || chr == 'Z')return 22;
}

int tab[24] =
{
    1,2,3,4,5,6,7,8,9,10,20,30,40,50,60,70,80,90,100,200,300,400,500
};

int main(){
    string str;
	cin>>str;

	int suma = 0;
	for(int i = 0 ; i < str.length() ; i++)
	{
	    suma += tab[LetterToInt(str[i])];
	}

	cout<<suma<<"\n";
	return 0;
}
