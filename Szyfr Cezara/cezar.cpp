////////////////////////////
////////// Cezar ///////////
///// Mateusz Bartos ///////
/////////// 2012 ///////////
////////////////////////////


#include<iostream>

char alphabet[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

int main(){
    std::string myString;

    while(std::getline(std::cin,myString)){
        for(int i=0;i<myString.size();i++){
            if(myString[i] == ' '){
                continue;
            }else{
                //Finding letter in alphabet array
                for(int j = 0; j <= 25; j++){
                    if(myString[i] == alphabet[j]){
                        if(j < 23){
                            myString[i] = alphabet[j+3];
                            break;
                        }else{
                            myString[i] = alphabet[j-23];
                            break;
                        }
                    }
                }//for
            }//else
        }//for
        std::cout<<myString<<"\n";
        std::cin.sync();
    }//while
}//main()
