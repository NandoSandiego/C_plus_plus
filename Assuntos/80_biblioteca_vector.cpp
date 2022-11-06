/*

*/


#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector <int> vct={9,8,7,6,5,4,3,2,1,0};

    for(auto it = vct.begin(); it != vct.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    cout << vct.size() << endl  ;
    cout << vct.max_size() << endl;


    vct.resize(7);

    cout << vct.capacity() << endl;
    vct.shrink_to_fit();
    cout << vct[5] << endl;
    cout << vct.at(3) << endl;
    cout << vct.front() << endl;
    cout << vct.back() << endl;

    vector <int> vct2;
    vct2.assign(10,3);//
    for(auto x: vct2){
        cout << x << " ";
    }

    vct.emplace(vct2.begin()+2,5 ) ;//adiciona sem remover da posição indicada (arreda elemento)
    vct2.emplace_back(3); //adiciona no final



   return 0;
}
