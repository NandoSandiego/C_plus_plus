/*
    recursos que cria novos objetos atraver de estructs ou classes
    funçoes para manipular elementos dentro de outras classes fora desssas classes como o objetos
*/

#include <iostream>
#include <functional>

struct aprendiz{
    int num;
    int dobro(){
        return num * 2;
    }
};

using namespace std;

int soma(int n1, int n2){

    return n1 + n2;
}

int main(){

    int n1 = 10, n2 =5;
    auto n3 = cref(n1); //Cria uma refencia entre dois elementos C++ 11

    auto s1 = bind(soma,n1,n2); // ligação de uma função com uma variavel

    cout << s1() << endl;

     n1++;
    cout << n3 << endl;

    //
    aprendiz n4{18};
    aprendiz n5{16};

        // mem_fn -> usar algo fora da struct
        // :: diz que quero acessar a informação
    auto dobro2 =mem_fn(&aprendiz::dobro);
    cout << dobro2(n4) << endl;

    auto dobro3 = mem_fn(&aprendiz::dobro);
    cout << dobro3(n5) << endl;


   return 0;
}
