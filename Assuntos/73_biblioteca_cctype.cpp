/*
    verifica dados de caracteres
    fun��es para fazer verifica��o de tipos de dados
    e fun��ses para conversoes para caracteres menusculos e maiusculos

    isalnum
    isalpha
    isspace -> se tem espa�o
    iscntrl -> se um controle
    isdigit -> verifica se e um digito
    islower ->
    isprint -> � imprimivel
    ispunct -> se tem pontua��o
    isupper -> � maiusculo
    isxdigit -> � decimal

    tolower


*/
#include <iostream>
#include <cctype>

using namespace std;

int main(){

    char str[]= "nando Batista  ";
    char c;
    int i= 0, esp = 0;

    while(isalnum(str[i])){ //o caractere e afanumerico ?

        i++;
    }

    cout << "Os " << i << " primeiros caracteres sao alfanumericos \n\n";
    i = 0;
    while(isalpha(str[i])){ //o caractere e afanumerico ?

        i++;
    }

    cout << "Os " << i << " primeiros caracteres sao alfanumericos \n\n";
    i = 0;
    while(str[i]){ //o caractere e afanumerico ?

        if(isalpha(str[i])){
            cout << "Caractere " << str[i] << " e alfabetico \n";
        }else{
            cout << "Caractere" << str[i] << " NAO e alfabetico \n";
        }

        i++;
    }
    cout << "\n\n";

    i=0;

    while(str[i]){ //Conta a quantidade de espa�os
        if(isspace(str[i])){
            esp++;
        }
        i++;
    }

    cout << "Quantidade de espaco: "<< esp <<"\n\n";

    //Deixa maiuscula ou menuscula

    while(str[i]){
        c=str[i];
        putchar(tolower(c));//transforma em maiusculo

        i++;

    }
        cout << str;


   return 0;
}
