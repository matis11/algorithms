#include<iostream>

using namespace std;
string pl [59] = {"boze narodzenie","poznym popoludniem","tam","koleda","zwyczaj","nowa zelandia","swietowac","choinka","pochodzic","swieta bozego narodzenia","krewni","chrzescijanie","sok winogronowy","szopka","gwiazda","pochod swiateczny","narodzenie dzieciatka jezus","wspominac","prezent","dekoracja swiateczna","wieniec adwentowy","galezie choinkowe","swieca","niedziela adwentu","latarnie uliczne","dzwonek swiateczny","oswietlac","gwiazda bozonarodzeniowa","szyszka","papierowe serce","s�odycze","jab�ka","orzechy","wierzy�","duch domowy","strzec ","my�le�","dzikie zwierz�ta","rozrzuca� (po�ywienie)","po�ci�","niebo","danie","strudzony w�drowiec","w niekt�rych miejscach","nawet","pasterka","pieczona g�"};
string de [59] = {"das Weihnachten","am spaten Nachmittag","dort","das Weihnachtslied","die Slitte","Neuseeland","feiern","der Tannenbaum","stammen","weihnachtsfest","die Verwandten","die Christen","der Traubensaft","die Krippe","der Stern","der Festzug","die Geburt des Christkindes","erinnern","das Geschenk","die Weinachtsdekoration","der Adventskranz","die Tannenzweigen","der Kerze","der Adventssonntag","die Strassenlaternen","die Weihnachtsglocke","beleuchten","der Weihnachtsstern","der Tannenzapfen","das Papierherz","die S�ssigkeiten","die �pfeln","die N�ssen","glauben","der Hausgeist","besch�tzen","denken","die Tiere draussen","streuen (das Futter)","fasten","der Himmel","der Gang","der m�der Fremder","an manchen Orten","sogar","der Mitternachtsgottesdienst","der G�nsebraten"};

int main(){
    for(int i = 0 ; i < 59 ; i++){
        cout<<pl[i]<<"\n";
        string temp = "";
        cin>>temp;
        if(temp == de[i]){
            cout<<"Dobrze!\n";
        }else{
            cout<<"Zle - "<<de[i]<<"\n";
        }
    }
    cout<<"UMIESZ!\n";
    return 0;
}
