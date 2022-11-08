/*
    padrão LIFO - Last-IN-First-OUT

*/

#include <iostream>
#include <stack>

using namespace std;

int main(){

    stack<int> pilha1,pilha2;

    pilha1.push(10);
    pilha1.push(20);
    pilha1.push(30);
    pilha1.push(40);
    pilha1.push(50);

    cout << "Numero de elementos da pilha: " << pilha1.size()<< endl;;

    while(!pilha1.empty()){
        cout <<pilha1.top() << " " ;

        pilha1.pop();
    }
    cout << endl;
    if(pilha1.empty()){
        cout << "Pilha vazia" << endl;
     }else{
        cout << "Pilha com elementos" << endl;
     }

    pilha1.swap(pilha2);

    pilha2.emplace(3);

    while(!pilha2.empty()){
        cout <<pilha2.top() << " " ;

        pilha1.pop();
    }

    while(!pilha1.empty()){
        cout <<pilha1.top() << " " ;

        pilha1.pop();
    }





   return 0;
}
