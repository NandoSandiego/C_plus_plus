#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;

int main(){


    vector<int> vct1 = {5,10,7,3,8,9,4,2,1,0};
    vector<int> vct2 = {11,12,13};
    vector<int> :: iterator it,it1,it2;

    for(it = vct1.begin(); it != vct1.end(); it++){
        cout << *it << " ";
    }
    cout << "\n\n";

    it1 = vct1.begin();
    it2 = vct2.end() - 1;

    cout << "Primeiro elemento: " << *it1 << "\n";
    cout << "Ultimo elemento: " << *it2 << "\n";

    cout << "\n";

    advance(it1,2);
    cout << "Terceiro elemento: "<< *it1 << endl;

    advance(it2,-1);
    cout << "Penultimo elemento: "<< *it2 << endl;

    cout << "Valores entre it1 e it2: "<< distance(it1,it2) - 1 << endl;

    cout << *it1 << " - Antes: " << *prev(it1) << " depois: " << *next(it1) << endl;

    copy(vct2.begin(),vct2.end(),back_inserter(vct1));
    //copy(vct2.begin(),vct2.end(),front_inserter(vct1));
    //copy(vct2.begin(),vct2.end(),inserter(vct1,vct1.begin() + 5));

    for (it = vct1.begin(); it != vct1.end();it++){
        cout << *it << " ";
    }


   return 0;
}
