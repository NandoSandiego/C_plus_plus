#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){


    vector<int>vct1{1,4,7,2,5,8,3,6,9,0};
    vector<int>vct2{1,4,7,2,5,8,3,6,9,0};
    vector<int>vct3{0,1,2,3,4,5,6,7,8,9};
    vector<int>vct4{2,5,8};
    vector<int>vct5 = {10,11,12};
    vector<int> :: iterator it;

    //equal -> verifica se os elementos de uma cole��o s�o iguais aos de outra

    cout << "Igual: " << endl;

    if(equal(vct1.begin(),vct1.end(),vct2.begin())){
        cout << "Colecoes iguais" << endl;
    }else{
        cout << "Colecoes diferentes" << endl;
    }

    cout << endl;
    //search -> pesquisa se uma cole��o esta em outra

    cout << "SEARCH: " << endl;
    it = search(vct1.begin(),vct1.end(),vct4.begin(),vct4.end());

    if( it != vct1.end() ){
        cout << "Colecao encontrada na posicao " << it - vct1.begin() << endl;
    }else{
        cout << "Colecao nao encontrada" << endl;
    }

    cout << endl;

    //COPY -> coia elementos de uma colecao em outra mas NAO CRIA(substitui) novas posi��es
    cout << "COPY" << endl;
    copy(vct5.begin(),vct5.end(),vct3.begin());
    for(auto x:vct3){
        cout << x << " ";
    }

    cout << endl << endl;

    //copy_if -> copia telelmentos de uma cole��o para outra que atendam a condi��o, mas nao cria novas posi��es

    cout << "COPY_IF" << endl;
    copy_if(vct5.begin(),vct5.end(),vct1.begin(),[](int i){return (i %2) == 0;});

    for(auto x:vct1){
        cout << x << " ";
    }

    cout << endl << endl;

    //move -> move elementos de uma cole��o para outra
    cout << "MOVE" << endl;

    vct4 = move(vct1);
    for(auto x:vct4){
        cout << x << " ";
    }

    cout << " \n\n";
    //swap
    swap(vct2,vct3);

    //transform -> aplica uma fun��o que altera os valores de uma cole��o
    cout << "TRANSFORM" << endl;
    transform(vct5.begin(),vct5.end(),vct5.begin(),[](int i){return i * 100;});

    for(auto x:vct5){
        cout << x << " ";
    }


   return 0;
}
