/*
    typeid -> retorna inofaçoes do tipo do elemento pesquisado


*/

#include <iostream>
#include <typeinfo>

using namespace std;

class Celular{
};


int main(){

    if(typeid(int).before(typeid(char))){ // mostra a ordem de precedencia dos tipo
        cout << " int vem antes de char" << endl;

    }else{
        cout << "char vem antes de int" << endl;
    }

    auto num{10};
    auto letter{'f'};
    auto frase{"OLa, tudo bem ?"};

    cout << "Tipo de num: "<< typeid(num).name() << endl;
    cout << "Tipo de num: "<< typeid(letter).name()<< endl;
    cout << "Tipo de num: "<< typeid(frase).name()<< endl;
    cout << "Tipo de num: "<< typeid(Celular).name()<< endl;




   return 0;
}
