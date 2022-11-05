/*
    string != ctring
    string -> implementa a classe string

    iterator
        -begin -> retorna o iterator para o primeiro elemento
        -end -> retorna o iterator para o primeiro elemento
        -rbegin -> aponta para o final
        -rbegin -> aponta para o inicio

     size / length -> imprime o tamanho
     max_size -> retorna o tamanho maximo que a string pode ter
     resize - > altera o tamanho da string
     capacity -> retorna o tamanho do espaço alocado para a string

     clear -> limpa a string
     empty ->verifica a string. retorna true se tiver vazia, false se tiver algo

     strink_tofit -> reduz a capacidade da string em caso em caso de diminuição de conteudo


*/

#include <iostream>
#include <string>

using namespace std;

int main(){

    string txt("Nando");
    //outra forma
    txt = "Ola Mundo! estou aprendnedo C++";
    string:: iterator it_i, it_f;



    it_i = txt.begin();
    it_f = txt.end()-1;// imprime antes do terminador


    cout << "Primeiro elemento: " << *it_i << endl ;
    cout << "Ultimo elemento: " << *it_f << endl << endl ;

    //Capacidade da string que estamos trabalhando

    cout << txt.size() << endl;
    cout << txt.length() << endl;
    cout << txt.max_size() << endl;
    txt.resize(7);
    cout << txt << endl;
    cout << txt.capacity() << endl << endl;

    txt.clear();
    cout << "cade ? " << txt << endl;

    if(txt.empty()){
        cout << "String vazia" << endl;
    }else{
        cout << txt << endl;
    }

    txt.shrink_to_fit();








   return 0;
}
