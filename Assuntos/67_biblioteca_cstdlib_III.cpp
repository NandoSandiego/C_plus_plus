/*
    ABS -> retorna o valor absoluto
    DIV -> retorna o quociente e o resto de uma divisão
        -div_t  - recebe o resultado da função div
        -size_t - recebe tamanho
*/
#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    int n = -10, num, den;
    div_t res;

    num = 10;
    den = 3;

    res = div(num, den);

    cout << abs(n) << endl;
    cout << num <<" Dividido por "<< den << " = " <<res.quot << " resto: " << res.rem << endl;

    /* ldiv -> long int
       llabs -> long long ads (c++11)
       lldiv -> long long ads (c++11)
       size_t -> trabalha com tamanho
    */

    RAND_MAX

   return 0;
}
