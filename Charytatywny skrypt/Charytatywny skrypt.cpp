#include<iostream>
#include <windows.h>

using namespace std;


int main(){
    cout<<"Prosze podac ilosc sekund, ktora program ma odczekac przed zamknieciem przegladarki (domyslnie 5)."<<"\n";
    int czas;
    cin>>czas;
    czas*=1000;
    system("start iexplore.exe http://pah.org.pl/pajacyk/dziekujemy");
    system("start iexplore.exe http://www.okruszek.org.pl/dziekujemy.php");

    Sleep(czas);
    system("taskkill /IM iexplore.exe");
    system("taskkill /IM iexplore.exe");

    system("start iexplore.exe http://www.ripple.org/give.php?p=water");
    system("start iexplore.exe http://www.ripple.org/give.php?p=food");

    Sleep(czas);
    system("taskkill /IM iexplore.exe");
    system("taskkill /IM iexplore.exe");

    system("start iexplore.exe http://www.ripple.org/give.php?p=education");
    system("start iexplore.exe http://www.ripple.org/give.php?p=money");

    Sleep(czas);
    system("taskkill /IM iexplore.exe");
    system("taskkill /IM iexplore.exe");

    system("start iexplore.exe http://www.ecologyfund.com/ecology/_donate_rainforest.html");
    system("start iexplore.exe http://www.ecologyfund.com/ecology/_donate_us.html");

    Sleep(czas);
    system("taskkill /IM iexplore.exe");
    system("taskkill /IM iexplore.exe");

    system("start iexplore.exe http://www.wyklikajzywnosc.pl/dziekujemy/");
    system("start iexplore.exe http://www.porloschicos.com/PorLosChicos.NET/PorLosChicos.aspx?comando=donarFrame");

    Sleep(czas);
    system("taskkill /IM iexplore.exe");
    system("taskkill /IM iexplore.exe");

    system("start iexplore.exe http://www.craigresearchlabs.com/cancer2.html");
    system("start iexplore.exe http://www.e-inclusionsite.org/click_to_donate.php");

    Sleep(czas);
    system("taskkill /IM iexplore.exe");
    system("taskkill /IM iexplore.exe");

    system("start iexplore.exe http://donate1click.com/thankyou.html");

    Sleep(czas);
    system("taskkill /IM iexplore.exe");

    return 0;
}
