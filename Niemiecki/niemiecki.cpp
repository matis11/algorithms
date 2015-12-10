#include<iostream>

using namespace std;
string pl [59] = {"boze narodzenie","poznym popoludniem","tam","koleda","zwyczaj","nowa zelandia","swietowac","choinka","pochodzic","swieta bozego narodzenia","krewni","chrzescijanie","sok winogronowy","szopka","gwiazda","pochod swiateczny","narodzenie dzieciatka jezus","wspominac","prezent","dekoracja swiateczna","wieniec adwentowy","galezie choinkowe","swieca","niedziela adwentu","latarnie uliczne","dzwonek swiateczny","oswietlac","gwiazda bozonarodzeniowa","szyszka","papierowe serce","s³odycze","jab³ka","orzechy","wierzyæ","duch domowy","strzec ","myœleæ","dzikie zwierzêta","rozrzucaæ (po¿ywienie)","poœciæ","niebo","danie","strudzony wêdrowiec","w niektórych miejscach","nawet","pasterka","pieczona gêœ"};
string de [59] = {"das Weihnachten","am spaten Nachmittag","dort","das Weihnachtslied","die Slitte","Neuseeland","feiern","der Tannenbaum","stammen","weihnachtsfest","die Verwandten","die Christen","der Traubensaft","die Krippe","der Stern","der Festzug","die Geburt des Christkindes","erinnern","das Geschenk","die Weinachtsdekoration","der Adventskranz","die Tannenzweigen","der Kerze","der Adventssonntag","die Strassenlaternen","die Weihnachtsglocke","beleuchten","der Weihnachtsstern","der Tannenzapfen","das Papierherz","die Süssigkeiten","die Äpfeln","die Nüssen","glauben","der Hausgeist","beschützen","denken","die Tiere draussen","streuen (das Futter)","fasten","der Himmel","der Gang","der müder Fremder","an manchen Orten","sogar","der Mitternachtsgottesdienst","der Gänsebraten"};

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
