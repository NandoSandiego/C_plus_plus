/*
    -nao permite que os elementos sejam duplicados
    -independente da ordem ele sempre ordena os elementos
*/
#include <iostream>
#include <set>

using namespace std;

int main(){

    set<int> set1 ={9,1,0,2,7,4,3,6,8,5};
    set<int>:: iterator it;

    for(auto x:set1){
        cout << x << " - ";
    }

    cout << endl << endl;

    set<int> set2 = {6,9,2,32,8,2,94,2,6,87,2,4,3,2} ;

    //permite inserir elementos dentro do
    //container mas se o elemento ja existir
    //ele NAO faz a inserção
    set2.emplace_hint(set2.begin(),10);

    for(auto x : set2){
        cout << x << " - ";
    }
    // pesquisa um determinado elemento
    //e retorna um iterator com o elemento pesquisado

    it = set2.find(20);

    //COUT -> conta quantos elementos de um determiado valor
    //existem dentro do container

    if(set1.count(2) != 0){
        cout << "Esta no container" << endl;
    }else{
        cout << "NAo esta no container" << endl;
    }


    //LOWER_BOUND e UPPER_BOUND
    //retorna um iterator com o elemento encontrado

    it =set1.lower_bound(20);

    cout << *it << endl;


   return 0;
}
