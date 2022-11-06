/*
 array<tipo, quantidade de elementos> nome = {};

 iterator
     -begin
     -end
     -rbegin
     -renf

*/

#include <iostream>
#include <array>

using namespace std;

int main(){

    array<int, 10> vetor ={0,1,2,3,4,5,6,7,8,9};

    array<int,10> estudo;


    for(auto x:vetor){
        cout << x << " " ;
    }
    cout << endl;

    for(auto it = vetor.rbegin(); it != vetor.rend() ;it++){
        cout << *it << "  ";
    }
    cout << endl;
    //Funções para capacidade
    cout << vetor.size() << endl; // mostra o tamanho
    cout << vetor.max_size() << endl; //mostra a capacidade

    if(vetor.empty()){
        cout << "Array vazio";
    }else{
        cout << "NAo esta vazio";
    }

    cout << endl;
     // funções para acesso a elementos

    cout << vetor.at(4) << endl;  // informa o que ele tem na posição
    cout << vetor.front()  << endl;  // retorna o primeiro elemento
    cout << vetor.back() << endl; // retorna o ultimo elemento
    cout << endl;

    //funções modificadoras

    //preenche todo o aray com o elemento indicado

    estudo.fill(8);

    for(auto x:estudo){
        cout << x << " ";
    }

    cout << endl;

    //troca os elementos de dois arrays

    estudo.swap(vetor);

     for(auto x:estudo){
        cout << x << " ";
    }
cout << endl;
    cout << estudo <<  " ";

     for(auto x:vetor){
        cout << x << " ";
    }
    cout << vetor << endl;


   return 0;
}
