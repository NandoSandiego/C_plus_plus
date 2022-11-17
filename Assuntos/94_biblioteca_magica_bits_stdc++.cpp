/*
usa qualquer função de qualquer biblioteca sem ter que
fazer o include da biblioteca
*/

#include <iostream>
#include <bits/stdc++.h>//include magico

using namespace std;

int main(){

    pair<int,int> par;
    par = make_pair(10,5);
    cout << par.first << " - " << par.second << endl;

    vector<int>vct ={1,3,5,7,9};

    for(auto x: vct){
        cout << x << " - ";
    }

     cout << endl;

    double x = 10;
    cout << pow(x,2) << endl;

    fstream f;
    f.open("94_biblioteca_magica.txt", fstream::in | fstream:: out | fstream :: app);
    f << "Aprendendo C++" << endl;
    f.close();


   return 0;
}

