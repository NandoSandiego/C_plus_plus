/*
menchr -> localiza determinado caractere
          dentro do bloco de memoria da string

strchr -> localiza a primeira ocorrencia de
        determinado caractere dentro de uma string


strcspn -> localiza dentro de uma string uma chave
            que podemos especificar

strrchr -> localiza o ultimo elemento pesquisado dentro da string

strtok -> divide a string em determinados indicadores que podemos informar
        divida a string sempre que encontrar determinado divisor

strlen -> retorna o tamanho de uma string
*/

#include <iostream>
#include <cstring>

using namespace std;

int main(){

    char * txt1;
    char txt2[]="Apendendo, C++ no youtube";
    char pesquisa ='C';
    char chave[]= "du+";//pesquisa algum desses elementos

    int i;

    char * e;

    char * t;

    //memchr(onde pesquisar, o que pesquisar,tamanho da pesquisa)
    txt1 = (char*)memchr(txt2,pesquisa,strlen(txt2));

    cout << txt1 << endl;
    //mostrar a posição da pesquisa
    cout << txt1 - txt2 + 1 << endl << endl;

    //strchr(onde pesquisar, o que quero pesquisar)
    e = strchr(txt2,'e');

    cout <<"Pos: "<< e- txt2+1 << endl << endl;

    i =strcspn(txt2,chave);
    cout << "Posicao: "<<i <<" - "<< txt2[i]<< endl << endl;//elemento encontrado

    e = strrchr(txt2,'e');

    cout << "Pos: " << e - txt1 << endl << endl;

    //dividindo string
    t = strtok(txt2," ,-");

    while(t != NULL){
        cout << t << endl;
        t = strtok(NULL, " ,-");
    }

    cout <<"\n\n";
    //retornando o tamanho de uma string

       int tam=strlen(txt2) ;

       cout << tam << endl;


   return 0;
}
