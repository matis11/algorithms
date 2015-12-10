#include<iostream>
#include<string>
#include<queue>
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
    if(chr == 'j' || chr == 'J')return 9;
    if(chr == 'k' || chr == 'K')return 10;
    if(chr == 'l' || chr == 'L')return 11;
    if(chr == 'm' || chr == 'M')return 12;
    if(chr == 'n' || chr == 'N')return 13;
    if(chr == 'o' || chr == 'O')return 14;
    if(chr == 'p' || chr == 'P')return 15;
    if(chr == 'r' || chr == 'R')return 16;
    if(chr == 's' || chr == 'S')return 17;
    if(chr == 't' || chr == 'T')return 18;
    if(chr == 'u' || chr == 'U')return 19;
    if(chr == 'w' || chr == 'W')return 20;
    if(chr == 'y' || chr == 'Y')return 21;
    if(chr == 'z' || chr == 'Z')return 22;
}
using namespace std;
queue<string> bufor_up;
queue<string> bufor_mid;
queue<string> bufor_down;
int main(){
    string reversed_up [24] =
    {
        " __ "," __ ","__ "," __ ","__ ","__ "," __ ","    "," ","_ ","   ","   ","    ","    "," __ "," __ "," __ "," __ ","___","    ","    ","   ","__"
    };

    string reversed_mid [24] =
    {
        "|__|","/__|","  |","/  |"," _|"," _|"," _ |","|__|","|","| ","\\_|","  |","|\\/|","| /|","|  |","|__|","|__|"," __|"," | ","|  |","|  |","\\_/","\\ "
    };

    string reversed_down [24] =
    {
        "|  |","\\__|","__|","\\__|","__|","  |","|__|","|  |","|","|_","/ |","__|","|  |","|/ |","|__|","   |"," / |","|__ "," | ","|__|","|/\\|"," | ","_\\"
    };

    string normal_up [24] =
    {
        " __ "," __ "," __"," __ "," __"," __"," __ ","    "," "," _","   ","   ","    ","    "," __ "," __ "," __ "," __ ","___","    ","    ","   ","__"
    };

    string normal_mid [24] =
    {
        "|__|","|__\\","|  ","|  \\","|_ ","|_ ","| _ ","|__|","|"," |","|_/","|  ","|\\/|","|\\ |","|  |","|__|","|__|","|__ "," | ","|  |","|  |","\\_/"," /"
    };

    string normal_down [24] =
    {
        "|  |","|__/","|__","|__/","|__","|  ","|__|","|  |","|","_|","| \\","|__","|  |","| \\|","|__|","|   ","| \\ "," __|"," | ","|__|","|/\\|"," | ","/_"
    };
    string str;

    int x;
    while(1)
    {
        cin>>x;
        if(x == 0) break;
        str.clear();
        getline(cin,str);
        if(x == 1)
        {
            for(int j = 1 ; j < str.length() ; j++)
            {
                if(str[j] == ' ')
                {
                    bufor_up.push("  ");
                    bufor_mid.push("  ");
                    bufor_down.push("  ");
                    continue;
                }
                bufor_up.push(normal_up[LetterToInt(str[j])]);
                if(j != str.length()-1) bufor_up.push(" ");
                bufor_mid.push(normal_mid[LetterToInt(str[j])]);
                if(j != str.length()-1) bufor_mid.push(" ");
                bufor_down.push(normal_down[LetterToInt(str[j])]);
                if(j != str.length()-1) bufor_down.push(" ");
            }
        }
        if(x == 2)
        {
            for(int j = str.length()-1 ; j >0 ; j--)
            {
                if(str[j] == ' ')
                {
                    bufor_up.push("  ");
                    bufor_mid.push("  ");
                    bufor_down.push("  ");
                    continue;
                }
                bufor_up.push(reversed_up[LetterToInt(str[j])]);
                if(j != 1) bufor_up.push(" ");
                bufor_mid.push(reversed_mid[LetterToInt(str[j])]);
                if(j != 1) bufor_mid.push(" ");
                bufor_down.push(reversed_down[LetterToInt(str[j])]);
                if(j != 1) bufor_down.push(" ");
            }
        }
        while(!bufor_up.empty())
        {
            cout<<bufor_up.front();
            bufor_up.pop();
        }
        cout<<"\n";
        while(!bufor_mid.empty())
        {
            cout<<bufor_mid.front();
            bufor_mid.pop();
        }
        cout<<"\n";
        while(!bufor_down.empty())
        {
            cout<<bufor_down.front();
            bufor_down.pop();
        }
        cin.sync();
        cout<<"\n";
    }
    return 0;
}
