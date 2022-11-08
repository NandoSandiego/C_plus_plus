/*
    padrão FIFO - First-IN-First-OUT
*/

#include <iostream>
#include <queue>

using namespace std;

int main(){

queue<int> fila1,fila2;

    fila1.push(10);
    fila1.push(20);
    fila1.push(30);
    fila1.push(40);
    fila1.push(50);

    cout << "Numero de elementos da fila: " << fila1.size()<< endl;;

    while(!fila1.empty()){
        cout <<fila1.front() << " " ;

        fila1.pop();
    }
    cout << endl;
    if(fila1.empty()){
        cout << "Fila vazia" << endl;
     }else{
        cout << "Fila com elementos" << fila1.size() << endl;
     }

    fila1.swap(fila1);

    fila2.emplace(3);

    while(!fila2.empty()){
        cout <<fila2.back() << " " ;

        fila2.pop();
    }

    while(!fila1.empty()){
        cout <<fila1.front() << " " ;

        fila1.pop();
    }





   return 0;
}
