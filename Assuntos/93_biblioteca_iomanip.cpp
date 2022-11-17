/*
    biblioteca para a manipulação de saida

    setbase -> base: decimal,hexadecimal, octal
    setw -> largura do campo
    setfill -> preeenchimento do campo
    setprecision -> precisao de valores float e double, casas decimais
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    //setbase

    cout << setbase(16);
    cout << 10 << endl << endl;
    cout << setbase(10);

    //setw

    cout << setw(20);
    cout << "NANDO";
    cout << setw(10);
    cout << " - Aprendizado de";
    cout << setw(40);
    cout << " C++" << endl << endl;

    //setfill

    cout << "Estudo " << setw(20) << setfill('.') << " C++" << endl << endl;

    //setprecision

    double pi = 3.14159;
    cout << setprecision(3) << pi << endl << endl;




   return 0;
}
