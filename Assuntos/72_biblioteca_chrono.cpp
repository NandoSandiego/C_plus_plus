/*
    é um subnamespace que serve pra manipular tempo, data e hora
    nao estao definido no namespace std e sim no namespace chrono

    second
    minutes
*/

#include <iostream>
#include <chrono>
#include <ctime>

using namespace std;
using namespace chrono;

int main(){


    seconds s(60);
    minutes m(1);



//    hours ;
//    microseconds
//    namoseconds;

    //System_clock -> acessa as informações do relogio do sistema
        using chrono:: system_clock;
        duration<int,ratio<60 * 60 * 24>> um_dia(1);// duração de segundos em um dia

        cout << s.count() << endl;

        system_clock::time_point hoje = system_clock::now();
        system_clock::time_point amanha = hoje + um_dia;
        system_clock::time_point ontem = hoje - um_dia;

        time_t tt;// cria um tipo

        tt = system_clock::to_time_t(hoje);
        cout << "HOJE: " <<ctime(&tt) << endl;

        tt = system_clock::to_time_t(amanha);
        cout << "Amanha: " <<ctime(&tt) << endl;

        tt = system_clock::to_time_t(ontem);
        cout << "Amanha: " <<ctime(&tt) << endl;

        steady_clock::time_point t1 =steady_clock::now();
        cout << "Imprimindo 1500 estrelas: " << endl;

        for(int i = 0; i < 1500; i++){
            cout << "*";
        }

        cout << endl;

        steady_clock::time_point t2 =steady_clock::now();
        duration<double> tempo = duration_cast<duration<double>>(t2- t1);

        cout<< "Tempo de trabalho: " << tempo.count() << " segundos" << endl;








   return 0;
}
