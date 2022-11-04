/*implementa funções para manipulação de strings

strcpy -> copia uma determinada string de origem para uma
determinada tring de destino

strcat -> concatena duas string ou um novo conteudo a uma string
strncat -> especifica quantos caracteres quer concatenar
strcmp -> compara duas strings
        0 = iguais
        >0 = primeira maior que a segunda
        <0 = primeira menor  que a segunda

strncmp -> indica até aonde eu quero comparar


*/

#include <iostream>
#include <cstring> //diferente da bliblioteca string
using namespace std;

int main(){

    char txt1[50] = "Ola Mundo Seja bem vindo!";
    char txt2[50] = "Tudo bem ? ";
    char txt3[50] = "Nando";
    int res;

    //primeiro destino, depois origem
    //de onde vai, pra onde vem,quantos caracteres quer copiar

    strcpy(txt2,txt1);//memccpy(txt2,txt1, sizeof(txt1)+1);

    cout << txt2<< endl <<endl;

    strncat(txt2, txt3,3);
    strcat(txt3, ", tudo bem ?");

    cout << txt2 <<endl<< endl;
    cout << txt3 << endl << endl;

    res = strcmp(txt1,txt2);
    if(res == 0){
        cout << "Iguais";
    }else{
        cout << "diferentes";
    }







   return 0;
}
