/*
    biblioteca de associação de chave - valor
*/

#include <iostream>
#include <map>

using namespace std;

int main(){

    map<int, string> map1;
    map <int, string > :: iterator it;

    map1[0] = "Branco";
    map1[1] = "Preto";
    map1[2] = "Vermelho";
    map1[3] = "Verde";
    map1[4] = "Azul";
    map1[7] = "Amarelo";

    for(auto x : map1){
        cout << x.first << " - " << x.second << endl;
    }




   return 0;
}
