/*
    implementa funções especialmente desenvolvidas
    para trabalhar com coleções
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;



int main(){

    vector<int> vct1 = {2,5,38,4,2,-54,43,3,74,-4,6,0,-5,5,3,94,-3};

    for(auto x:vct1){
        cout << x << " ";
    }

    cout << "\n\n";

    //all_of -> retorna true se o teste retornar com TODOS os elementos da coleção

    if(all_of(vct1.begin(),vct1.end(),[](int i){return i < 50;})){
        cout << "Todos sao menores que 50" << endl;
    } else{
        cout << "Existe um ou mais elemento maior que 50" << endl;
    }

    //any_of -> retorna true se o teste retornar com pelo menos um dos elementos da coleção

    if(any_of(vct1.begin(),vct1.end(),[](int i){return i > 12;})){
        cout  <<"Existe um ou mais elementos maiores que 12"<< endl;
     }else{
        cout <<  "Todos sao menores que 12"   << endl;
     }


    //for_each -> aplica uma função a todos os elementos da coleção

    cout << "Dobro: " << endl;
    for_each(vct1.begin(), vct1.end(), [](int i){cout << i * 2 << " ";});

    cout << "\n\n";

    //find -> procura um elemento e retorna o iterator com o resultado
    auto it = find(vct1.begin(), vct1.end(), 13);
    cout << *it << endl << endl;

    //find_if -> procura um elemento que atenda a uma determinada condição e retorna um iterator como resultado

    auto it2 = find_if(vct1.begin(),vct1.end(),[](int i){return ((i %2) == 1); });
    cout << "Primeiro elemento impar: " << *it2 << endl;

    //find_if_not -> Procura um elemento que atenda a uma determinada condição e
    auto it3 = find_if_not(vct1.begin(),vct1.end(),[](int i){return ((i %2) == 1);});
    cout << "Primeiro elemento par: " << *it3 << endl << endl ;

    //count -> Quantidade de um determinado elemento da coleção
    cout << "Quantidade de 3: " << count(vct1.begin(), vct1.end(),3) << endl;

    //count if -> Quantidade de um determinado elemento na coleção que atenda uma condição
    cout << "Quantidade de pares: " <<count_if(vct1.begin(),vct1.end(), [](int i){return (i %2 == 0);});







   return 0;
}
