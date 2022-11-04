/*

    swap -> inversão de valores do dois elementos
    pair ->
    make_pair -> constroi pares de elementos
*/
#include <iostream>
#include <utility>


using namespace std;

int main(){

    int x = 4,y = 7;

    cout << "Valor x: " << x << " - Valor y: " << y<< endl;
    swap(x,y);
    cout << "Valor x: " << x << " - Valor y: " << y<< endl << endl;

    pair<int,int>  p1;
    pair<int,char>  p2;
    pair<string,int>  p3;

    p1 = make_pair(5,8);
    p2 = make_pair(-6,'F');
    p3 = make_pair("Nando Batista",10);

    cout << "Par 1: " << p1.first << " Par 2: " << p1.second << endl;
    cout << "Par 1: " << p2.first << " Par 2: " << p2.second << endl;
    cout << "Par 1: " << p3.first << " Par 2: " << p3.second << endl;





   return 0;
}
