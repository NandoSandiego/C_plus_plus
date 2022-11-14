#include <iostream>
#include <cmath>
#define PI 3.14159265

double radToGra(int a){
    #define PI 3.141592665
    return (a * PI)/180;
}

using namespace std;

int main(){

    //sin, cos, tan -> seno, cosseno e tangente
    int ang = 45;
    cout << "Cosseno de " << 45 << ".: " << cos(ang*PI/180) << endl;
    cout << "Seno de " << 45 << "....: " << sin(ang*PI/180) << endl;
    cout << "Tangente de " << 45 << ": " << tan(ang*PI/180) << endl;

    cout << endl;

    //asin, acos, atan
    cout << "Arco Cosseno de " << ang << ".:" <<acos(radToGra(ang)) << endl;
    cout << "Arco Seno de " << ang << "....:" <<asin(radToGra(ang)) << endl;
    cout << "Arco Tangente de " << ang << ":" <<atan(radToGra(ang)) << endl;

    cout << endl;

     //atan2 -> calcula o arco tangente usando dois parâmetros representados por x e y
     double x = -10.0;
     double y = 10.0;
     cout << "Arco tangente com x = -10 e y = 10: " << atan2(x,y)*180/PI << endl;

     cout << endl;

     //exp -> função exponencial
     double x2 = 10;
     cout << "O valor exponencial de " << x2 << " : " << exp(x2) << endl;

     cout << endl;

     //log -> retorna o logaritmo natural de um numero.
     double x3 = 15;
     cout << "O valor logaritmo de " << x3 << " : " << log(x3) << endl;

     cout << endl;

     //pow -> calcula a potencia de um numero base elevado a um exponente
     double x4 = 4;
     cout << "4 elevado a 6: " << pow(x4,5) << endl;

     //sqrt
     cout << "raiz quadrada de 7: " << sqrt(7) << endl;

     //cbrt
     cout << "raiz cubica de 27: " << cbrt(27) <<  endl;

     cout << endl;

     //ceil -> arredonda pra cima
     cout << 3.6 << ceil(3.6);

     cout << endl;

     //floor -> arredonda pra baixo
     cout << 3.6 << floor(3.6) << endl;





   return 0;
}
